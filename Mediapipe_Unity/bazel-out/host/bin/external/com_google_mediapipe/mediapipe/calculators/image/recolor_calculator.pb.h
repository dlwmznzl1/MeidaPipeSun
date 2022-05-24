// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/image/recolor_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/calculator.pb.h"
#include "mediapipe/util/color.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto;
namespace mediapipe {
class RecolorCalculatorOptions;
struct RecolorCalculatorOptionsDefaultTypeInternal;
extern RecolorCalculatorOptionsDefaultTypeInternal _RecolorCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::RecolorCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::RecolorCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

enum RecolorCalculatorOptions_MaskChannel : int {
  RecolorCalculatorOptions_MaskChannel_UNKNOWN = 0,
  RecolorCalculatorOptions_MaskChannel_RED = 1,
  RecolorCalculatorOptions_MaskChannel_ALPHA = 2
};
bool RecolorCalculatorOptions_MaskChannel_IsValid(int value);
constexpr RecolorCalculatorOptions_MaskChannel RecolorCalculatorOptions_MaskChannel_MaskChannel_MIN = RecolorCalculatorOptions_MaskChannel_UNKNOWN;
constexpr RecolorCalculatorOptions_MaskChannel RecolorCalculatorOptions_MaskChannel_MaskChannel_MAX = RecolorCalculatorOptions_MaskChannel_ALPHA;
constexpr int RecolorCalculatorOptions_MaskChannel_MaskChannel_ARRAYSIZE = RecolorCalculatorOptions_MaskChannel_MaskChannel_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RecolorCalculatorOptions_MaskChannel_descriptor();
template<typename T>
inline const std::string& RecolorCalculatorOptions_MaskChannel_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RecolorCalculatorOptions_MaskChannel>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RecolorCalculatorOptions_MaskChannel_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RecolorCalculatorOptions_MaskChannel_descriptor(), enum_t_value);
}
inline bool RecolorCalculatorOptions_MaskChannel_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, RecolorCalculatorOptions_MaskChannel* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RecolorCalculatorOptions_MaskChannel>(
    RecolorCalculatorOptions_MaskChannel_descriptor(), name, value);
}
// ===================================================================

class RecolorCalculatorOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.RecolorCalculatorOptions) */ {
 public:
  inline RecolorCalculatorOptions() : RecolorCalculatorOptions(nullptr) {}
  ~RecolorCalculatorOptions() override;
  explicit constexpr RecolorCalculatorOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RecolorCalculatorOptions(const RecolorCalculatorOptions& from);
  RecolorCalculatorOptions(RecolorCalculatorOptions&& from) noexcept
    : RecolorCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline RecolorCalculatorOptions& operator=(const RecolorCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline RecolorCalculatorOptions& operator=(RecolorCalculatorOptions&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RecolorCalculatorOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const RecolorCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const RecolorCalculatorOptions*>(
               &_RecolorCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RecolorCalculatorOptions& a, RecolorCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(RecolorCalculatorOptions* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RecolorCalculatorOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RecolorCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RecolorCalculatorOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RecolorCalculatorOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RecolorCalculatorOptions& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RecolorCalculatorOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.RecolorCalculatorOptions";
  }
  protected:
  explicit RecolorCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef RecolorCalculatorOptions_MaskChannel MaskChannel;
  static constexpr MaskChannel UNKNOWN =
    RecolorCalculatorOptions_MaskChannel_UNKNOWN;
  static constexpr MaskChannel RED =
    RecolorCalculatorOptions_MaskChannel_RED;
  static constexpr MaskChannel ALPHA =
    RecolorCalculatorOptions_MaskChannel_ALPHA;
  static inline bool MaskChannel_IsValid(int value) {
    return RecolorCalculatorOptions_MaskChannel_IsValid(value);
  }
  static constexpr MaskChannel MaskChannel_MIN =
    RecolorCalculatorOptions_MaskChannel_MaskChannel_MIN;
  static constexpr MaskChannel MaskChannel_MAX =
    RecolorCalculatorOptions_MaskChannel_MaskChannel_MAX;
  static constexpr int MaskChannel_ARRAYSIZE =
    RecolorCalculatorOptions_MaskChannel_MaskChannel_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  MaskChannel_descriptor() {
    return RecolorCalculatorOptions_MaskChannel_descriptor();
  }
  template<typename T>
  static inline const std::string& MaskChannel_Name(T enum_t_value) {
    static_assert(::std::is_same<T, MaskChannel>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function MaskChannel_Name.");
    return RecolorCalculatorOptions_MaskChannel_Name(enum_t_value);
  }
  static inline bool MaskChannel_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      MaskChannel* value) {
    return RecolorCalculatorOptions_MaskChannel_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kColorFieldNumber = 2,
    kInvertMaskFieldNumber = 3,
    kMaskChannelFieldNumber = 1,
    kAdjustWithLuminanceFieldNumber = 4,
  };
  // optional .mediapipe.Color color = 2;
  bool has_color() const;
  private:
  bool _internal_has_color() const;
  public:
  void clear_color();
  const ::mediapipe::Color& color() const;
  PROTOBUF_NODISCARD ::mediapipe::Color* release_color();
  ::mediapipe::Color* mutable_color();
  void set_allocated_color(::mediapipe::Color* color);
  private:
  const ::mediapipe::Color& _internal_color() const;
  ::mediapipe::Color* _internal_mutable_color();
  public:
  void unsafe_arena_set_allocated_color(
      ::mediapipe::Color* color);
  ::mediapipe::Color* unsafe_arena_release_color();

  // optional bool invert_mask = 3 [default = false];
  bool has_invert_mask() const;
  private:
  bool _internal_has_invert_mask() const;
  public:
  void clear_invert_mask();
  bool invert_mask() const;
  void set_invert_mask(bool value);
  private:
  bool _internal_invert_mask() const;
  void _internal_set_invert_mask(bool value);
  public:

  // optional .mediapipe.RecolorCalculatorOptions.MaskChannel mask_channel = 1 [default = RED];
  bool has_mask_channel() const;
  private:
  bool _internal_has_mask_channel() const;
  public:
  void clear_mask_channel();
  ::mediapipe::RecolorCalculatorOptions_MaskChannel mask_channel() const;
  void set_mask_channel(::mediapipe::RecolorCalculatorOptions_MaskChannel value);
  private:
  ::mediapipe::RecolorCalculatorOptions_MaskChannel _internal_mask_channel() const;
  void _internal_set_mask_channel(::mediapipe::RecolorCalculatorOptions_MaskChannel value);
  public:

  // optional bool adjust_with_luminance = 4 [default = true];
  bool has_adjust_with_luminance() const;
  private:
  bool _internal_has_adjust_with_luminance() const;
  public:
  void clear_adjust_with_luminance();
  bool adjust_with_luminance() const;
  void set_adjust_with_luminance(bool value);
  private:
  bool _internal_adjust_with_luminance() const;
  void _internal_set_adjust_with_luminance(bool value);
  public:

  static const int kExtFieldNumber = 252527117;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::RecolorCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.RecolorCalculatorOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::mediapipe::Color* color_;
  bool invert_mask_;
  int mask_channel_;
  bool adjust_with_luminance_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RecolorCalculatorOptions

// optional .mediapipe.RecolorCalculatorOptions.MaskChannel mask_channel = 1 [default = RED];
inline bool RecolorCalculatorOptions::_internal_has_mask_channel() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RecolorCalculatorOptions::has_mask_channel() const {
  return _internal_has_mask_channel();
}
inline void RecolorCalculatorOptions::clear_mask_channel() {
  mask_channel_ = 1;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::mediapipe::RecolorCalculatorOptions_MaskChannel RecolorCalculatorOptions::_internal_mask_channel() const {
  return static_cast< ::mediapipe::RecolorCalculatorOptions_MaskChannel >(mask_channel_);
}
inline ::mediapipe::RecolorCalculatorOptions_MaskChannel RecolorCalculatorOptions::mask_channel() const {
  // @@protoc_insertion_point(field_get:mediapipe.RecolorCalculatorOptions.mask_channel)
  return _internal_mask_channel();
}
inline void RecolorCalculatorOptions::_internal_set_mask_channel(::mediapipe::RecolorCalculatorOptions_MaskChannel value) {
  assert(::mediapipe::RecolorCalculatorOptions_MaskChannel_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  mask_channel_ = value;
}
inline void RecolorCalculatorOptions::set_mask_channel(::mediapipe::RecolorCalculatorOptions_MaskChannel value) {
  _internal_set_mask_channel(value);
  // @@protoc_insertion_point(field_set:mediapipe.RecolorCalculatorOptions.mask_channel)
}

// optional .mediapipe.Color color = 2;
inline bool RecolorCalculatorOptions::_internal_has_color() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || color_ != nullptr);
  return value;
}
inline bool RecolorCalculatorOptions::has_color() const {
  return _internal_has_color();
}
inline const ::mediapipe::Color& RecolorCalculatorOptions::_internal_color() const {
  const ::mediapipe::Color* p = color_;
  return p != nullptr ? *p : reinterpret_cast<const ::mediapipe::Color&>(
      ::mediapipe::_Color_default_instance_);
}
inline const ::mediapipe::Color& RecolorCalculatorOptions::color() const {
  // @@protoc_insertion_point(field_get:mediapipe.RecolorCalculatorOptions.color)
  return _internal_color();
}
inline void RecolorCalculatorOptions::unsafe_arena_set_allocated_color(
    ::mediapipe::Color* color) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_);
  }
  color_ = color;
  if (color) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mediapipe.RecolorCalculatorOptions.color)
}
inline ::mediapipe::Color* RecolorCalculatorOptions::release_color() {
  _has_bits_[0] &= ~0x00000001u;
  ::mediapipe::Color* temp = color_;
  color_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::mediapipe::Color* RecolorCalculatorOptions::unsafe_arena_release_color() {
  // @@protoc_insertion_point(field_release:mediapipe.RecolorCalculatorOptions.color)
  _has_bits_[0] &= ~0x00000001u;
  ::mediapipe::Color* temp = color_;
  color_ = nullptr;
  return temp;
}
inline ::mediapipe::Color* RecolorCalculatorOptions::_internal_mutable_color() {
  _has_bits_[0] |= 0x00000001u;
  if (color_ == nullptr) {
    auto* p = CreateMaybeMessage<::mediapipe::Color>(GetArenaForAllocation());
    color_ = p;
  }
  return color_;
}
inline ::mediapipe::Color* RecolorCalculatorOptions::mutable_color() {
  ::mediapipe::Color* _msg = _internal_mutable_color();
  // @@protoc_insertion_point(field_mutable:mediapipe.RecolorCalculatorOptions.color)
  return _msg;
}
inline void RecolorCalculatorOptions::set_allocated_color(::mediapipe::Color* color) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_);
  }
  if (color) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(color));
    if (message_arena != submessage_arena) {
      color = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, color, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  color_ = color;
  // @@protoc_insertion_point(field_set_allocated:mediapipe.RecolorCalculatorOptions.color)
}

