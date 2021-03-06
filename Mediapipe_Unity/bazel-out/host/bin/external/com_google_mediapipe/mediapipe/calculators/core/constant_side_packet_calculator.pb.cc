// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/core/constant_side_packet_calculator.proto

#include "mediapipe/calculators/core/constant_side_packet_calculator.pb.h"

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
constexpr ConstantSidePacketCalculatorOptions_ConstantSidePacket::ConstantSidePacketCalculatorOptions_ConstantSidePacket(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : _oneof_case_{}{}
struct ConstantSidePacketCalculatorOptions_ConstantSidePacketDefaultTypeInternal {
  constexpr ConstantSidePacketCalculatorOptions_ConstantSidePacketDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConstantSidePacketCalculatorOptions_ConstantSidePacketDefaultTypeInternal() {}
  union {
    ConstantSidePacketCalculatorOptions_ConstantSidePacket _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConstantSidePacketCalculatorOptions_ConstantSidePacketDefaultTypeInternal _ConstantSidePacketCalculatorOptions_ConstantSidePacket_default_instance_;
constexpr ConstantSidePacketCalculatorOptions::ConstantSidePacketCalculatorOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : packet_(){}
struct ConstantSidePacketCalculatorOptionsDefaultTypeInternal {
  constexpr ConstantSidePacketCalculatorOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConstantSidePacketCalculatorOptionsDefaultTypeInternal() {}
  union {
    ConstantSidePacketCalculatorOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConstantSidePacketCalculatorOptionsDefaultTypeInternal _ConstantSidePacketCalculatorOptions_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto = nullptr;

const uint32_t TableStruct_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket, value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ConstantSidePacketCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::ConstantSidePacketCalculatorOptions, packet_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket)},
  { 13, -1, -1, sizeof(::mediapipe::ConstantSidePacketCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_ConstantSidePacketCalculatorOptions_ConstantSidePacket_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_ConstantSidePacketCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n@mediapipe/calculators/core/constant_si"
  "de_packet_calculator.proto\022\tmediapipe\032$m"
  "ediapipe/framework/calculator.proto\0320med"
  "iapipe/framework/formats/classification."
  "proto\"\255\003\n#ConstantSidePacketCalculatorOp"
  "tions\022Q\n\006packet\030\001 \003(\0132A.mediapipe.Consta"
  "ntSidePacketCalculatorOptions.ConstantSi"
  "dePacket\032\323\001\n\022ConstantSidePacket\022\023\n\tint_v"
  "alue\030\001 \001(\005H\000\022\025\n\013float_value\030\002 \001(\002H\000\022\024\n\nb"
  "ool_value\030\003 \001(\010H\000\022\026\n\014string_value\030\004 \001(\tH"
  "\000\022\026\n\014uint64_value\030\005 \001(\004H\000\022B\n\031classificat"
  "ion_list_value\030\006 \001(\0132\035.mediapipe.Classif"
  "icationListH\000B\007\n\005value2]\n\003ext\022\034.mediapip"
  "e.CalculatorOptions\030\205\252\356\212\001 \001(\0132..mediapip"
  "e.ConstantSidePacketCalculatorOptionsB\014\242"
  "\002\tMediaPipe"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_deps[2] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
  &::descriptor_table_mediapipe_2fframework_2fformats_2fclassification_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto = {
  false, false, 611, descriptor_table_protodef_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto, "mediapipe/calculators/core/constant_side_packet_calculator.proto", 
  &descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto, file_level_enum_descriptors_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_getter() {
  return &descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto(&descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto);
namespace mediapipe {

// ===================================================================

class ConstantSidePacketCalculatorOptions_ConstantSidePacket::_Internal {
 public:
  static const ::mediapipe::ClassificationList& classification_list_value(const ConstantSidePacketCalculatorOptions_ConstantSidePacket* msg);
};

const ::mediapipe::ClassificationList&
ConstantSidePacketCalculatorOptions_ConstantSidePacket::_Internal::classification_list_value(const ConstantSidePacketCalculatorOptions_ConstantSidePacket* msg) {
  return *msg->value_.classification_list_value_;
}
void ConstantSidePacketCalculatorOptions_ConstantSidePacket::set_allocated_classification_list_value(::mediapipe::ClassificationList* classification_list_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_value();
  if (classification_list_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(classification_list_value));
    if (message_arena != submessage_arena) {
      classification_list_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, classification_list_value, submessage_arena);
    }
    set_has_classification_list_value();
    value_.classification_list_value_ = classification_list_value;
  }
  // @@protoc_insertion_point(field_set_allocated:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket.classification_list_value)
}
void ConstantSidePacketCalculatorOptions_ConstantSidePacket::clear_classification_list_value() {
  if (_internal_has_classification_list_value()) {
    if (GetArenaForAllocation() == nullptr) {
      delete value_.classification_list_value_;
    }
    clear_has_value();
  }
}
ConstantSidePacketCalculatorOptions_ConstantSidePacket::ConstantSidePacketCalculatorOptions_ConstantSidePacket(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
}
ConstantSidePacketCalculatorOptions_ConstantSidePacket::ConstantSidePacketCalculatorOptions_ConstantSidePacket(const ConstantSidePacketCalculatorOptions_ConstantSidePacket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_value();
  switch (from.value_case()) {
    case kIntValue: {
      _internal_set_int_value(from._internal_int_value());
      break;
    }
    case kFloatValue: {
      _internal_set_float_value(from._internal_float_value());
      break;
    }
    case kBoolValue: {
      _internal_set_bool_value(from._internal_bool_value());
      break;
    }
    case kStringValue: {
      _internal_set_string_value(from._internal_string_value());
      break;
    }
    case kUint64Value: {
      _internal_set_uint64_value(from._internal_uint64_value());
      break;
    }
    case kClassificationListValue: {
      _internal_mutable_classification_list_value()->::mediapipe::ClassificationList::MergeFrom(from._internal_classification_list_value());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
}

inline void ConstantSidePacketCalculatorOptions_ConstantSidePacket::SharedCtor() {
clear_has_value();
}

ConstantSidePacketCalculatorOptions_ConstantSidePacket::~ConstantSidePacketCalculatorOptions_ConstantSidePacket() {
  // @@protoc_insertion_point(destructor:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ConstantSidePacketCalculatorOptions_ConstantSidePacket::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_value()) {
    clear_value();
  }
}

void ConstantSidePacketCalculatorOptions_ConstantSidePacket::ArenaDtor(void* object) {
  ConstantSidePacketCalculatorOptions_ConstantSidePacket* _this = reinterpret_cast< ConstantSidePacketCalculatorOptions_ConstantSidePacket* >(object);
  (void)_this;
}
void ConstantSidePacketCalculatorOptions_ConstantSidePacket::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ConstantSidePacketCalculatorOptions_ConstantSidePacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ConstantSidePacketCalculatorOptions_ConstantSidePacket::clear_value() {
// @@protoc_insertion_point(one_of_clear_start:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  switch (value_case()) {
    case kIntValue: {
      // No need to clear
      break;
    }
    case kFloatValue: {
      // No need to clear
      break;
    }
    case kBoolValue: {
      // No need to clear
      break;
    }
    case kStringValue: {
      value_.string_value_.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
      break;
    }
    case kUint64Value: {
      // No need to clear
      break;
    }
    case kClassificationListValue: {
      if (GetArenaForAllocation() == nullptr) {
        delete value_.classification_list_value_;
      }
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = VALUE_NOT_SET;
}


void ConstantSidePacketCalculatorOptions_ConstantSidePacket::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_value();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConstantSidePacketCalculatorOptions_ConstantSidePacket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 int_value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _internal_set_int_value(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float float_value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _internal_set_float_value(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // bool bool_value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _internal_set_bool_value(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string string_value = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_string_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket.string_value");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 uint64_value = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _internal_set_uint64_value(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .mediapipe.ClassificationList classification_list_value = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_classification_list_value(), ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ConstantSidePacketCalculatorOptions_ConstantSidePacket::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (value_case()) {
    case kIntValue: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_int_value(), target);
      break;
    }
    case kFloatValue: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_float_value(), target);
      break;
    }
    case kBoolValue: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_bool_value(), target);
      break;
    }
    case kStringValue: {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
        this->_internal_string_value().data(), static_cast<int>(this->_internal_string_value().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
        "mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket.string_value");
      target = stream->WriteStringMaybeAliased(
          4, this->_internal_string_value(), target);
      break;
    }
    case kUint64Value: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(5, this->_internal_uint64_value(), target);
      break;
    }
    case kClassificationListValue: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          6, _Internal::classification_list_value(this), target, stream);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  return target;
}

size_t ConstantSidePacketCalculatorOptions_ConstantSidePacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (value_case()) {
    // int32 int_value = 1;
    case kIntValue: {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_int_value());
      break;
    }
    // float float_value = 2;
    case kFloatValue: {
      total_size += 1 + 4;
      break;
    }
    // bool bool_value = 3;
    case kBoolValue: {
      total_size += 1 + 1;
      break;
    }
    // string string_value = 4;
    case kStringValue: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_string_value());
      break;
    }
    // uint64 uint64_value = 5;
    case kUint64Value: {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_uint64_value());
      break;
    }
    // .mediapipe.ClassificationList classification_list_value = 6;
    case kClassificationListValue: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *value_.classification_list_value_);
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ConstantSidePacketCalculatorOptions_ConstantSidePacket::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ConstantSidePacketCalculatorOptions_ConstantSidePacket::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ConstantSidePacketCalculatorOptions_ConstantSidePacket::GetClassData() const { return &_class_data_; }

