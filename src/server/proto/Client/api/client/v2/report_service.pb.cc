// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/client/v2/report_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "api/client/v2/report_service.pb.h"

#include <algorithm>
#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "Log.h"
#include "Errors.h"
#include "BattlenetRpcErrorCodes.h"
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace report {
namespace v2 {

namespace {

const ::google::protobuf::Descriptor* SubmitReportRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SubmitReportRequest_reflection_ = NULL;
struct SubmitReportRequestOneofInstance {
  const ::bgs::protocol::report::v2::UserOptions* user_options_;
  const ::bgs::protocol::report::v2::ClubOptions* club_options_;
}* SubmitReportRequest_default_oneof_instance_ = NULL;
const ::google::protobuf::ServiceDescriptor* ReportService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_api_2fclient_2fv2_2freport_5fservice_2eproto() {
  protobuf_AddDesc_api_2fclient_2fv2_2freport_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "api/client/v2/report_service.proto");
  GOOGLE_CHECK(file != NULL);
  SubmitReportRequest_descriptor_ = file->message_type(0);
  static const int SubmitReportRequest_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, agent_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, user_description_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, program_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(SubmitReportRequest_default_oneof_instance_, user_options_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(SubmitReportRequest_default_oneof_instance_, club_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, type_),
  };
  SubmitReportRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SubmitReportRequest_descriptor_,
      SubmitReportRequest::default_instance_,
      SubmitReportRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, _unknown_fields_),
      -1,
      SubmitReportRequest_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, _oneof_case_[0]),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SubmitReportRequest));
  ReportService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_api_2fclient_2fv2_2freport_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SubmitReportRequest_descriptor_, &SubmitReportRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_api_2fclient_2fv2_2freport_5fservice_2eproto() {
  delete SubmitReportRequest::default_instance_;
  delete SubmitReportRequest_default_oneof_instance_;
  delete SubmitReportRequest_reflection_;
}

void protobuf_AddDesc_api_2fclient_2fv2_2freport_5fservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::account::v1::protobuf_AddDesc_account_5ftypes_2eproto();
  ::bgs::protocol::report::v2::protobuf_AddDesc_api_2fclient_2fv2_2freport_5ftypes_2eproto();
  ::bgs::protocol::protobuf_AddDesc_rpc_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"api/client/v2/report_service.proto\022\026bg"
    "s.protocol.report.v2\032\023account_types.prot"
    "o\032 api/client/v2/report_types.proto\032\017rpc"
    "_types.proto\"\200\002\n\023SubmitReportRequest\0224\n\010"
    "agent_id\030\001 \001(\0132\".bgs.protocol.account.v1"
    ".AccountId\022\030\n\020user_description\030\002 \001(\t\022\017\n\007"
    "program\030\003 \001(\r\022;\n\014user_options\030\n \001(\0132#.bg"
    "s.protocol.report.v2.UserOptionsH\000\022;\n\014cl"
    "ub_options\030\013 \001(\0132#.bgs.protocol.report.v"
    "2.ClubOptionsH\000:\006\202\371+\002\020\001B\006\n\004type2\245\001\n\rRepo"
    "rtService\022Y\n\014SubmitReport\022+.bgs.protocol"
    ".report.v2.SubmitReportRequest\032\024.bgs.pro"
    "tocol.NoData\"\006\202\371+\002\010\001\0329\202\371+/\n%bnet.protoco"
    "l.report.v2.ReportService*\006report\212\371+\002\020\001B"
    "\005H\001\200\001\000", 566);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "api/client/v2/report_service.proto", &protobuf_RegisterTypes);
  SubmitReportRequest::default_instance_ = new SubmitReportRequest();
  SubmitReportRequest_default_oneof_instance_ = new SubmitReportRequestOneofInstance;
  SubmitReportRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_api_2fclient_2fv2_2freport_5fservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_api_2fclient_2fv2_2freport_5fservice_2eproto {
  StaticDescriptorInitializer_api_2fclient_2fv2_2freport_5fservice_2eproto() {
    protobuf_AddDesc_api_2fclient_2fv2_2freport_5fservice_2eproto();
  }
} static_descriptor_initializer_api_2fclient_2fv2_2freport_5fservice_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SubmitReportRequest::kAgentIdFieldNumber;
const int SubmitReportRequest::kUserDescriptionFieldNumber;
const int SubmitReportRequest::kProgramFieldNumber;
const int SubmitReportRequest::kUserOptionsFieldNumber;
const int SubmitReportRequest::kClubOptionsFieldNumber;
#endif  // !_MSC_VER

SubmitReportRequest::SubmitReportRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.report.v2.SubmitReportRequest)
}

void SubmitReportRequest::InitAsDefaultInstance() {
  agent_id_ = const_cast< ::bgs::protocol::account::v1::AccountId*>(&::bgs::protocol::account::v1::AccountId::default_instance());
  SubmitReportRequest_default_oneof_instance_->user_options_ = const_cast< ::bgs::protocol::report::v2::UserOptions*>(&::bgs::protocol::report::v2::UserOptions::default_instance());
  SubmitReportRequest_default_oneof_instance_->club_options_ = const_cast< ::bgs::protocol::report::v2::ClubOptions*>(&::bgs::protocol::report::v2::ClubOptions::default_instance());
}

