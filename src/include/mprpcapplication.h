#pragma once // 只使用一次
#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

// mprpc框架的基础类，负责框架的一些初始化操作
class MprpcApplication
{
public:
    static void Init(int argc, char **argv);
    static MprpcApplication &GetInstance();
    static MprpcConfig &GetConfig();

private:
    // 单例模式 静态的方法中
    static MprpcConfig m_config;

    MprpcApplication() {}
    // 跟拷貝構造相關的，全部delete掉
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication &&) = delete;
};