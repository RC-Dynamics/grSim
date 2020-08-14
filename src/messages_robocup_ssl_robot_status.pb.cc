// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_robot_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages_robocup_ssl_robot_status.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* Robots_Status_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Robots_Status_reflection_ = NULL;
const ::google::protobuf::Descriptor* Robot_Status_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Robot_Status_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto() {
  protobuf_AddDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages_robocup_ssl_robot_status.proto");
  GOOGLE_CHECK(file != NULL);
  Robots_Status_descriptor_ = file->message_type(0);
  static const int Robots_Status_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robots_Status, robots_status_),
  };
  Robots_Status_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Robots_Status_descriptor_,
      Robots_Status::default_instance_,
      Robots_Status_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robots_Status, _has_bits_[0]),
      -1,
      -1,
      sizeof(Robots_Status),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robots_Status, _internal_metadata_),
      -1);
  Robot_Status_descriptor_ = file->message_type(1);
  static const int Robot_Status_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robot_Status, robot_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robot_Status, infrared_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robot_Status, flat_kick_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robot_Status, chip_kick_),
  };
  Robot_Status_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Robot_Status_descriptor_,
      Robot_Status::default_instance_,
      Robot_Status_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robot_Status, _has_bits_[0]),
      -1,
      -1,
      sizeof(Robot_Status),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Robot_Status, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Robots_Status_descriptor_, &Robots_Status::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Robot_Status_descriptor_, &Robot_Status::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto() {
  delete Robots_Status::default_instance_;
  delete Robots_Status_reflection_;
  delete Robot_Status::default_instance_;
  delete Robot_Status_reflection_;
}

void protobuf_AddDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\'messages_robocup_ssl_robot_status.prot"
    "o\"5\n\rRobots_Status\022$\n\rrobots_status\030\001 \003("
    "\0132\r.Robot_Status\"X\n\014Robot_Status\022\020\n\010robo"
    "t_id\030\001 \002(\005\022\020\n\010infrared\030\002 \002(\010\022\021\n\tflat_kic"
    "k\030\003 \002(\010\022\021\n\tchip_kick\030\004 \002(\010", 186);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages_robocup_ssl_robot_status.proto", &protobuf_RegisterTypes);
  Robots_Status::default_instance_ = new Robots_Status();
  Robot_Status::default_instance_ = new Robot_Status();
  Robots_Status::default_instance_->InitAsDefaultInstance();
  Robot_Status::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto {
  StaticDescriptorInitializer_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto() {
    protobuf_AddDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto();
  }
} static_descriptor_initializer_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Robots_Status::kRobotsStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Robots_Status::Robots_Status()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Robots_Status)
}

void Robots_Status::InitAsDefaultInstance() {
}

Robots_Status::Robots_Status(const Robots_Status& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Robots_Status)
}

void Robots_Status::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Robots_Status::~Robots_Status() {
  // @@protoc_insertion_point(destructor:Robots_Status)
  SharedDtor();
}

void Robots_Status::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Robots_Status::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Robots_Status::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Robots_Status_descriptor_;
}

const Robots_Status& Robots_Status::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto();
  return *default_instance_;
}

Robots_Status* Robots_Status::default_instance_ = NULL;

Robots_Status* Robots_Status::New(::google::protobuf::Arena* arena) const {
  Robots_Status* n = new Robots_Status;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Robots_Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Robots_Status)
  robots_status_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Robots_Status::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Robots_Status)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Robot_Status robots_status = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_robots_status:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_robots_status()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_robots_status;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:Robots_Status)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Robots_Status)
  return false;
#undef DO_
}

void Robots_Status::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Robots_Status)
  // repeated .Robot_Status robots_status = 1;
  for (unsigned int i = 0, n = this->robots_status_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->robots_status(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Robots_Status)
}

::google::protobuf::uint8* Robots_Status::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Robots_Status)
  // repeated .Robot_Status robots_status = 1;
  for (unsigned int i = 0, n = this->robots_status_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->robots_status(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Robots_Status)
  return target;
}

int Robots_Status::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Robots_Status)
  int total_size = 0;

  // repeated .Robot_Status robots_status = 1;
  total_size += 1 * this->robots_status_size();
  for (int i = 0; i < this->robots_status_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->robots_status(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Robots_Status::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Robots_Status)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Robots_Status* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Robots_Status>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Robots_Status)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Robots_Status)
    MergeFrom(*source);
  }
}

void Robots_Status::MergeFrom(const Robots_Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Robots_Status)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  robots_status_.MergeFrom(from.robots_status_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Robots_Status::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Robots_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Robots_Status::CopyFrom(const Robots_Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Robots_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robots_Status::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->robots_status())) return false;
  return true;
}

