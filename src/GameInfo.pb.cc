// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameInfo.proto

#include "GameInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_GameInfo_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_GameInfo_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_PlayerCommandRequest_CPixelPosition;
}  // namespace protobuf_GameInfo_2eproto
namespace GameInfo {
class PlayerCommandRequest_CPixelPositionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PlayerCommandRequest_CPixelPosition>
      _instance;
} _PlayerCommandRequest_CPixelPosition_default_instance_;
class PlayerCommandRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PlayerCommandRequest>
      _instance;
} _PlayerCommandRequest_default_instance_;
}  // namespace GameInfo
namespace protobuf_GameInfo_2eproto {
static void InitDefaultsPlayerCommandRequest_CPixelPosition() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::GameInfo::_PlayerCommandRequest_CPixelPosition_default_instance_;
    new (ptr) ::GameInfo::PlayerCommandRequest_CPixelPosition();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::GameInfo::PlayerCommandRequest_CPixelPosition::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PlayerCommandRequest_CPixelPosition =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPlayerCommandRequest_CPixelPosition}, {}};

static void InitDefaultsPlayerCommandRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::GameInfo::_PlayerCommandRequest_default_instance_;
    new (ptr) ::GameInfo::PlayerCommandRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::GameInfo::PlayerCommandRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_PlayerCommandRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPlayerCommandRequest}, {
      &protobuf_GameInfo_2eproto::scc_info_PlayerCommandRequest_CPixelPosition.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PlayerCommandRequest_CPixelPosition.base);
  ::google::protobuf::internal::InitSCC(&scc_info_PlayerCommandRequest.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest_CPixelPosition, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest_CPixelPosition, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest_CPixelPosition, dx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest_CPixelPosition, dy_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, daction_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, dtargetnumber_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, dtargettype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, dactors_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GameInfo::PlayerCommandRequest, dtargetlocation_),
  1,
  2,
  3,
  ~0u,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::GameInfo::PlayerCommandRequest_CPixelPosition)},
  { 9, 19, sizeof(::GameInfo::PlayerCommandRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::GameInfo::_PlayerCommandRequest_CPixelPosition_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::GameInfo::_PlayerCommandRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "GameInfo.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016GameInfo.proto\022\010GameInfo\"\326\001\n\024PlayerCom"
      "mandRequest\022\017\n\007DAction\030\001 \002(\005\022\025\n\rDTargetN"
      "umber\030\002 \002(\005\022\023\n\013DTargetType\030\003 \002(\005\022\017\n\007DAct"
      "ors\030\004 \003(\005\022F\n\017DTargetLocation\030\005 \002(\0132-.Gam"
      "eInfo.PlayerCommandRequest.CPixelPositio"
      "n\032(\n\016CPixelPosition\022\n\n\002DX\030\001 \002(\005\022\n\n\002DY\030\002 "
      "\002(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GameInfo.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_GameInfo_2eproto
namespace GameInfo {

// ===================================================================

void PlayerCommandRequest_CPixelPosition::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PlayerCommandRequest_CPixelPosition::kDXFieldNumber;
const int PlayerCommandRequest_CPixelPosition::kDYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PlayerCommandRequest_CPixelPosition::PlayerCommandRequest_CPixelPosition()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_GameInfo_2eproto::scc_info_PlayerCommandRequest_CPixelPosition.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:GameInfo.PlayerCommandRequest.CPixelPosition)
}
PlayerCommandRequest_CPixelPosition::PlayerCommandRequest_CPixelPosition(const PlayerCommandRequest_CPixelPosition& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&dx_, &from.dx_,
    static_cast<size_t>(reinterpret_cast<char*>(&dy_) -
    reinterpret_cast<char*>(&dx_)) + sizeof(dy_));
  // @@protoc_insertion_point(copy_constructor:GameInfo.PlayerCommandRequest.CPixelPosition)
}

void PlayerCommandRequest_CPixelPosition::SharedCtor() {
  ::memset(&dx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dy_) -
      reinterpret_cast<char*>(&dx_)) + sizeof(dy_));
}

PlayerCommandRequest_CPixelPosition::~PlayerCommandRequest_CPixelPosition() {
  // @@protoc_insertion_point(destructor:GameInfo.PlayerCommandRequest.CPixelPosition)
  SharedDtor();
}

void PlayerCommandRequest_CPixelPosition::SharedDtor() {
}

void PlayerCommandRequest_CPixelPosition::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PlayerCommandRequest_CPixelPosition::descriptor() {
  ::protobuf_GameInfo_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GameInfo_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PlayerCommandRequest_CPixelPosition& PlayerCommandRequest_CPixelPosition::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_GameInfo_2eproto::scc_info_PlayerCommandRequest_CPixelPosition.base);
  return *internal_default_instance();
}


