// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/local_file_contents_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto;
namespace mediapipe {
class LocalFileContentsCalculatorOptions;
struct LocalFileContentsCalculatorOptionsDefaultTypeInternal;
extern LocalFileContentsCalculatorOptionsDefaultTypeInternal _LocalFileContentsCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::LocalFileContentsCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::LocalFileContentsCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class LocalFileContentsCalculatorOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.LocalFileContentsCalculatorOptions) */ {
 public:
  inline LocalFileContentsCalculatorOptions() : LocalFileContentsCalculatorOptions(nullptr) {}
  ~LocalFileContentsCalculatorOptions() override;
  explicit constexpr LocalFileContentsCalculatorOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LocalFileContentsCalculatorOptions(const LocalFileContentsCalculatorOptions& from);
  LocalFileContentsCalculatorOptions(LocalFileContentsCalculatorOptions&& from) noexcept
    : LocalFileContentsCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline LocalFileContentsCalculatorOptions& operator=(const LocalFileContentsCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline LocalFileContentsCalculatorOptions& operator=(LocalFileContentsCalculatorOptions&& from) noexcept {
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
  static const LocalFileContentsCalculatorOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const LocalFileContentsCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const LocalFileContentsCalculatorOptions*>(
               &_LocalFileContentsCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LocalFileContentsCalculatorOptions& a, LocalFileContentsCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(LocalFileContentsCalculatorOptions* other) {
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
  void UnsafeArenaSwap(LocalFileContentsCalculatorOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LocalFileContentsCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LocalFileContentsCalculatorOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LocalFileContentsCalculatorOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const LocalFileContentsCalculatorOptions& from);
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
  void InternalSwap(LocalFileContentsCalculatorOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.LocalFileContentsCalculatorOptions";
  }
  protected:
  explicit LocalFileContentsCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kTextModeFieldNumber = 1,
  };
  // optional bool text_mode = 1;
  bool has_text_mode() const;
  private:
  bool _internal_has_text_mode() const;
  public:
  void clear_text_mode();
  bool text_mode() const;
  void set_text_mode(bool value);
  private:
  bool _internal_text_mode() const;
  void _internal_set_text_mode(bool value);
  public:

  static const int kExtFieldNumber = 346849340;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::LocalFileContentsCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.LocalFileContentsCalculatorOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool text_mode_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocalFileContentsCalculatorOptions

// optional bool text_mode = 1;
inline bool LocalFileContentsCalculatorOptions::_internal_has_text_mode() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool LocalFileContentsCalculatorOptions::has_text_mode() const {
  return _internal_has_text_mode();
}
inline void LocalFileContentsCalculatorOptions::clear_text_mode() {
  text_mode_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool LocalFileContentsCalculatorOptions::_internal_text_mode() const {
  return text_mode_;
}
inline bool LocalFileContentsCalculatorOptions::text_mode() const {
  // @@protoc_insertion_point(field_get:mediapipe.LocalFileContentsCalculatorOptions.text_mode)
  return _internal_text_mode();
}
inline void LocalFileContentsCalculatorOptions::_internal_set_text_mode(bool value) {
  _has_bits_[0] |= 0x00000001u;
  text_mode_ = value;
}
inline void LocalFileContentsCalculatorOptions::set_text_mode(bool value) {
  _internal_set_text_mode(value);
  // @@protoc_insertion_point(field_set:mediapipe.LocalFileContentsCalculatorOptions.text_mode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto