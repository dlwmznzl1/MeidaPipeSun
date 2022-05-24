// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/rect_transformation_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/calculator.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto;
namespace mediapipe {
class RectTransformationCalculatorOptions;
struct RectTransformationCalculatorOptionsDefaultTypeInternal;
extern RectTransformationCalculatorOptionsDefaultTypeInternal _RectTransformationCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::RectTransformationCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::RectTransformationCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class RectTransformationCalculatorOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.RectTransformationCalculatorOptions) */ {
 public:
  inline RectTransformationCalculatorOptions() : RectTransformationCalculatorOptions(nullptr) {}
  ~RectTransformationCalculatorOptions() override;
  explicit constexpr RectTransformationCalculatorOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RectTransformationCalculatorOptions(const RectTransformationCalculatorOptions& from);
  RectTransformationCalculatorOptions(RectTransformationCalculatorOptions&& from) noexcept
    : RectTransformationCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline RectTransformationCalculatorOptions& operator=(const RectTransformationCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline RectTransformationCalculatorOptions& operator=(RectTransformationCalculatorOptions&& from) noexcept {
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
  static const RectTransformationCalculatorOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const RectTransformationCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const RectTransformationCalculatorOptions*>(
               &_RectTransformationCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RectTransformationCalculatorOptions& a, RectTransformationCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(RectTransformationCalculatorOptions* other) {
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
  void UnsafeArenaSwap(RectTransformationCalculatorOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RectTransformationCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RectTransformationCalculatorOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RectTransformationCalculatorOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RectTransformationCalculatorOptions& from);
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
  void InternalSwap(RectTransformationCalculatorOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.RectTransformationCalculatorOptions";
  }
  protected:
  explicit RectTransformationCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRotationFieldNumber = 3,
    kRotationDegreesFieldNumber = 4,
    kShiftXFieldNumber = 5,
    kShiftYFieldNumber = 6,
    kSquareLongFieldNumber = 7,
    kSquareShortFieldNumber = 8,
    kScaleXFieldNumber = 1,
    kScaleYFieldNumber = 2,
  };
  // optional float rotation = 3;
  bool has_rotation() const;
  private:
  bool _internal_has_rotation() const;
  public:
  void clear_rotation();
  float rotation() const;
  void set_rotation(float value);
  private:
  float _internal_rotation() const;
  void _internal_set_rotation(float value);
  public:

  // optional int32 rotation_degrees = 4;
  bool has_rotation_degrees() const;
  private:
  bool _internal_has_rotation_degrees() const;
  public:
  void clear_rotation_degrees();
  int32_t rotation_degrees() const;
  void set_rotation_degrees(int32_t value);
  private:
  int32_t _internal_rotation_degrees() const;
  void _internal_set_rotation_degrees(int32_t value);
  public:

  // optional float shift_x = 5;
  bool has_shift_x() const;
  private:
  bool _internal_has_shift_x() const;
  public:
  void clear_shift_x();
  float shift_x() const;
  void set_shift_x(float value);
  private:
  float _internal_shift_x() const;
  void _internal_set_shift_x(float value);
  public:

  // optional float shift_y = 6;
  bool has_shift_y() const;
  private:
  bool _internal_has_shift_y() const;
  public:
  void clear_shift_y();
  float shift_y() const;
  void set_shift_y(float value);
  private:
  float _internal_shift_y() const;
  void _internal_set_shift_y(float value);
  public:

  // optional bool square_long = 7;
  bool has_square_long() const;
  private:
  bool _internal_has_square_long() const;
  public:
  void clear_square_long();
  bool square_long() const;
  void set_square_long(bool value);
  private:
  bool _internal_square_long() const;
  void _internal_set_square_long(bool value);
  public:

  // optional bool square_short = 8;
  bool has_square_short() const;
  private:
  bool _internal_has_square_short() const;
  public:
  void clear_square_short();
  bool square_short() const;
  void set_square_short(bool value);
  private:
  bool _internal_square_short() const;
  void _internal_set_square_short(bool value);
  public:

  // optional float scale_x = 1 [default = 1];
  bool has_scale_x() const;
  private:
  bool _internal_has_scale_x() const;
  public:
  void clear_scale_x();
  float scale_x() const;
  void set_scale_x(float value);
  private:
  float _internal_scale_x() const;
  void _internal_set_scale_x(float value);
  public:

  // optional float scale_y = 2 [default = 1];
  bool has_scale_y() const;
  private:
  bool _internal_has_scale_y() const;
  public:
  void clear_scale_y();
  float scale_y() const;
  void set_scale_y(float value);
  private:
  float _internal_scale_y() const;
  void _internal_set_scale_y(float value);
  public:

  static const int kExtFieldNumber = 262226312;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::RectTransformationCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.RectTransformationCalculatorOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float rotation_;
  int32_t rotation_degrees_;
  float shift_x_;
  float shift_y_;
  bool square_long_;
  bool square_short_;
  float scale_x_;
  float scale_y_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RectTransformationCalculatorOptions

// optional float scale_x = 1 [default = 1];
inline bool RectTransformationCalculatorOptions::_internal_has_scale_x() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_scale_x() const {
  return _internal_has_scale_x();
}
inline void RectTransformationCalculatorOptions::clear_scale_x() {
  scale_x_ = 1;
  _has_bits_[0] &= ~0x00000040u;
}
inline float RectTransformationCalculatorOptions::_internal_scale_x() const {
  return scale_x_;
}
inline float RectTransformationCalculatorOptions::scale_x() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.scale_x)
  return _internal_scale_x();
}
inline void RectTransformationCalculatorOptions::_internal_set_scale_x(float value) {
  _has_bits_[0] |= 0x00000040u;
  scale_x_ = value;
}
inline void RectTransformationCalculatorOptions::set_scale_x(float value) {
  _internal_set_scale_x(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.scale_x)
}

// optional float scale_y = 2 [default = 1];
inline bool RectTransformationCalculatorOptions::_internal_has_scale_y() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_scale_y() const {
  return _internal_has_scale_y();
}
inline void RectTransformationCalculatorOptions::clear_scale_y() {
  scale_y_ = 1;
  _has_bits_[0] &= ~0x00000080u;
}
inline float RectTransformationCalculatorOptions::_internal_scale_y() const {
  return scale_y_;
}
inline float RectTransformationCalculatorOptions::scale_y() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.scale_y)
  return _internal_scale_y();
}
inline void RectTransformationCalculatorOptions::_internal_set_scale_y(float value) {
  _has_bits_[0] |= 0x00000080u;
  scale_y_ = value;
}
inline void RectTransformationCalculatorOptions::set_scale_y(float value) {
  _internal_set_scale_y(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.scale_y)
}