void PlayerCommandRequest_CPixelPosition::Clear() {
// @@protoc_insertion_point(message_clear_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&dx_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&dy_) -
        reinterpret_cast<char*>(&dx_)) + sizeof(dy_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PlayerCommandRequest_CPixelPosition::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 DX = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_dx();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 DY = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_dy();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GameInfo.PlayerCommandRequest.CPixelPosition)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GameInfo.PlayerCommandRequest.CPixelPosition)
  return false;
#undef DO_
}

void PlayerCommandRequest_CPixelPosition::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 DX = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->dx(), output);
  }

  // required int32 DY = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->dy(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GameInfo.PlayerCommandRequest.CPixelPosition)
}

::google::protobuf::uint8* PlayerCommandRequest_CPixelPosition::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 DX = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->dx(), target);
  }

  // required int32 DY = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->dy(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GameInfo.PlayerCommandRequest.CPixelPosition)
  return target;
}

size_t PlayerCommandRequest_CPixelPosition::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  size_t total_size = 0;

  if (has_dx()) {
    // required int32 DX = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dx());
  }

  if (has_dy()) {
    // required int32 DY = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dy());
  }

  return total_size;
}
size_t PlayerCommandRequest_CPixelPosition::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 DX = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dx());

    // required int32 DY = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dy());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PlayerCommandRequest_CPixelPosition::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  GOOGLE_DCHECK_NE(&from, this);
  const PlayerCommandRequest_CPixelPosition* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PlayerCommandRequest_CPixelPosition>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GameInfo.PlayerCommandRequest.CPixelPosition)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GameInfo.PlayerCommandRequest.CPixelPosition)
    MergeFrom(*source);
  }
}

void PlayerCommandRequest_CPixelPosition::MergeFrom(const PlayerCommandRequest_CPixelPosition& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      dx_ = from.dx_;
    }
    if (cached_has_bits & 0x00000002u) {
      dy_ = from.dy_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PlayerCommandRequest_CPixelPosition::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerCommandRequest_CPixelPosition::CopyFrom(const PlayerCommandRequest_CPixelPosition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GameInfo.PlayerCommandRequest.CPixelPosition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerCommandRequest_CPixelPosition::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void PlayerCommandRequest_CPixelPosition::Swap(PlayerCommandRequest_CPixelPosition* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PlayerCommandRequest_CPixelPosition::InternalSwap(PlayerCommandRequest_CPixelPosition* other) {
  using std::swap;
  swap(dx_, other->dx_);
  swap(dy_, other->dy_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PlayerCommandRequest_CPixelPosition::GetMetadata() const {
  protobuf_GameInfo_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GameInfo_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void PlayerCommandRequest::InitAsDefaultInstance() {
  ::GameInfo::_PlayerCommandRequest_default_instance_._instance.get_mutable()->dtargetlocation_ = const_cast< ::GameInfo::PlayerCommandRequest_CPixelPosition*>(
      ::GameInfo::PlayerCommandRequest_CPixelPosition::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PlayerCommandRequest::kDActionFieldNumber;
const int PlayerCommandRequest::kDTargetNumberFieldNumber;
const int PlayerCommandRequest::kDTargetTypeFieldNumber;
const int PlayerCommandRequest::kDActorsFieldNumber;
const int PlayerCommandRequest::kDTargetLocationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PlayerCommandRequest::PlayerCommandRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_GameInfo_2eproto::scc_info_PlayerCommandRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:GameInfo.PlayerCommandRequest)
}
PlayerCommandRequest::PlayerCommandRequest(const PlayerCommandRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      dactors_(from.dactors_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_dtargetlocation()) {
    dtargetlocation_ = new ::GameInfo::PlayerCommandRequest_CPixelPosition(*from.dtargetlocation_);
  } else {
    dtargetlocation_ = NULL;
  }
  ::memcpy(&daction_, &from.daction_,
    static_cast<size_t>(reinterpret_cast<char*>(&dtargettype_) -
    reinterpret_cast<char*>(&daction_)) + sizeof(dtargettype_));
  // @@protoc_insertion_point(copy_constructor:GameInfo.PlayerCommandRequest)
}

void PlayerCommandRequest::SharedCtor() {
  ::memset(&dtargetlocation_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dtargettype_) -
      reinterpret_cast<char*>(&dtargetlocation_)) + sizeof(dtargettype_));
}

PlayerCommandRequest::~PlayerCommandRequest() {
  // @@protoc_insertion_point(destructor:GameInfo.PlayerCommandRequest)
  SharedDtor();
}

void PlayerCommandRequest::SharedDtor() {
  if (this != internal_default_instance()) delete dtargetlocation_;
}

void PlayerCommandRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PlayerCommandRequest::descriptor() {
  ::protobuf_GameInfo_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GameInfo_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PlayerCommandRequest& PlayerCommandRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_GameInfo_2eproto::scc_info_PlayerCommandRequest.base);
  return *internal_default_instance();
}


void PlayerCommandRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:GameInfo.PlayerCommandRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  dactors_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(dtargetlocation_ != NULL);
    dtargetlocation_->Clear();
  }
  if (cached_has_bits & 14u) {
    ::memset(&daction_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&dtargettype_) -
        reinterpret_cast<char*>(&daction_)) + sizeof(dtargettype_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PlayerCommandRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GameInfo.PlayerCommandRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 DAction = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_daction();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &daction_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 DTargetNumber = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_dtargetnumber();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dtargetnumber_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 DTargetType = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_dtargettype();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dtargettype_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 DActors = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32u, input, this->mutable_dactors())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_dactors())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_dtargetlocation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GameInfo.PlayerCommandRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GameInfo.PlayerCommandRequest)
  return false;
