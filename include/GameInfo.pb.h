// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameInfo.proto

#ifndef PROTOBUF_INCLUDED_GameInfo_2eproto
#define PROTOBUF_INCLUDED_GameInfo_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_GameInfo_2eproto 

namespace protobuf_GameInfo_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_GameInfo_2eproto
namespace GameInfo {
class PlayerCommandPackage;
class PlayerCommandPackageDefaultTypeInternal;
extern PlayerCommandPackageDefaultTypeInternal _PlayerCommandPackage_default_instance_;
class PlayerCommandRequest;
class PlayerCommandRequestDefaultTypeInternal;
extern PlayerCommandRequestDefaultTypeInternal _PlayerCommandRequest_default_instance_;
class PlayerCommandRequest_CPixelPosition;
class PlayerCommandRequest_CPixelPositionDefaultTypeInternal;
extern PlayerCommandRequest_CPixelPositionDefaultTypeInternal _PlayerCommandRequest_CPixelPosition_default_instance_;
}  // namespace GameInfo
namespace google {
namespace protobuf {
template<> ::GameInfo::PlayerCommandPackage* Arena::CreateMaybeMessage<::GameInfo::PlayerCommandPackage>(Arena*);
template<> ::GameInfo::PlayerCommandRequest* Arena::CreateMaybeMessage<::GameInfo::PlayerCommandRequest>(Arena*);
template<> ::GameInfo::PlayerCommandRequest_CPixelPosition* Arena::CreateMaybeMessage<::GameInfo::PlayerCommandRequest_CPixelPosition>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace GameInfo {

// ===================================================================

class PlayerCommandRequest_CPixelPosition : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GameInfo.PlayerCommandRequest.CPixelPosition) */ {
 public:
  PlayerCommandRequest_CPixelPosition();
  virtual ~PlayerCommandRequest_CPixelPosition();

  PlayerCommandRequest_CPixelPosition(const PlayerCommandRequest_CPixelPosition& from);

