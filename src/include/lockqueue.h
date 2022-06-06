#pragma once
#include <queue>
#include <thread>
#include <mutex>              // pthread_mutex_t
#include <condition_variable> // pthread_condition_t

// 异步写日志的日志队列  模板代码只能写在头文件之中
template <typename T>
class LockQueue
{
public:
    // 多个worker线程(框架里的工作线程调用 )都会写日志queue
    void Push(const T &data)
    {
        // 类似智能指针，可以加锁和释放锁
        std::lock_guard<std::mutex> lock(m_mutex);
        m_queue.push(data);
        m_condvariable.notify_one(); // 只有一个线程在里面读日志写到日志文件里
    }

    // 一个线程读日志queue，写日志文件
    T Pop()
    {
        // 离开作用域后释放锁
        std::unique_lock<std::mutex> lock(m_mutex);
        // 用while 防止线程的虚假唤醒
        while (m_queue.empty())
        {
            // 日志队列为空，线程进入wait状态
            m_condvariable.wait(lock);
        }

        T data = m_queue.front();
        m_queue.pop();
        return data;
    }

private:
    std::queue<T> m_queue;
    std::mutex m_mutex;
    std::condition_variable m_condvariable;
};