// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "friend.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace fixbug {
class ResultCodeDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ResultCode> {
} _ResultCode_default_instance_;
class GetFriendsListRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GetFriendsListRequest> {
} _GetFriendsListRequest_default_instance_;
class GetFriendsListResponseDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GetFriendsListResponse> {
} _GetFriendsListResponse_default_instance_;

namespace protobuf_friend_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[3];
const ::google::protobuf::ServiceDescriptor* file_level_service_descriptors[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResultCode, errcode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResultCode, errmsg_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFriendsListRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFriendsListRequest, userid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFriendsListResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFriendsListResponse, result_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetFriendsListResponse, friends_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(ResultCode)},
  { 6, -1, sizeof(GetFriendsListRequest)},
  { 11, -1, sizeof(GetFriendsListResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ResultCode_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_GetFriendsListRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_GetFriendsListResponse_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "friend.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, file_level_service_descriptors);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

}  // namespace

void TableStruct::Shutdown() {
  _ResultCode_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _GetFriendsListRequest_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  _GetFriendsListResponse_default_instance_.Shutdown();
  delete file_level_metadata[2].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ResultCode_default_instance_.DefaultConstruct();
  _GetFriendsListRequest_default_instance_.DefaultConstruct();
  _GetFriendsListResponse_default_instance_.DefaultConstruct();
  _GetFriendsListResponse_default_instance_.get_mutable()->result_ = const_cast< ::fixbug::ResultCode*>(
      ::fixbug::ResultCode::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\014friend.proto\022\006fixbug\"-\n\nResultCode\022\017\n\007"
      "errcode\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\014\"\'\n\025GetFrie"
      "ndsListRequest\022\016\n\006userid\030\001 \001(\r\"M\n\026GetFri"
      "endsListResponse\022\"\n\006result\030\001 \001(\0132\022.fixbu"
      "g.ResultCode\022\017\n\007friends\030\002 \003(\0142c\n\020FriendS"
      "erviceRpc\022O\n\016GetFriendsList\022\035.fixbug.Get"
      "FriendsListRequest\032\036.fixbug.GetFriendsLi"
      "stResponseB\003\200\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 303);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "friend.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_friend_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResultCode::kErrcodeFieldNumber;
const int ResultCode::kErrmsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResultCode::ResultCode()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_friend_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.ResultCode)
}
ResultCode::ResultCode(const ResultCode& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  errmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.errmsg().size() > 0) {
    errmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  errcode_ = from.errcode_;
  // @@protoc_insertion_point(copy_constructor:fixbug.ResultCode)
}

void ResultCode::SharedCtor() {
  errmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
  _cached_size_ = 0;
}

ResultCode::~ResultCode() {
  // @@protoc_insertion_point(destructor:fixbug.ResultCode)
  SharedDtor();
}

void ResultCode::SharedDtor() {
  errmsg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResultCode::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResultCode::descriptor() {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_metadata[0].descriptor;
}

const ResultCode& ResultCode::default_instance() {
  protobuf_friend_2eproto::InitDefaults();
  return *internal_default_instance();
}

ResultCode* ResultCode::New(::google::protobuf::Arena* arena) const {
  ResultCode* n = new ResultCode;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ResultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.ResultCode)
  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
}

bool ResultCode::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.ResultCode)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 errcode = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &errcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes errmsg = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_errmsg()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.ResultCode)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.ResultCode)
  return false;
#undef DO_
}

void ResultCode::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.ResultCode)
  // int32 errcode = 1;
  if (this->errcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->errcode(), output);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->errmsg(), output);
  }

  // @@protoc_insertion_point(serialize_end:fixbug.ResultCode)
}

::google::protobuf::uint8* ResultCode::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.ResultCode)
  // int32 errcode = 1;
  if (this->errcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->errcode(), target);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->errmsg(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fixbug.ResultCode)
  return target;
}

size_t ResultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.ResultCode)
  size_t total_size = 0;

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->errmsg());
  }

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->errcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResultCode::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  const ResultCode* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResultCode>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.ResultCode)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.ResultCode)
    MergeFrom(*source);
  }
}

void ResultCode::MergeFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.errmsg().size() > 0) {

    errmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  if (from.errcode() != 0) {
    set_errcode(from.errcode());
  }
}

void ResultCode::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResultCode::CopyFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResultCode::IsInitialized() const {
  return true;
}