  inline PlayerCommandRequest_CPixelPosition& operator=(const PlayerCommandRequest_CPixelPosition& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PlayerCommandRequest_CPixelPosition(PlayerCommandRequest_CPixelPosition&& from) noexcept
    : PlayerCommandRequest_CPixelPosition() {
    *this = ::std::move(from);
  }

  inline PlayerCommandRequest_CPixelPosition& operator=(PlayerCommandRequest_CPixelPosition&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerCommandRequest_CPixelPosition& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlayerCommandRequest_CPixelPosition* internal_default_instance() {
    return reinterpret_cast<const PlayerCommandRequest_CPixelPosition*>(
               &_PlayerCommandRequest_CPixelPosition_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PlayerCommandRequest_CPixelPosition* other);
  friend void swap(PlayerCommandRequest_CPixelPosition& a, PlayerCommandRequest_CPixelPosition& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PlayerCommandRequest_CPixelPosition* New() const final {
    return CreateMaybeMessage<PlayerCommandRequest_CPixelPosition>(NULL);
  }

  PlayerCommandRequest_CPixelPosition* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PlayerCommandRequest_CPixelPosition>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PlayerCommandRequest_CPixelPosition& from);
  void MergeFrom(const PlayerCommandRequest_CPixelPosition& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlayerCommandRequest_CPixelPosition* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 DX = 1;
  bool has_dx() const;
  void clear_dx();
  static const int kDXFieldNumber = 1;
  ::google::protobuf::int32 dx() const;
  void set_dx(::google::protobuf::int32 value);

  // required int32 DY = 2;
  bool has_dy() const;
  void clear_dy();
  static const int kDYFieldNumber = 2;
  ::google::protobuf::int32 dy() const;
  void set_dy(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GameInfo.PlayerCommandRequest.CPixelPosition)
 private:
  void set_has_dx();
  void clear_has_dx();
  void set_has_dy();
  void clear_has_dy();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 dx_;
  ::google::protobuf::int32 dy_;
  friend struct ::protobuf_GameInfo_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PlayerCommandRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GameInfo.PlayerCommandRequest) */ {
 public:
  PlayerCommandRequest();
  virtual ~PlayerCommandRequest();

  PlayerCommandRequest(const PlayerCommandRequest& from);

  inline PlayerCommandRequest& operator=(const PlayerCommandRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PlayerCommandRequest(PlayerCommandRequest&& from) noexcept
    : PlayerCommandRequest() {
    *this = ::std::move(from);
  }

  inline PlayerCommandRequest& operator=(PlayerCommandRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerCommandRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlayerCommandRequest* internal_default_instance() {
    return reinterpret_cast<const PlayerCommandRequest*>(
               &_PlayerCommandRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(PlayerCommandRequest* other);
  friend void swap(PlayerCommandRequest& a, PlayerCommandRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PlayerCommandRequest* New() const final {
    return CreateMaybeMessage<PlayerCommandRequest>(NULL);
  }

  PlayerCommandRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PlayerCommandRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PlayerCommandRequest& from);
  void MergeFrom(const PlayerCommandRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlayerCommandRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PlayerCommandRequest_CPixelPosition CPixelPosition;

  // accessors -------------------------------------------------------

  // repeated int32 DActors = 4;
  int dactors_size() const;
  void clear_dactors();
  static const int kDActorsFieldNumber = 4;
  ::google::protobuf::int32 dactors(int index) const;
  void set_dactors(int index, ::google::protobuf::int32 value);
  void add_dactors(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      dactors() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_dactors();

  // optional string message = 7;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 7;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
  bool has_dtargetlocation() const;
  void clear_dtargetlocation();
  static const int kDTargetLocationFieldNumber = 5;
  private:
  const ::GameInfo::PlayerCommandRequest_CPixelPosition& _internal_dtargetlocation() const;
  public:
  const ::GameInfo::PlayerCommandRequest_CPixelPosition& dtargetlocation() const;
  ::GameInfo::PlayerCommandRequest_CPixelPosition* release_dtargetlocation();
  ::GameInfo::PlayerCommandRequest_CPixelPosition* mutable_dtargetlocation();
  void set_allocated_dtargetlocation(::GameInfo::PlayerCommandRequest_CPixelPosition* dtargetlocation);

  // required int32 DAction = 1;
  bool has_daction() const;
  void clear_daction();
  static const int kDActionFieldNumber = 1;
  ::google::protobuf::int32 daction() const;
  void set_daction(::google::protobuf::int32 value);

  // required int32 DTargetNumber = 2;
  bool has_dtargetnumber() const;
  void clear_dtargetnumber();
  static const int kDTargetNumberFieldNumber = 2;
  ::google::protobuf::int32 dtargetnumber() const;
  void set_dtargetnumber(::google::protobuf::int32 value);

  // required int32 DTargetType = 3;
  bool has_dtargettype() const;
  void clear_dtargettype();
  static const int kDTargetTypeFieldNumber = 3;
  ::google::protobuf::int32 dtargettype() const;
  void set_dtargettype(::google::protobuf::int32 value);

  // required int32 PlayerNum = 6;
  bool has_playernum() const;
  void clear_playernum();
  static const int kPlayerNumFieldNumber = 6;
  ::google::protobuf::int32 playernum() const;
  void set_playernum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GameInfo.PlayerCommandRequest)
 private:
  void set_has_daction();
  void clear_has_daction();
  void set_has_dtargetnumber();
  void clear_has_dtargetnumber();
  void set_has_dtargettype();
  void clear_has_dtargettype();
  void set_has_dtargetlocation();
  void clear_has_dtargetlocation();
  void set_has_playernum();
  void clear_has_playernum();
  void set_has_message();
  void clear_has_message();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > dactors_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::GameInfo::PlayerCommandRequest_CPixelPosition* dtargetlocation_;
  ::google::protobuf::int32 daction_;
  ::google::protobuf::int32 dtargetnumber_;
  ::google::protobuf::int32 dtargettype_;
  ::google::protobuf::int32 playernum_;
  friend struct ::protobuf_GameInfo_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PlayerCommandPackage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GameInfo.PlayerCommandPackage) */ {
 public:
  PlayerCommandPackage();
  virtual ~PlayerCommandPackage();

  PlayerCommandPackage(const PlayerCommandPackage& from);

  inline PlayerCommandPackage& operator=(const PlayerCommandPackage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PlayerCommandPackage(PlayerCommandPackage&& from) noexcept
    : PlayerCommandPackage() {
    *this = ::std::move(from);
  }

  inline PlayerCommandPackage& operator=(PlayerCommandPackage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerCommandPackage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlayerCommandPackage* internal_default_instance() {
    return reinterpret_cast<const PlayerCommandPackage*>(
               &_PlayerCommandPackage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(PlayerCommandPackage* other);
  friend void swap(PlayerCommandPackage& a, PlayerCommandPackage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PlayerCommandPackage* New() const final {
    return CreateMaybeMessage<PlayerCommandPackage>(NULL);
  }

  PlayerCommandPackage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PlayerCommandPackage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PlayerCommandPackage& from);
  void MergeFrom(const PlayerCommandPackage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlayerCommandPackage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GameInfo.PlayerCommandRequest DPlayerCommand = 1;
  int dplayercommand_size() const;
  void clear_dplayercommand();
  static const int kDPlayerCommandFieldNumber = 1;
  ::GameInfo::PlayerCommandRequest* mutable_dplayercommand(int index);
  ::google::protobuf::RepeatedPtrField< ::GameInfo::PlayerCommandRequest >*
      mutable_dplayercommand();
  const ::GameInfo::PlayerCommandRequest& dplayercommand(int index) const;
  ::GameInfo::PlayerCommandRequest* add_dplayercommand();
  const ::google::protobuf::RepeatedPtrField< ::GameInfo::PlayerCommandRequest >&
      dplayercommand() const;

  // repeated string messages = 2;
  int messages_size() const;
  void clear_messages();
  static const int kMessagesFieldNumber = 2;
  const ::std::string& messages(int index) const;
  ::std::string* mutable_messages(int index);
  void set_messages(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_messages(int index, ::std::string&& value);
  #endif
  void set_messages(int index, const char* value);
  void set_messages(int index, const char* value, size_t size);
  ::std::string* add_messages();
  void add_messages(const ::std::string& value);
  #if LANG_CXX11
  void add_messages(::std::string&& value);
  #endif
  void add_messages(const char* value);
  void add_messages(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& messages() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_messages();

  // @@protoc_insertion_point(class_scope:GameInfo.PlayerCommandPackage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::GameInfo::PlayerCommandRequest > dplayercommand_;
  ::google::protobuf::RepeatedPtrField< ::std::string> messages_;
  friend struct ::protobuf_GameInfo_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlayerCommandRequest_CPixelPosition

// required int32 DX = 1;
inline bool PlayerCommandRequest_CPixelPosition::has_dx() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerCommandRequest_CPixelPosition::set_has_dx() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerCommandRequest_CPixelPosition::clear_has_dx() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerCommandRequest_CPixelPosition::clear_dx() {
  dx_ = 0;
  clear_has_dx();
}
inline ::google::protobuf::int32 PlayerCommandRequest_CPixelPosition::dx() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.CPixelPosition.DX)
  return dx_;
}
inline void PlayerCommandRequest_CPixelPosition::set_dx(::google::protobuf::int32 value) {
  set_has_dx();
  dx_ = value;
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.CPixelPosition.DX)
}

// required int32 DY = 2;
inline bool PlayerCommandRequest_CPixelPosition::has_dy() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerCommandRequest_CPixelPosition::set_has_dy() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerCommandRequest_CPixelPosition::clear_has_dy() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerCommandRequest_CPixelPosition::clear_dy() {
  dy_ = 0;
  clear_has_dy();
}
inline ::google::protobuf::int32 PlayerCommandRequest_CPixelPosition::dy() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.CPixelPosition.DY)
  return dy_;
}
inline void PlayerCommandRequest_CPixelPosition::set_dy(::google::protobuf::int32 value) {
  set_has_dy();
  dy_ = value;
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.CPixelPosition.DY)
}

// -------------------------------------------------------------------

// PlayerCommandRequest

// required int32 DAction = 1;
inline bool PlayerCommandRequest::has_daction() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerCommandRequest::set_has_daction() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerCommandRequest::clear_has_daction() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerCommandRequest::clear_daction() {
  daction_ = 0;
  clear_has_daction();
}
inline ::google::protobuf::int32 PlayerCommandRequest::daction() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.DAction)
  return daction_;
}
inline void PlayerCommandRequest::set_daction(::google::protobuf::int32 value) {
  set_has_daction();
  daction_ = value;
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.DAction)
}

// required int32 DTargetNumber = 2;
inline bool PlayerCommandRequest::has_dtargetnumber() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerCommandRequest::set_has_dtargetnumber() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerCommandRequest::clear_has_dtargetnumber() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerCommandRequest::clear_dtargetnumber() {
  dtargetnumber_ = 0;
  clear_has_dtargetnumber();
}
inline ::google::protobuf::int32 PlayerCommandRequest::dtargetnumber() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.DTargetNumber)
  return dtargetnumber_;
}
inline void PlayerCommandRequest::set_dtargetnumber(::google::protobuf::int32 value) {
  set_has_dtargetnumber();
  dtargetnumber_ = value;
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.DTargetNumber)
}

// required int32 DTargetType = 3;
inline bool PlayerCommandRequest::has_dtargettype() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PlayerCommandRequest::set_has_dtargettype() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PlayerCommandRequest::clear_has_dtargettype() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PlayerCommandRequest::clear_dtargettype() {
  dtargettype_ = 0;
  clear_has_dtargettype();
}
inline ::google::protobuf::int32 PlayerCommandRequest::dtargettype() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.DTargetType)
  return dtargettype_;
}
inline void PlayerCommandRequest::set_dtargettype(::google::protobuf::int32 value) {
  set_has_dtargettype();
  dtargettype_ = value;
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.DTargetType)
}

// repeated int32 DActors = 4;
inline int PlayerCommandRequest::dactors_size() const {
  return dactors_.size();
}
inline void PlayerCommandRequest::clear_dactors() {
  dactors_.Clear();
}
inline ::google::protobuf::int32 PlayerCommandRequest::dactors(int index) const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.DActors)
  return dactors_.Get(index);
}
inline void PlayerCommandRequest::set_dactors(int index, ::google::protobuf::int32 value) {
  dactors_.Set(index, value);
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.DActors)
}
inline void PlayerCommandRequest::add_dactors(::google::protobuf::int32 value) {
  dactors_.Add(value);
  // @@protoc_insertion_point(field_add:GameInfo.PlayerCommandRequest.DActors)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
PlayerCommandRequest::dactors() const {
  // @@protoc_insertion_point(field_list:GameInfo.PlayerCommandRequest.DActors)
  return dactors_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
PlayerCommandRequest::mutable_dactors() {
  // @@protoc_insertion_point(field_mutable_list:GameInfo.PlayerCommandRequest.DActors)
  return &dactors_;
}

// required .GameInfo.PlayerCommandRequest.CPixelPosition DTargetLocation = 5;
inline bool PlayerCommandRequest::has_dtargetlocation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerCommandRequest::set_has_dtargetlocation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerCommandRequest::clear_has_dtargetlocation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerCommandRequest::clear_dtargetlocation() {
  if (dtargetlocation_ != NULL) dtargetlocation_->Clear();
  clear_has_dtargetlocation();
}
inline const ::GameInfo::PlayerCommandRequest_CPixelPosition& PlayerCommandRequest::_internal_dtargetlocation() const {
  return *dtargetlocation_;
}
inline const ::GameInfo::PlayerCommandRequest_CPixelPosition& PlayerCommandRequest::dtargetlocation() const {
  const ::GameInfo::PlayerCommandRequest_CPixelPosition* p = dtargetlocation_;
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.DTargetLocation)
  return p != NULL ? *p : *reinterpret_cast<const ::GameInfo::PlayerCommandRequest_CPixelPosition*>(
      &::GameInfo::_PlayerCommandRequest_CPixelPosition_default_instance_);
}
inline ::GameInfo::PlayerCommandRequest_CPixelPosition* PlayerCommandRequest::release_dtargetlocation() {
  // @@protoc_insertion_point(field_release:GameInfo.PlayerCommandRequest.DTargetLocation)
  clear_has_dtargetlocation();
  ::GameInfo::PlayerCommandRequest_CPixelPosition* temp = dtargetlocation_;
  dtargetlocation_ = NULL;
  return temp;
}
inline ::GameInfo::PlayerCommandRequest_CPixelPosition* PlayerCommandRequest::mutable_dtargetlocation() {
  set_has_dtargetlocation();
  if (dtargetlocation_ == NULL) {
    auto* p = CreateMaybeMessage<::GameInfo::PlayerCommandRequest_CPixelPosition>(GetArenaNoVirtual());
    dtargetlocation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:GameInfo.PlayerCommandRequest.DTargetLocation)
  return dtargetlocation_;
}
inline void PlayerCommandRequest::set_allocated_dtargetlocation(::GameInfo::PlayerCommandRequest_CPixelPosition* dtargetlocation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete dtargetlocation_;
  }
  if (dtargetlocation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      dtargetlocation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, dtargetlocation, submessage_arena);
    }
    set_has_dtargetlocation();
  } else {
    clear_has_dtargetlocation();
  }
  dtargetlocation_ = dtargetlocation;
  // @@protoc_insertion_point(field_set_allocated:GameInfo.PlayerCommandRequest.DTargetLocation)
}

