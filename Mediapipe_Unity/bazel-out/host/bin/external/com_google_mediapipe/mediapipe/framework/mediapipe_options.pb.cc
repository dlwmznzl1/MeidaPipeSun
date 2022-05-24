// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/mediapipe_options.proto

#include "mediapipe/framework/mediapipe_options.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace mediapipe {
constexpr MediaPipeOptions::MediaPipeOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct MediaPipeOptionsDefaultTypeInternal {
  constexpr MediaPipeOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MediaPipeOptionsDefaultTypeInternal() {}
  union {
    MediaPipeOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MediaPipeOptionsDefaultTypeInternal _MediaPipeOptions_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fmediapipe_5foptions_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fframework_2fmediapipe_5foptions_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fmediapipe_5foptions_2eproto = nullptr;

const uint32_t TableStruct_mediapipe_2fframework_2fmediapipe_5foptions_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::MediaPipeOptions, _internal_metadata_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MediaPipeOptions, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::mediapipe::MediaPipeOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_MediaPipeOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fmediapipe_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+mediapipe/framework/mediapipe_options."
  "proto\022\tmediapipe\"\036\n\020MediaPipeOptions*\n\010\240"
  "\234\001\020\200\200\200\200\002B3\n\032com.google.mediapipe.protoB\025"
  "MediaPipeOptionsProto"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto = {
  false, false, 141, descriptor_table_protodef_mediapipe_2fframework_2fmediapipe_5foptions_2eproto, "mediapipe/framework/mediapipe_options.proto", 
  &descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fmediapipe_5foptions_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fmediapipe_5foptions_2eproto, file_level_enum_descriptors_mediapipe_2fframework_2fmediapipe_5foptions_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fmediapipe_5foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto_getter() {
  return &descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fframework_2fmediapipe_5foptions_2eproto(&descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto);
namespace mediapipe {

// ===================================================================

class MediaPipeOptions::_Internal {
 public:
};

MediaPipeOptions::MediaPipeOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  _extensions_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.MediaPipeOptions)
}
MediaPipeOptions::MediaPipeOptions(const MediaPipeOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _extensions_.MergeFrom(internal_default_instance(), from._extensions_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.MediaPipeOptions)
}

inline void MediaPipeOptions::SharedCtor() {
}

MediaPipeOptions::~MediaPipeOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.MediaPipeOptions)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void MediaPipeOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MediaPipeOptions::ArenaDtor(void* object) {
  MediaPipeOptions* _this = reinterpret_cast< MediaPipeOptions* >(object);
  (void)_this;
}
void MediaPipeOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MediaPipeOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MediaPipeOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.MediaPipeOptions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MediaPipeOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    if ((160000u <= tag)) {
      ptr = _extensions_.ParseField(tag, ptr, internal_default_instance(), &_internal_metadata_, ctx);
      CHK_(ptr != nullptr);
      continue;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MediaPipeOptions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.MediaPipeOptions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // Extension range [20000, 536870912)
  target = _extensions_._InternalSerialize(
  internal_default_instance(), 20000, 536870912, target, stream);

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.MediaPipeOptions)
  return target;
}

size_t MediaPipeOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.MediaPipeOptions)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MediaPipeOptions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    MediaPipeOptions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MediaPipeOptions::GetClassData() const { return &_class_data_; }

void MediaPipeOptions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<MediaPipeOptions *>(to)->MergeFrom(
      static_cast<const MediaPipeOptions &>(from));
}


void MediaPipeOptions::MergeFrom(const MediaPipeOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.MediaPipeOptions)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _extensions_.MergeFrom(internal_default_instance(), from._extensions_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MediaPipeOptions::CopyFrom(const MediaPipeOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.MediaPipeOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MediaPipeOptions::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void MediaPipeOptions::InternalSwap(MediaPipeOptions* other) {
  using std::swap;
  _extensions_.InternalSwap(&other->_extensions_);
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MediaPipeOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fmediapipe_5foptions_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fmediapipe_5foptions_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::MediaPipeOptions* Arena::CreateMaybeMessage< ::mediapipe::MediaPipeOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::MediaPipeOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>