SubmitReportRequest::SubmitReportRequest(const SubmitReportRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.report.v2.SubmitReportRequest)
}

void SubmitReportRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  agent_id_ = NULL;
  user_description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  program_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  clear_has_type();
}

SubmitReportRequest::~SubmitReportRequest() {
  // @@protoc_insertion_point(destructor:bgs.protocol.report.v2.SubmitReportRequest)
  SharedDtor();
}

void SubmitReportRequest::SharedDtor() {
  if (user_description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete user_description_;
  }
  if (has_type()) {
    clear_type();
  }
  if (this != default_instance_) {
    delete agent_id_;
  }
}

void SubmitReportRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SubmitReportRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SubmitReportRequest_descriptor_;
}

const SubmitReportRequest& SubmitReportRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_api_2fclient_2fv2_2freport_5fservice_2eproto();
  return *default_instance_;
}

SubmitReportRequest* SubmitReportRequest::default_instance_ = NULL;

SubmitReportRequest* SubmitReportRequest::New() const {
  return new SubmitReportRequest;
}

void SubmitReportRequest::clear_type() {
  switch(type_case()) {
    case kUserOptions: {
      delete type_.user_options_;
      break;
    }
    case kClubOptions: {
      delete type_.club_options_;
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = TYPE_NOT_SET;
}


void SubmitReportRequest::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_agent_id()) {
      if (agent_id_ != NULL) agent_id_->::bgs::protocol::account::v1::AccountId::Clear();
    }
    if (has_user_description()) {
      if (user_description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        user_description_->clear();
      }
    }
    program_ = 0u;
  }
  clear_type();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SubmitReportRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bgs.protocol.report.v2.SubmitReportRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .bgs.protocol.account.v1.AccountId agent_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_agent_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_user_description;
        break;
      }

      // optional string user_description = 2;
      case 2: {
        if (tag == 18) {
         parse_user_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_description()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->user_description().data(), this->user_description().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "user_description");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_program;
        break;
      }

      // optional uint32 program = 3;
      case 3: {
        if (tag == 24) {
         parse_program:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &program_)));
          set_has_program();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_user_options;
        break;
      }

      // optional .bgs.protocol.report.v2.UserOptions user_options = 10;
      case 10: {
        if (tag == 82) {
         parse_user_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_user_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_club_options;
        break;
      }

      // optional .bgs.protocol.report.v2.ClubOptions club_options = 11;
      case 11: {
        if (tag == 90) {
         parse_club_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_club_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bgs.protocol.report.v2.SubmitReportRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bgs.protocol.report.v2.SubmitReportRequest)
  return false;
#undef DO_
}

void SubmitReportRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bgs.protocol.report.v2.SubmitReportRequest)
  // optional .bgs.protocol.account.v1.AccountId agent_id = 1;
  if (has_agent_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->agent_id(), output);
  }

  // optional string user_description = 2;
  if (has_user_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->user_description().data(), this->user_description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "user_description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->user_description(), output);
  }

  // optional uint32 program = 3;
  if (has_program()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->program(), output);
  }

  // optional .bgs.protocol.report.v2.UserOptions user_options = 10;
  if (has_user_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->user_options(), output);
  }

  // optional .bgs.protocol.report.v2.ClubOptions club_options = 11;
  if (has_club_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->club_options(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bgs.protocol.report.v2.SubmitReportRequest)
}

::google::protobuf::uint8* SubmitReportRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:bgs.protocol.report.v2.SubmitReportRequest)
  // optional .bgs.protocol.account.v1.AccountId agent_id = 1;
  if (has_agent_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->agent_id(), target);
  }

  // optional string user_description = 2;
  if (has_user_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->user_description().data(), this->user_description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "user_description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->user_description(), target);
  }

  // optional uint32 program = 3;
  if (has_program()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->program(), target);
  }

  // optional .bgs.protocol.report.v2.UserOptions user_options = 10;
  if (has_user_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        10, this->user_options(), target);
  }

  // optional .bgs.protocol.report.v2.ClubOptions club_options = 11;
  if (has_club_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        11, this->club_options(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bgs.protocol.report.v2.SubmitReportRequest)
  return target;
}

int SubmitReportRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .bgs.protocol.account.v1.AccountId agent_id = 1;
    if (has_agent_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->agent_id());
    }

    // optional string user_description = 2;
    if (has_user_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_description());
    }

    // optional uint32 program = 3;
    if (has_program()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->program());
    }

  }
  switch (type_case()) {
    // optional .bgs.protocol.report.v2.UserOptions user_options = 10;
    case kUserOptions: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->user_options());
      break;
    }
    // optional .bgs.protocol.report.v2.ClubOptions club_options = 11;
    case kClubOptions: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->club_options());
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SubmitReportRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SubmitReportRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SubmitReportRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SubmitReportRequest::MergeFrom(const SubmitReportRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  switch (from.type_case()) {
    case kUserOptions: {
      mutable_user_options()->::bgs::protocol::report::v2::UserOptions::MergeFrom(from.user_options());
      break;
    }
    case kClubOptions: {
      mutable_club_options()->::bgs::protocol::report::v2::ClubOptions::MergeFrom(from.club_options());
      break;
    }
    case TYPE_NOT_SET: {
      break;
    }
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_agent_id()) {
      mutable_agent_id()->::bgs::protocol::account::v1::AccountId::MergeFrom(from.agent_id());
    }
    if (from.has_user_description()) {
      set_user_description(from.user_description());
    }
    if (from.has_program()) {
      set_program(from.program());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SubmitReportRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubmitReportRequest::CopyFrom(const SubmitReportRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmitReportRequest::IsInitialized() const {

  if (has_agent_id()) {
    if (!this->agent_id().IsInitialized()) return false;
  }
  if (has_user_options()) {
    if (!this->user_options().IsInitialized()) return false;
  }
  return true;
}

void SubmitReportRequest::Swap(SubmitReportRequest* other) {
  if (other != this) {
    std::swap(agent_id_, other->agent_id_);
    std::swap(user_description_, other->user_description_);
    std::swap(program_, other->program_);
    std::swap(type_, other->type_);
    std::swap(_oneof_case_[0], other->_oneof_case_[0]);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SubmitReportRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SubmitReportRequest_descriptor_;
  metadata.reflection = SubmitReportRequest_reflection_;
  return metadata;
}


// ===================================================================

ReportService::ReportService(bool use_original_hash) : service_hash_(use_original_hash ? OriginalHash::value : NameHash::value) {
}

ReportService::~ReportService() {
}

google::protobuf::ServiceDescriptor const* ReportService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReportService_descriptor_;
}

void ReportService::SubmitReport(::bgs::protocol::report::v2::SubmitReportRequest const* request, std::function<void(::bgs::protocol::NoData const*)> responseCallback) {
  TC_LOG_DEBUG("service.protobuf", "%s Server called client method ReportService.SubmitReport(bgs.protocol.report.v2.SubmitReportRequest{ %s })",
    GetCallerInfo().c_str(), request->ShortDebugString().c_str());
  std::function<void(MessageBuffer)> callback = [responseCallback](MessageBuffer buffer) -> void {
    ::bgs::protocol::NoData response;
    if (response.ParseFromArray(buffer.GetReadPointer(), buffer.GetActiveSize()))
      responseCallback(&response);
  };
  SendRequest(service_hash_, 1, request, std::move(callback));
}

void ReportService::CallServerMethod(uint32 token, uint32 methodId, MessageBuffer buffer) {
  switch(methodId) {
    case 1: {
      ::bgs::protocol::report::v2::SubmitReportRequest request;
      if (!request.ParseFromArray(buffer.GetReadPointer(), buffer.GetActiveSize())) {
        TC_LOG_DEBUG("service.protobuf", "%s Failed to parse request for ReportService.SubmitReport server method call.", GetCallerInfo().c_str());
        SendResponse(service_hash_, 1, token, ERROR_RPC_MALFORMED_REQUEST);
        return;
      }
      TC_LOG_DEBUG("service.protobuf", "%s Client called server method ReportService.SubmitReport(bgs.protocol.report.v2.SubmitReportRequest{ %s }).",
        GetCallerInfo().c_str(), request.ShortDebugString().c_str());
      std::function<void(ServiceBase*, uint32, ::google::protobuf::Message const*)> continuation = [token](ServiceBase* service, uint32 status, ::google::protobuf::Message const* response)
      {
        ASSERT(response->GetDescriptor() == ::bgs::protocol::NoData::descriptor());
        ReportService* self = static_cast<ReportService*>(service);
        TC_LOG_DEBUG("service.protobuf", "%s Client called server method ReportService.SubmitReport() returned bgs.protocol.NoData{ %s } status %u.",
          self->GetCallerInfo().c_str(), response->ShortDebugString().c_str(), status);
        if (!status)
          self->SendResponse(self->service_hash_, 1, token, response);
        else
          self->SendResponse(self->service_hash_, 1, token, status);
      };
      ::bgs::protocol::NoData response;
      uint32 status = HandleSubmitReport(&request, &response, continuation);
      if (continuation)
        continuation(this, status, &response);
      break;
    }
    default:
      TC_LOG_ERROR("service.protobuf", "Bad method id %u.", methodId);
      SendResponse(service_hash_, methodId, token, ERROR_RPC_INVALID_METHOD);
      break;
    }
}

uint32 ReportService::HandleSubmitReport(::bgs::protocol::report::v2::SubmitReportRequest const* request, ::bgs::protocol::NoData* response, std::function<void(ServiceBase*, uint32, ::google::protobuf::Message const*)>& continuation) {
  TC_LOG_ERROR("service.protobuf", "%s Client tried to call not implemented method ReportService.SubmitReport({ %s })",
    GetCallerInfo().c_str(), request->ShortDebugString().c_str());
  return ERROR_RPC_NOT_IMPLEMENTED;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace report
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