// required int32 PlayerNum = 6;
inline bool PlayerCommandRequest::has_playernum() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PlayerCommandRequest::set_has_playernum() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PlayerCommandRequest::clear_has_playernum() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PlayerCommandRequest::clear_playernum() {
  playernum_ = 0;
  clear_has_playernum();
}
inline ::google::protobuf::int32 PlayerCommandRequest::playernum() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.PlayerNum)
  return playernum_;
}
inline void PlayerCommandRequest::set_playernum(::google::protobuf::int32 value) {
  set_has_playernum();
  playernum_ = value;
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.PlayerNum)
}

// optional string message = 7;
inline bool PlayerCommandRequest::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerCommandRequest::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerCommandRequest::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerCommandRequest::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message();
}
inline const ::std::string& PlayerCommandRequest::message() const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandRequest.message)
  return message_.GetNoArena();
}
inline void PlayerCommandRequest::set_message(const ::std::string& value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandRequest.message)
}
#if LANG_CXX11
inline void PlayerCommandRequest::set_message(::std::string&& value) {
  set_has_message();
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:GameInfo.PlayerCommandRequest.message)
}
#endif
inline void PlayerCommandRequest::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GameInfo.PlayerCommandRequest.message)
}
inline void PlayerCommandRequest::set_message(const char* value, size_t size) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GameInfo.PlayerCommandRequest.message)
}
inline ::std::string* PlayerCommandRequest::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:GameInfo.PlayerCommandRequest.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PlayerCommandRequest::release_message() {
  // @@protoc_insertion_point(field_release:GameInfo.PlayerCommandRequest.message)
  if (!has_message()) {
    return NULL;
  }
  clear_has_message();
  return message_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PlayerCommandRequest::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:GameInfo.PlayerCommandRequest.message)
}