void Robots_Status::Swap(Robots_Status* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Robots_Status::InternalSwap(Robots_Status* other) {
  robots_status_.UnsafeArenaSwap(&other->robots_status_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Robots_Status::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Robots_Status_descriptor_;
  metadata.reflection = Robots_Status_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Robots_Status

// repeated .Robot_Status robots_status = 1;
int Robots_Status::robots_status_size() const {
  return robots_status_.size();
}
void Robots_Status::clear_robots_status() {
  robots_status_.Clear();
}
const ::Robot_Status& Robots_Status::robots_status(int index) const {
  // @@protoc_insertion_point(field_get:Robots_Status.robots_status)
  return robots_status_.Get(index);
}
::Robot_Status* Robots_Status::mutable_robots_status(int index) {
  // @@protoc_insertion_point(field_mutable:Robots_Status.robots_status)
  return robots_status_.Mutable(index);
}
::Robot_Status* Robots_Status::add_robots_status() {
  // @@protoc_insertion_point(field_add:Robots_Status.robots_status)
  return robots_status_.Add();
}
::google::protobuf::RepeatedPtrField< ::Robot_Status >*
Robots_Status::mutable_robots_status() {
  // @@protoc_insertion_point(field_mutable_list:Robots_Status.robots_status)
  return &robots_status_;
}
const ::google::protobuf::RepeatedPtrField< ::Robot_Status >&
Robots_Status::robots_status() const {
  // @@protoc_insertion_point(field_list:Robots_Status.robots_status)
  return robots_status_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Robot_Status::kRobotIdFieldNumber;
const int Robot_Status::kInfraredFieldNumber;
const int Robot_Status::kFlatKickFieldNumber;
const int Robot_Status::kChipKickFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Robot_Status::Robot_Status()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Robot_Status)
}

void Robot_Status::InitAsDefaultInstance() {
}

Robot_Status::Robot_Status(const Robot_Status& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Robot_Status)
}

void Robot_Status::SharedCtor() {
  _cached_size_ = 0;
  robot_id_ = 0;
  infrared_ = false;
  flat_kick_ = false;
  chip_kick_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Robot_Status::~Robot_Status() {
  // @@protoc_insertion_point(destructor:Robot_Status)
  SharedDtor();
}

void Robot_Status::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Robot_Status::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Robot_Status::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Robot_Status_descriptor_;
}

const Robot_Status& Robot_Status::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto();
  return *default_instance_;
}

Robot_Status* Robot_Status::default_instance_ = NULL;

Robot_Status* Robot_Status::New(::google::protobuf::Arena* arena) const {
  Robot_Status* n = new Robot_Status;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Robot_Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Robot_Status)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Robot_Status, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Robot_Status*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(robot_id_, chip_kick_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Robot_Status::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Robot_Status)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 robot_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &robot_id_)));
          set_has_robot_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_infrared;
        break;
      }

      // required bool infrared = 2;
      case 2: {
        if (tag == 16) {
         parse_infrared:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &infrared_)));
          set_has_infrared();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_flat_kick;
        break;
      }

      // required bool flat_kick = 3;
      case 3: {
        if (tag == 24) {
         parse_flat_kick:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flat_kick_)));
          set_has_flat_kick();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_chip_kick;
        break;
      }

      // required bool chip_kick = 4;
      case 4: {
        if (tag == 32) {
         parse_chip_kick:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &chip_kick_)));
          set_has_chip_kick();
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
  // @@protoc_insertion_point(parse_success:Robot_Status)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Robot_Status)
  return false;
#undef DO_
}

void Robot_Status::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Robot_Status)
  // required int32 robot_id = 1;
  if (has_robot_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->robot_id(), output);
  }

  // required bool infrared = 2;
  if (has_infrared()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->infrared(), output);
  }

  // required bool flat_kick = 3;
  if (has_flat_kick()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->flat_kick(), output);
  }

  // required bool chip_kick = 4;
  if (has_chip_kick()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->chip_kick(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Robot_Status)
}

::google::protobuf::uint8* Robot_Status::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Robot_Status)
  // required int32 robot_id = 1;
  if (has_robot_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->robot_id(), target);
  }

  // required bool infrared = 2;
  if (has_infrared()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->infrared(), target);
  }

  // required bool flat_kick = 3;
  if (has_flat_kick()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->flat_kick(), target);
  }

  // required bool chip_kick = 4;
  if (has_chip_kick()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->chip_kick(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Robot_Status)
  return target;
}