void ConstantSidePacketCalculatorOptions_ConstantSidePacket::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ConstantSidePacketCalculatorOptions_ConstantSidePacket *>(to)->MergeFrom(
      static_cast<const ConstantSidePacketCalculatorOptions_ConstantSidePacket &>(from));
}


void ConstantSidePacketCalculatorOptions_ConstantSidePacket::MergeFrom(const ConstantSidePacketCalculatorOptions_ConstantSidePacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.value_case()) {
    case kIntValue: {
      _internal_set_int_value(from._internal_int_value());
      break;
    }
    case kFloatValue: {
      _internal_set_float_value(from._internal_float_value());
      break;
    }
    case kBoolValue: {
      _internal_set_bool_value(from._internal_bool_value());
      break;
    }
    case kStringValue: {
      _internal_set_string_value(from._internal_string_value());
      break;
    }
    case kUint64Value: {
      _internal_set_uint64_value(from._internal_uint64_value());
      break;
    }
    case kClassificationListValue: {
      _internal_mutable_classification_list_value()->::mediapipe::ClassificationList::MergeFrom(from._internal_classification_list_value());
      break;
    }
    case VALUE_NOT_SET: {
      break;
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ConstantSidePacketCalculatorOptions_ConstantSidePacket::CopyFrom(const ConstantSidePacketCalculatorOptions_ConstantSidePacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConstantSidePacketCalculatorOptions_ConstantSidePacket::IsInitialized() const {
  return true;
}

void ConstantSidePacketCalculatorOptions_ConstantSidePacket::InternalSwap(ConstantSidePacketCalculatorOptions_ConstantSidePacket* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(value_, other->value_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata ConstantSidePacketCalculatorOptions_ConstantSidePacket::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_getter, &descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_once,
      file_level_metadata_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto[0]);
}

// ===================================================================

class ConstantSidePacketCalculatorOptions::_Internal {
 public:
};

ConstantSidePacketCalculatorOptions::ConstantSidePacketCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  packet_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.ConstantSidePacketCalculatorOptions)
}
ConstantSidePacketCalculatorOptions::ConstantSidePacketCalculatorOptions(const ConstantSidePacketCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      packet_(from.packet_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.ConstantSidePacketCalculatorOptions)
}

inline void ConstantSidePacketCalculatorOptions::SharedCtor() {
}

ConstantSidePacketCalculatorOptions::~ConstantSidePacketCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.ConstantSidePacketCalculatorOptions)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ConstantSidePacketCalculatorOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ConstantSidePacketCalculatorOptions::ArenaDtor(void* object) {
  ConstantSidePacketCalculatorOptions* _this = reinterpret_cast< ConstantSidePacketCalculatorOptions* >(object);
  (void)_this;
}
void ConstantSidePacketCalculatorOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ConstantSidePacketCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ConstantSidePacketCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.ConstantSidePacketCalculatorOptions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  packet_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConstantSidePacketCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket packet = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_packet(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ConstantSidePacketCalculatorOptions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.ConstantSidePacketCalculatorOptions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket packet = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_packet_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_packet(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.ConstantSidePacketCalculatorOptions)
  return target;
}