// -------------------------------------------------------------------

// PlayerCommandPackage

// repeated .GameInfo.PlayerCommandRequest DPlayerCommand = 1;
inline int PlayerCommandPackage::dplayercommand_size() const {
  return dplayercommand_.size();
}
inline void PlayerCommandPackage::clear_dplayercommand() {
  dplayercommand_.Clear();
}
inline ::GameInfo::PlayerCommandRequest* PlayerCommandPackage::mutable_dplayercommand(int index) {
  // @@protoc_insertion_point(field_mutable:GameInfo.PlayerCommandPackage.DPlayerCommand)
  return dplayercommand_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::GameInfo::PlayerCommandRequest >*
PlayerCommandPackage::mutable_dplayercommand() {
  // @@protoc_insertion_point(field_mutable_list:GameInfo.PlayerCommandPackage.DPlayerCommand)
  return &dplayercommand_;
}
inline const ::GameInfo::PlayerCommandRequest& PlayerCommandPackage::dplayercommand(int index) const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandPackage.DPlayerCommand)
  return dplayercommand_.Get(index);
}
inline ::GameInfo::PlayerCommandRequest* PlayerCommandPackage::add_dplayercommand() {
  // @@protoc_insertion_point(field_add:GameInfo.PlayerCommandPackage.DPlayerCommand)
  return dplayercommand_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::GameInfo::PlayerCommandRequest >&
PlayerCommandPackage::dplayercommand() const {
  // @@protoc_insertion_point(field_list:GameInfo.PlayerCommandPackage.DPlayerCommand)
  return dplayercommand_;
}

// repeated string messages = 2;
inline int PlayerCommandPackage::messages_size() const {
  return messages_.size();
}
inline void PlayerCommandPackage::clear_messages() {
  messages_.Clear();
}
inline const ::std::string& PlayerCommandPackage::messages(int index) const {
  // @@protoc_insertion_point(field_get:GameInfo.PlayerCommandPackage.messages)
  return messages_.Get(index);
}
inline ::std::string* PlayerCommandPackage::mutable_messages(int index) {
  // @@protoc_insertion_point(field_mutable:GameInfo.PlayerCommandPackage.messages)
  return messages_.Mutable(index);
}
inline void PlayerCommandPackage::set_messages(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandPackage.messages)
  messages_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void PlayerCommandPackage::set_messages(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:GameInfo.PlayerCommandPackage.messages)
  messages_.Mutable(index)->assign(std::move(value));
}
#endif
inline void PlayerCommandPackage::set_messages(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  messages_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:GameInfo.PlayerCommandPackage.messages)
}
inline void PlayerCommandPackage::set_messages(int index, const char* value, size_t size) {
  messages_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:GameInfo.PlayerCommandPackage.messages)
}
inline ::std::string* PlayerCommandPackage::add_messages() {
  // @@protoc_insertion_point(field_add_mutable:GameInfo.PlayerCommandPackage.messages)
  return messages_.Add();
}
inline void PlayerCommandPackage::add_messages(const ::std::string& value) {
  messages_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:GameInfo.PlayerCommandPackage.messages)
}
#if LANG_CXX11
inline void PlayerCommandPackage::add_messages(::std::string&& value) {
  messages_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:GameInfo.PlayerCommandPackage.messages)
}
#endif
inline void PlayerCommandPackage::add_messages(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  messages_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:GameInfo.PlayerCommandPackage.messages)
}
inline void PlayerCommandPackage::add_messages(const char* value, size_t size) {
  messages_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:GameInfo.PlayerCommandPackage.messages)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
PlayerCommandPackage::messages() const {
  // @@protoc_insertion_point(field_list:GameInfo.PlayerCommandPackage.messages)
  return messages_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
PlayerCommandPackage::mutable_messages() {
  // @@protoc_insertion_point(field_mutable_list:GameInfo.PlayerCommandPackage.messages)
  return &messages_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace GameInfo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_GameInfo_2eproto