#undef DO_
}

void PlayerCommandRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GameInfo.PlayerCommandRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 DAction = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->daction(), output);
  }

  // required int32 DTargetNumber = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->dtargetnumber(), output);
  }

  // required int32 DTargetType = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->dtargettype(), output);
  }

  // repeated int32 DActors = 4;
  for (int i = 0, n = this->dactors_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->dactors(i), output);
  }

  // required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_dtargetlocation(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GameInfo.PlayerCommandRequest)
}

::google::protobuf::uint8* PlayerCommandRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:GameInfo.PlayerCommandRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 DAction = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->daction(), target);
  }

  // required int32 DTargetNumber = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->dtargetnumber(), target);
  }

  // required int32 DTargetType = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->dtargettype(), target);
  }

  // repeated int32 DActors = 4;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteInt32ToArray(4, this->dactors_, target);

  // required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_dtargetlocation(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GameInfo.PlayerCommandRequest)
  return target;
}

size_t PlayerCommandRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:GameInfo.PlayerCommandRequest)
  size_t total_size = 0;

  if (has_dtargetlocation()) {
    // required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *dtargetlocation_);
  }

  if (has_daction()) {
    // required int32 DAction = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->daction());
  }

  if (has_dtargetnumber()) {
    // required int32 DTargetNumber = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dtargetnumber());
  }

  if (has_dtargettype()) {
    // required int32 DTargetType = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dtargettype());
  }

  return total_size;
}
size_t PlayerCommandRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GameInfo.PlayerCommandRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *dtargetlocation_);

    // required int32 DAction = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->daction());

    // required int32 DTargetNumber = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dtargetnumber());

    // required int32 DTargetType = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->dtargettype());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated int32 DActors = 4;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->dactors_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->dactors_size());
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PlayerCommandRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GameInfo.PlayerCommandRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PlayerCommandRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PlayerCommandRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GameInfo.PlayerCommandRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GameInfo.PlayerCommandRequest)
    MergeFrom(*source);
  }
}

void PlayerCommandRequest::MergeFrom(const PlayerCommandRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GameInfo.PlayerCommandRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  dactors_.MergeFrom(from.dactors_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_dtargetlocation()->::GameInfo::PlayerCommandRequest_CPixelPosition::MergeFrom(from.dtargetlocation());
    }
    if (cached_has_bits & 0x00000002u) {
      daction_ = from.daction_;
    }
    if (cached_has_bits & 0x00000004u) {
      dtargetnumber_ = from.dtargetnumber_;
    }
    if (cached_has_bits & 0x00000008u) {
      dtargettype_ = from.dtargettype_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PlayerCommandRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GameInfo.PlayerCommandRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerCommandRequest::CopyFrom(const PlayerCommandRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GameInfo.PlayerCommandRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerCommandRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  if (has_dtargetlocation()) {
    if (!this->dtargetlocation_->IsInitialized()) return false;
  }
  return true;
}

void PlayerCommandRequest::Swap(PlayerCommandRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PlayerCommandRequest::InternalSwap(PlayerCommandRequest* other) {
  using std::swap;
  dactors_.InternalSwap(&other->dactors_);
  swap(dtargetlocation_, other->dtargetlocation_);
  swap(daction_, other->daction_);
  swap(dtargetnumber_, other->dtargetnumber_);
  swap(dtargettype_, other->dtargettype_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PlayerCommandRequest::GetMetadata() const {
  protobuf_GameInfo_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GameInfo_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace GameInfo
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::GameInfo::PlayerCommandRequest_CPixelPosition* Arena::CreateMaybeMessage< ::GameInfo::PlayerCommandRequest_CPixelPosition >(Arena* arena) {
  return Arena::CreateInternal< ::GameInfo::PlayerCommandRequest_CPixelPosition >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::GameInfo::PlayerCommandRequest* Arena::CreateMaybeMessage< ::GameInfo::PlayerCommandRequest >(Arena* arena) {
  return Arena::CreateInternal< ::GameInfo::PlayerCommandRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