// optional float rotation = 3;
inline bool RectTransformationCalculatorOptions::_internal_has_rotation() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_rotation() const {
  return _internal_has_rotation();
}
inline void RectTransformationCalculatorOptions::clear_rotation() {
  rotation_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float RectTransformationCalculatorOptions::_internal_rotation() const {
  return rotation_;
}
inline float RectTransformationCalculatorOptions::rotation() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.rotation)
  return _internal_rotation();
}
inline void RectTransformationCalculatorOptions::_internal_set_rotation(float value) {
  _has_bits_[0] |= 0x00000001u;
  rotation_ = value;
}
inline void RectTransformationCalculatorOptions::set_rotation(float value) {
  _internal_set_rotation(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.rotation)
}

// optional int32 rotation_degrees = 4;
inline bool RectTransformationCalculatorOptions::_internal_has_rotation_degrees() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_rotation_degrees() const {
  return _internal_has_rotation_degrees();
}
inline void RectTransformationCalculatorOptions::clear_rotation_degrees() {
  rotation_degrees_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t RectTransformationCalculatorOptions::_internal_rotation_degrees() const {
  return rotation_degrees_;
}
inline int32_t RectTransformationCalculatorOptions::rotation_degrees() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.rotation_degrees)
  return _internal_rotation_degrees();
}
inline void RectTransformationCalculatorOptions::_internal_set_rotation_degrees(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  rotation_degrees_ = value;
}
inline void RectTransformationCalculatorOptions::set_rotation_degrees(int32_t value) {
  _internal_set_rotation_degrees(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.rotation_degrees)
}

// optional float shift_x = 5;
inline bool RectTransformationCalculatorOptions::_internal_has_shift_x() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_shift_x() const {
  return _internal_has_shift_x();
}
inline void RectTransformationCalculatorOptions::clear_shift_x() {
  shift_x_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float RectTransformationCalculatorOptions::_internal_shift_x() const {
  return shift_x_;
}
inline float RectTransformationCalculatorOptions::shift_x() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.shift_x)
  return _internal_shift_x();
}
inline void RectTransformationCalculatorOptions::_internal_set_shift_x(float value) {
  _has_bits_[0] |= 0x00000004u;
  shift_x_ = value;
}
inline void RectTransformationCalculatorOptions::set_shift_x(float value) {
  _internal_set_shift_x(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.shift_x)
}

// optional float shift_y = 6;
inline bool RectTransformationCalculatorOptions::_internal_has_shift_y() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_shift_y() const {
  return _internal_has_shift_y();
}
inline void RectTransformationCalculatorOptions::clear_shift_y() {
  shift_y_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float RectTransformationCalculatorOptions::_internal_shift_y() const {
  return shift_y_;
}
inline float RectTransformationCalculatorOptions::shift_y() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.shift_y)
  return _internal_shift_y();
}
inline void RectTransformationCalculatorOptions::_internal_set_shift_y(float value) {
  _has_bits_[0] |= 0x00000008u;
  shift_y_ = value;
}
inline void RectTransformationCalculatorOptions::set_shift_y(float value) {
  _internal_set_shift_y(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.shift_y)
}

// optional bool square_long = 7;
inline bool RectTransformationCalculatorOptions::_internal_has_square_long() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_square_long() const {
  return _internal_has_square_long();
}
inline void RectTransformationCalculatorOptions::clear_square_long() {
  square_long_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool RectTransformationCalculatorOptions::_internal_square_long() const {
  return square_long_;
}
inline bool RectTransformationCalculatorOptions::square_long() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.square_long)
  return _internal_square_long();
}
inline void RectTransformationCalculatorOptions::_internal_set_square_long(bool value) {
  _has_bits_[0] |= 0x00000010u;
  square_long_ = value;
}
inline void RectTransformationCalculatorOptions::set_square_long(bool value) {
  _internal_set_square_long(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.square_long)
}

// optional bool square_short = 8;
inline bool RectTransformationCalculatorOptions::_internal_has_square_short() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool RectTransformationCalculatorOptions::has_square_short() const {
  return _internal_has_square_short();
}
inline void RectTransformationCalculatorOptions::clear_square_short() {
  square_short_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool RectTransformationCalculatorOptions::_internal_square_short() const {
  return square_short_;
}
inline bool RectTransformationCalculatorOptions::square_short() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectTransformationCalculatorOptions.square_short)
  return _internal_square_short();
}
inline void RectTransformationCalculatorOptions::_internal_set_square_short(bool value) {
  _has_bits_[0] |= 0x00000020u;
  square_short_ = value;
}
inline void RectTransformationCalculatorOptions::set_square_short(bool value) {
  _internal_set_square_short(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectTransformationCalculatorOptions.square_short)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frect_5ftransformation_5fcalculator_2eproto