int Robot_Status::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Robot_Status)
  int total_size = 0;

  if (has_robot_id()) {
    // required int32 robot_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->robot_id());
  }

  if (has_infrared()) {
    // required bool infrared = 2;
    total_size += 1 + 1;
  }

  if (has_flat_kick()) {
    // required bool flat_kick = 3;
    total_size += 1 + 1;
  }

  if (has_chip_kick()) {
    // required bool chip_kick = 4;
    total_size += 1 + 1;
  }

  return total_size;
}
int Robot_Status::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Robot_Status)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required int32 robot_id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->robot_id());

    // required bool infrared = 2;
    total_size += 1 + 1;

    // required bool flat_kick = 3;
    total_size += 1 + 1;

    // required bool chip_kick = 4;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Robot_Status::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Robot_Status)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Robot_Status* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Robot_Status>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Robot_Status)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Robot_Status)
    MergeFrom(*source);
  }
}

void Robot_Status::MergeFrom(const Robot_Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Robot_Status)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_robot_id()) {
      set_robot_id(from.robot_id());
    }
    if (from.has_infrared()) {
      set_infrared(from.infrared());
    }
    if (from.has_flat_kick()) {
      set_flat_kick(from.flat_kick());
    }
    if (from.has_chip_kick()) {
      set_chip_kick(from.chip_kick());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Robot_Status::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Robot_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Robot_Status::CopyFrom(const Robot_Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Robot_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robot_Status::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void Robot_Status::Swap(Robot_Status* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Robot_Status::InternalSwap(Robot_Status* other) {
  std::swap(robot_id_, other->robot_id_);
  std::swap(infrared_, other->infrared_);
  std::swap(flat_kick_, other->flat_kick_);
  std::swap(chip_kick_, other->chip_kick_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Robot_Status::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Robot_Status_descriptor_;
  metadata.reflection = Robot_Status_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Robot_Status

// required int32 robot_id = 1;
bool Robot_Status::has_robot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Robot_Status::set_has_robot_id() {
  _has_bits_[0] |= 0x00000001u;
}
void Robot_Status::clear_has_robot_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void Robot_Status::clear_robot_id() {
  robot_id_ = 0;
  clear_has_robot_id();
}
 ::google::protobuf::int32 Robot_Status::robot_id() const {
  // @@protoc_insertion_point(field_get:Robot_Status.robot_id)
  return robot_id_;
}
 void Robot_Status::set_robot_id(::google::protobuf::int32 value) {
  set_has_robot_id();
  robot_id_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.robot_id)
}

// required bool infrared = 2;
bool Robot_Status::has_infrared() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Robot_Status::set_has_infrared() {
  _has_bits_[0] |= 0x00000002u;
}
void Robot_Status::clear_has_infrared() {
  _has_bits_[0] &= ~0x00000002u;
}
void Robot_Status::clear_infrared() {
  infrared_ = false;
  clear_has_infrared();
}
 bool Robot_Status::infrared() const {
  // @@protoc_insertion_point(field_get:Robot_Status.infrared)
  return infrared_;
}
 void Robot_Status::set_infrared(bool value) {
  set_has_infrared();
  infrared_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.infrared)
}

// required bool flat_kick = 3;
bool Robot_Status::has_flat_kick() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Robot_Status::set_has_flat_kick() {
  _has_bits_[0] |= 0x00000004u;
}
void Robot_Status::clear_has_flat_kick() {
  _has_bits_[0] &= ~0x00000004u;
}
void Robot_Status::clear_flat_kick() {
  flat_kick_ = false;
  clear_has_flat_kick();
}
 bool Robot_Status::flat_kick() const {
  // @@protoc_insertion_point(field_get:Robot_Status.flat_kick)
  return flat_kick_;
}
 void Robot_Status::set_flat_kick(bool value) {
  set_has_flat_kick();
  flat_kick_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.flat_kick)
}

// required bool chip_kick = 4;
bool Robot_Status::has_chip_kick() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Robot_Status::set_has_chip_kick() {
  _has_bits_[0] |= 0x00000008u;
}
void Robot_Status::clear_has_chip_kick() {
  _has_bits_[0] &= ~0x00000008u;
}
void Robot_Status::clear_chip_kick() {
  chip_kick_ = false;
  clear_has_chip_kick();
}
 bool Robot_Status::chip_kick() const {
  // @@protoc_insertion_point(field_get:Robot_Status.chip_kick)
  return chip_kick_;
}
 void Robot_Status::set_chip_kick(bool value) {
  set_has_chip_kick();
  chip_kick_ = value;
  // @@protoc_insertion_point(field_set:Robot_Status.chip_kick)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