void ResultCode::Swap(ResultCode* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResultCode::InternalSwap(ResultCode* other) {
  errmsg_.Swap(&other->errmsg_);
  std::swap(errcode_, other->errcode_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ResultCode::GetMetadata() const {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ResultCode

// int32 errcode = 1;
void ResultCode::clear_errcode() {
  errcode_ = 0;
}
::google::protobuf::int32 ResultCode::errcode() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode.errcode)
  return errcode_;
}
void ResultCode::set_errcode(::google::protobuf::int32 value) {
  
  errcode_ = value;
  // @@protoc_insertion_point(field_set:fixbug.ResultCode.errcode)
}

// bytes errmsg = 2;
void ResultCode::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ResultCode::errmsg() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode.errmsg)
  return errmsg_.GetNoArena();
}
void ResultCode::set_errmsg(const ::std::string& value) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fixbug.ResultCode.errmsg)
}
#if LANG_CXX11
void ResultCode::set_errmsg(::std::string&& value) {
  
  errmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fixbug.ResultCode.errmsg)
}
#endif
void ResultCode::set_errmsg(const char* value) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.ResultCode.errmsg)
}
void ResultCode::set_errmsg(const void* value, size_t size) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.ResultCode.errmsg)
}
::std::string* ResultCode::mutable_errmsg() {
  
  // @@protoc_insertion_point(field_mutable:fixbug.ResultCode.errmsg)
  return errmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ResultCode::release_errmsg() {
  // @@protoc_insertion_point(field_release:fixbug.ResultCode.errmsg)
  
  return errmsg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ResultCode::set_allocated_errmsg(::std::string* errmsg) {
  if (errmsg != NULL) {
    
  } else {
    
  }
  errmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:fixbug.ResultCode.errmsg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetFriendsListRequest::kUseridFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetFriendsListRequest::GetFriendsListRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_friend_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.GetFriendsListRequest)
}
GetFriendsListRequest::GetFriendsListRequest(const GetFriendsListRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  userid_ = from.userid_;
  // @@protoc_insertion_point(copy_constructor:fixbug.GetFriendsListRequest)
}

void GetFriendsListRequest::SharedCtor() {
  userid_ = 0u;
  _cached_size_ = 0;
}

GetFriendsListRequest::~GetFriendsListRequest() {
  // @@protoc_insertion_point(destructor:fixbug.GetFriendsListRequest)
  SharedDtor();
}

void GetFriendsListRequest::SharedDtor() {
}

void GetFriendsListRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetFriendsListRequest::descriptor() {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_metadata[1].descriptor;
}

const GetFriendsListRequest& GetFriendsListRequest::default_instance() {
  protobuf_friend_2eproto::InitDefaults();
  return *internal_default_instance();
}

GetFriendsListRequest* GetFriendsListRequest::New(::google::protobuf::Arena* arena) const {
  GetFriendsListRequest* n = new GetFriendsListRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetFriendsListRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.GetFriendsListRequest)
  userid_ = 0u;
}

bool GetFriendsListRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.GetFriendsListRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 userid = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &userid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.GetFriendsListRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.GetFriendsListRequest)
  return false;
#undef DO_
}

void GetFriendsListRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.GetFriendsListRequest)
  // uint32 userid = 1;
  if (this->userid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->userid(), output);
  }

  // @@protoc_insertion_point(serialize_end:fixbug.GetFriendsListRequest)
}

::google::protobuf::uint8* GetFriendsListRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.GetFriendsListRequest)
  // uint32 userid = 1;
  if (this->userid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->userid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fixbug.GetFriendsListRequest)
  return target;
}

size_t GetFriendsListRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.GetFriendsListRequest)
  size_t total_size = 0;

  // uint32 userid = 1;
  if (this->userid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->userid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetFriendsListRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.GetFriendsListRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetFriendsListRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetFriendsListRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.GetFriendsListRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.GetFriendsListRequest)
    MergeFrom(*source);
  }
}

void GetFriendsListRequest::MergeFrom(const GetFriendsListRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.GetFriendsListRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.userid() != 0) {
    set_userid(from.userid());
  }
}

void GetFriendsListRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.GetFriendsListRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFriendsListRequest::CopyFrom(const GetFriendsListRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.GetFriendsListRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFriendsListRequest::IsInitialized() const {
  return true;
}

void GetFriendsListRequest::Swap(GetFriendsListRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetFriendsListRequest::InternalSwap(GetFriendsListRequest* other) {
  std::swap(userid_, other->userid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetFriendsListRequest::GetMetadata() const {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetFriendsListRequest

// uint32 userid = 1;
void GetFriendsListRequest::clear_userid() {
  userid_ = 0u;
}
::google::protobuf::uint32 GetFriendsListRequest::userid() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListRequest.userid)
  return userid_;
}
void GetFriendsListRequest::set_userid(::google::protobuf::uint32 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListRequest.userid)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetFriendsListResponse::kResultFieldNumber;
const int GetFriendsListResponse::kFriendsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetFriendsListResponse::GetFriendsListResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_friend_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.GetFriendsListResponse)
}
GetFriendsListResponse::GetFriendsListResponse(const GetFriendsListResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      friends_(from.friends_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_result()) {
    result_ = new ::fixbug::ResultCode(*from.result_);
  } else {
    result_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:fixbug.GetFriendsListResponse)
}

void GetFriendsListResponse::SharedCtor() {
  result_ = NULL;
  _cached_size_ = 0;
}

GetFriendsListResponse::~GetFriendsListResponse() {
  // @@protoc_insertion_point(destructor:fixbug.GetFriendsListResponse)
  SharedDtor();
}

void GetFriendsListResponse::SharedDtor() {
  if (this != internal_default_instance()) {
    delete result_;
  }
}

void GetFriendsListResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetFriendsListResponse::descriptor() {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_metadata[2].descriptor;
}

const GetFriendsListResponse& GetFriendsListResponse::default_instance() {
  protobuf_friend_2eproto::InitDefaults();
  return *internal_default_instance();
}

GetFriendsListResponse* GetFriendsListResponse::New(::google::protobuf::Arena* arena) const {
  GetFriendsListResponse* n = new GetFriendsListResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetFriendsListResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.GetFriendsListResponse)
  friends_.Clear();
  if (GetArenaNoVirtual() == NULL && result_ != NULL) {
    delete result_;
  }
  result_ = NULL;
}

bool GetFriendsListResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.GetFriendsListResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .fixbug.ResultCode result = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_result()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated bytes friends = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_friends()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.GetFriendsListResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.GetFriendsListResponse)
  return false;
#undef DO_
}

void GetFriendsListResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.GetFriendsListResponse)
  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->result_, output);
  }

  // repeated bytes friends = 2;
  for (int i = 0; i < this->friends_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->friends(i), output);
  }

  // @@protoc_insertion_point(serialize_end:fixbug.GetFriendsListResponse)
}

::google::protobuf::uint8* GetFriendsListResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.GetFriendsListResponse)
  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->result_, false, target);
  }

  // repeated bytes friends = 2;
  for (int i = 0; i < this->friends_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(2, this->friends(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fixbug.GetFriendsListResponse)
  return target;
}

size_t GetFriendsListResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.GetFriendsListResponse)
  size_t total_size = 0;

  // repeated bytes friends = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->friends_size());
  for (int i = 0; i < this->friends_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->friends(i));
  }

  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->result_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetFriendsListResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.GetFriendsListResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const GetFriendsListResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetFriendsListResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.GetFriendsListResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.GetFriendsListResponse)
    MergeFrom(*source);
  }
}

void GetFriendsListResponse::MergeFrom(const GetFriendsListResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.GetFriendsListResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  friends_.MergeFrom(from.friends_);
  if (from.has_result()) {
    mutable_result()->::fixbug::ResultCode::MergeFrom(from.result());
  }
}

void GetFriendsListResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.GetFriendsListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFriendsListResponse::CopyFrom(const GetFriendsListResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.GetFriendsListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFriendsListResponse::IsInitialized() const {
  return true;
}

void GetFriendsListResponse::Swap(GetFriendsListResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetFriendsListResponse::InternalSwap(GetFriendsListResponse* other) {
  friends_.UnsafeArenaSwap(&other->friends_);
  std::swap(result_, other->result_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetFriendsListResponse::GetMetadata() const {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_metadata[2];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetFriendsListResponse

// .fixbug.ResultCode result = 1;
bool GetFriendsListResponse::has_result() const {
  return this != internal_default_instance() && result_ != NULL;
}
void GetFriendsListResponse::clear_result() {
  if (GetArenaNoVirtual() == NULL && result_ != NULL) delete result_;
  result_ = NULL;
}
const ::fixbug::ResultCode& GetFriendsListResponse::result() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListResponse.result)
  return result_ != NULL ? *result_
                         : *::fixbug::ResultCode::internal_default_instance();
}
::fixbug::ResultCode* GetFriendsListResponse::mutable_result() {
  
  if (result_ == NULL) {
    result_ = new ::fixbug::ResultCode;
  }
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendsListResponse.result)
  return result_;
}
::fixbug::ResultCode* GetFriendsListResponse::release_result() {
  // @@protoc_insertion_point(field_release:fixbug.GetFriendsListResponse.result)
  
  ::fixbug::ResultCode* temp = result_;
  result_ = NULL;
  return temp;
}
void GetFriendsListResponse::set_allocated_result(::fixbug::ResultCode* result) {
  delete result_;
  result_ = result;
  if (result) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:fixbug.GetFriendsListResponse.result)
}

// repeated bytes friends = 2;
int GetFriendsListResponse::friends_size() const {
  return friends_.size();
}
void GetFriendsListResponse::clear_friends() {
  friends_.Clear();
}
const ::std::string& GetFriendsListResponse::friends(int index) const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendsListResponse.friends)
  return friends_.Get(index);
}
::std::string* GetFriendsListResponse::mutable_friends(int index) {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendsListResponse.friends)
  return friends_.Mutable(index);
}
void GetFriendsListResponse::set_friends(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:fixbug.GetFriendsListResponse.friends)
  friends_.Mutable(index)->assign(value);
}
void GetFriendsListResponse::set_friends(int index, const char* value) {
  friends_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fixbug.GetFriendsListResponse.friends)
}
void GetFriendsListResponse::set_friends(int index, const void* value, size_t size) {
  friends_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fixbug.GetFriendsListResponse.friends)
}
::std::string* GetFriendsListResponse::add_friends() {
  // @@protoc_insertion_point(field_add_mutable:fixbug.GetFriendsListResponse.friends)
  return friends_.Add();
}
void GetFriendsListResponse::add_friends(const ::std::string& value) {
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fixbug.GetFriendsListResponse.friends)
}
void GetFriendsListResponse::add_friends(const char* value) {
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fixbug.GetFriendsListResponse.friends)
}
void GetFriendsListResponse::add_friends(const void* value, size_t size) {
  friends_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fixbug.GetFriendsListResponse.friends)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
GetFriendsListResponse::friends() const {
  // @@protoc_insertion_point(field_list:fixbug.GetFriendsListResponse.friends)
  return friends_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
GetFriendsListResponse::mutable_friends() {
  // @@protoc_insertion_point(field_mutable_list:fixbug.GetFriendsListResponse.friends)
  return &friends_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

FriendServiceRpc::~FriendServiceRpc() {}

const ::google::protobuf::ServiceDescriptor* FriendServiceRpc::descriptor() {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_service_descriptors[0];
}

const ::google::protobuf::ServiceDescriptor* FriendServiceRpc::GetDescriptor() {
  return descriptor();
}

void FriendServiceRpc::GetFriendsList(::google::protobuf::RpcController* controller,
                         const ::fixbug::GetFriendsListRequest*,
                         ::fixbug::GetFriendsListResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetFriendsList() not implemented.");
  done->Run();
}

void FriendServiceRpc::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), protobuf_friend_2eproto::file_level_service_descriptors[0]);
  switch(method->index()) {
    case 0:
      GetFriendsList(controller,
             ::google::protobuf::down_cast<const ::fixbug::GetFriendsListRequest*>(request),
             ::google::protobuf::down_cast< ::fixbug::GetFriendsListResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& FriendServiceRpc::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::fixbug::GetFriendsListRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& FriendServiceRpc::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::fixbug::GetFriendsListResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

FriendServiceRpc_Stub::FriendServiceRpc_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
FriendServiceRpc_Stub::FriendServiceRpc_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
FriendServiceRpc_Stub::~FriendServiceRpc_Stub() {
  if (owns_channel_) delete channel_;
}

void FriendServiceRpc_Stub::GetFriendsList(::google::protobuf::RpcController* controller,
                              const ::fixbug::GetFriendsListRequest* request,
                              ::fixbug::GetFriendsListResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace fixbug

// @@protoc_insertion_point(global_scope)