// optional bool invert_mask = 3 [default = false];
inline bool RecolorCalculatorOptions::_internal_has_invert_mask() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RecolorCalculatorOptions::has_invert_mask() const {
  return _internal_has_invert_mask();
}
inline void RecolorCalculatorOptions::clear_invert_mask() {
  invert_mask_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool RecolorCalculatorOptions::_internal_invert_mask() const {
  return invert_mask_;
}
inline bool RecolorCalculatorOptions::invert_mask() const {
  // @@protoc_insertion_point(field_get:mediapipe.RecolorCalculatorOptions.invert_mask)
  return _internal_invert_mask();
}
inline void RecolorCalculatorOptions::_internal_set_invert_mask(bool value) {
  _has_bits_[0] |= 0x00000002u;
  invert_mask_ = value;
}
inline void RecolorCalculatorOptions::set_invert_mask(bool value) {
  _internal_set_invert_mask(value);
  // @@protoc_insertion_point(field_set:mediapipe.RecolorCalculatorOptions.invert_mask)
}

// optional bool adjust_with_luminance = 4 [default = true];
inline bool RecolorCalculatorOptions::_internal_has_adjust_with_luminance() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RecolorCalculatorOptions::has_adjust_with_luminance() const {
  return _internal_has_adjust_with_luminance();
}
inline void RecolorCalculatorOptions::clear_adjust_with_luminance() {
  adjust_with_luminance_ = true;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool RecolorCalculatorOptions::_internal_adjust_with_luminance() const {
  return adjust_with_luminance_;
}
inline bool RecolorCalculatorOptions::adjust_with_luminance() const {
  // @@protoc_insertion_point(field_get:mediapipe.RecolorCalculatorOptions.adjust_with_luminance)
  return _internal_adjust_with_luminance();
}
inline void RecolorCalculatorOptions::_internal_set_adjust_with_luminance(bool value) {
  _has_bits_[0] |= 0x00000008u;
  adjust_with_luminance_ = value;
}
inline void RecolorCalculatorOptions::set_adjust_with_luminance(bool value) {
  _internal_set_adjust_with_luminance(value);
  // @@protoc_insertion_point(field_set:mediapipe.RecolorCalculatorOptions.adjust_with_luminance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::mediapipe::RecolorCalculatorOptions_MaskChannel> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mediapipe::RecolorCalculatorOptions_MaskChannel>() {
  return ::mediapipe::RecolorCalculatorOptions_MaskChannel_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2fimage_2frecolor_5fcalculator_2eproto