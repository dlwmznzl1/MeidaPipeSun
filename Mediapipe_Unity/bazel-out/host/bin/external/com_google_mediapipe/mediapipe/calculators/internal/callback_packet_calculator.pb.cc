// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/internal/callback_packet_calculator.proto

#include "mediapipe/calculators/internal/callback_packet_calculator.pb.h"

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
constexpr CallbackPacketCalculatorOptions::CallbackPacketCalculatorOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : pointer_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , type_(0)
{}
struct CallbackPacketCalculatorOptionsDefaultTypeInternal {
  constexpr CallbackPacketCalculatorOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CallbackPacketCalculatorOptionsDefaultTypeInternal() {}
  union {
    CallbackPacketCalculatorOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CallbackPacketCalculatorOptionsDefaultTypeInternal _CallbackPacketCalculatorOptions_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto = nullptr;

const uint32_t TableStruct_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::CallbackPacketCalculatorOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::CallbackPacketCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::CallbackPacketCalculatorOptions, type_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::CallbackPacketCalculatorOptions, pointer_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::mediapipe::CallbackPacketCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_CallbackPacketCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\?mediapipe/calculators/internal/callbac"
  "k_packet_calculator.proto\022\tmediapipe\032$me"
  "diapipe/framework/calculator.proto\"\231\002\n\037C"
  "allbackPacketCalculatorOptions\022D\n\004type\030\001"
  " \001(\01626.mediapipe.CallbackPacketCalculato"
  "rOptions.PointerType\022\017\n\007pointer\030\002 \001(\014\"E\n"
  "\013PointerType\022\013\n\007UNKNOWN\020\000\022\021\n\rVECTOR_PACK"
  "ET\020\001\022\026\n\022POST_STREAM_PACKET\020\0022X\n\003ext\022\034.me"
  "diapipe.CalculatorOptions\030\353\307\244u \001(\0132*.med"
  "iapipe.CallbackPacketCalculatorOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto = {
  false, false, 398, descriptor_table_protodef_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto, "mediapipe/calculators/internal/callback_packet_calculator.proto", 
  &descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto, file_level_enum_descriptors_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_getter() {
  return &descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto(&descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto);
namespace mediapipe {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CallbackPacketCalculatorOptions_PointerType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto);
  return file_level_enum_descriptors_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto[0];
}
bool CallbackPacketCalculatorOptions_PointerType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr CallbackPacketCalculatorOptions_PointerType CallbackPacketCalculatorOptions::UNKNOWN;
constexpr CallbackPacketCalculatorOptions_PointerType CallbackPacketCalculatorOptions::VECTOR_PACKET;
constexpr CallbackPacketCalculatorOptions_PointerType CallbackPacketCalculatorOptions::POST_STREAM_PACKET;
constexpr CallbackPacketCalculatorOptions_PointerType CallbackPacketCalculatorOptions::PointerType_MIN;
constexpr CallbackPacketCalculatorOptions_PointerType CallbackPacketCalculatorOptions::PointerType_MAX;
constexpr int CallbackPacketCalculatorOptions::PointerType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class CallbackPacketCalculatorOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<CallbackPacketCalculatorOptions>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_pointer(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

CallbackPacketCalculatorOptions::CallbackPacketCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.CallbackPacketCalculatorOptions)
}
CallbackPacketCalculatorOptions::CallbackPacketCalculatorOptions(const CallbackPacketCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  pointer_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    pointer_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_pointer()) {
    pointer_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_pointer(), 
      GetArenaForAllocation());
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:mediapipe.CallbackPacketCalculatorOptions)
}

inline void CallbackPacketCalculatorOptions::SharedCtor() {
pointer_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  pointer_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
type_ = 0;
}

CallbackPacketCalculatorOptions::~CallbackPacketCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.CallbackPacketCalculatorOptions)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void CallbackPacketCalculatorOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  pointer_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CallbackPacketCalculatorOptions::ArenaDtor(void* object) {
  CallbackPacketCalculatorOptions* _this = reinterpret_cast< CallbackPacketCalculatorOptions* >(object);
  (void)_this;
}
void CallbackPacketCalculatorOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CallbackPacketCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CallbackPacketCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.CallbackPacketCalculatorOptions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    pointer_.ClearNonDefaultToEmpty();
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CallbackPacketCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .mediapipe.CallbackPacketCalculatorOptions.PointerType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::mediapipe::CallbackPacketCalculatorOptions_PointerType_IsValid(val))) {
            _internal_set_type(static_cast<::mediapipe::CallbackPacketCalculatorOptions_PointerType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional bytes pointer = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_pointer();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CallbackPacketCalculatorOptions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.CallbackPacketCalculatorOptions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .mediapipe.CallbackPacketCalculatorOptions.PointerType type = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // optional bytes pointer = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_pointer(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.CallbackPacketCalculatorOptions)
  return target;
}

size_t CallbackPacketCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.CallbackPacketCalculatorOptions)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes pointer = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_pointer());
    }

    // optional .mediapipe.CallbackPacketCalculatorOptions.PointerType type = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CallbackPacketCalculatorOptions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CallbackPacketCalculatorOptions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CallbackPacketCalculatorOptions::GetClassData() const { return &_class_data_; }

void CallbackPacketCalculatorOptions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<CallbackPacketCalculatorOptions *>(to)->MergeFrom(
      static_cast<const CallbackPacketCalculatorOptions &>(from));
}


void CallbackPacketCalculatorOptions::MergeFrom(const CallbackPacketCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.CallbackPacketCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_pointer(from._internal_pointer());
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CallbackPacketCalculatorOptions::CopyFrom(const CallbackPacketCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.CallbackPacketCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CallbackPacketCalculatorOptions::IsInitialized() const {
  return true;
}

void CallbackPacketCalculatorOptions::InternalSwap(CallbackPacketCalculatorOptions* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &pointer_, lhs_arena,
      &other->pointer_, rhs_arena
  );
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CallbackPacketCalculatorOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_getter, &descriptor_table_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto_once,
      file_level_metadata_mediapipe_2fcalculators_2finternal_2fcallback_5fpacket_5fcalculator_2eproto[0]);
}
#if !defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912)
const int CallbackPacketCalculatorOptions::kExtFieldNumber;
#endif
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::CallbackPacketCalculatorOptions >, 11, false >
  CallbackPacketCalculatorOptions::ext(kExtFieldNumber, ::mediapipe::CallbackPacketCalculatorOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::CallbackPacketCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::CallbackPacketCalculatorOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::CallbackPacketCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>