size_t ConstantSidePacketCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.ConstantSidePacketCalculatorOptions)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .mediapipe.ConstantSidePacketCalculatorOptions.ConstantSidePacket packet = 1;
  total_size += 1UL * this->_internal_packet_size();
  for (const auto& msg : this->packet_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ConstantSidePacketCalculatorOptions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ConstantSidePacketCalculatorOptions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ConstantSidePacketCalculatorOptions::GetClassData() const { return &_class_data_; }

void ConstantSidePacketCalculatorOptions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ConstantSidePacketCalculatorOptions *>(to)->MergeFrom(
      static_cast<const ConstantSidePacketCalculatorOptions &>(from));
}


void ConstantSidePacketCalculatorOptions::MergeFrom(const ConstantSidePacketCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.ConstantSidePacketCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  packet_.MergeFrom(from.packet_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ConstantSidePacketCalculatorOptions::CopyFrom(const ConstantSidePacketCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.ConstantSidePacketCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConstantSidePacketCalculatorOptions::IsInitialized() const {
  return true;
}

void ConstantSidePacketCalculatorOptions::InternalSwap(ConstantSidePacketCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  packet_.InternalSwap(&other->packet_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ConstantSidePacketCalculatorOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_getter, &descriptor_table_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto_once,
      file_level_metadata_mediapipe_2fcalculators_2fcore_2fconstant_5fside_5fpacket_5fcalculator_2eproto[1]);
}
#if !defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912)
const int ConstantSidePacketCalculatorOptions::kExtFieldNumber;
#endif
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::ConstantSidePacketCalculatorOptions >, 11, false >
  ConstantSidePacketCalculatorOptions::ext(kExtFieldNumber, ::mediapipe::ConstantSidePacketCalculatorOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket* Arena::CreateMaybeMessage< ::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::ConstantSidePacketCalculatorOptions_ConstantSidePacket >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::ConstantSidePacketCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::ConstantSidePacketCalculatorOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::ConstantSidePacketCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
