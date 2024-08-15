// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_occupant.proto
#pragma warning (disable : 4125)

#include "osi_occupant.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_osi_5fcommon_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ExternalReference_osi_5fcommon_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_osi_5fcommon_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Identifier_osi_5fcommon_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_osi_5foccupant_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Occupant_Classification_osi_5foccupant_2eproto;
namespace osi3 {
class Occupant_ClassificationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Occupant_Classification> _instance;
} _Occupant_Classification_default_instance_;
class OccupantDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Occupant> _instance;
} _Occupant_default_instance_;
}  // namespace osi3
static void InitDefaultsscc_info_Occupant_osi_5foccupant_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::osi3::_Occupant_default_instance_;
    new (ptr) ::osi3::Occupant();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::osi3::Occupant::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Occupant_osi_5foccupant_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsscc_info_Occupant_osi_5foccupant_2eproto}, {
      &scc_info_Identifier_osi_5fcommon_2eproto.base,
      &scc_info_Occupant_Classification_osi_5foccupant_2eproto.base,
      &scc_info_ExternalReference_osi_5fcommon_2eproto.base,}};

static void InitDefaultsscc_info_Occupant_Classification_osi_5foccupant_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::osi3::_Occupant_Classification_default_instance_;
    new (ptr) ::osi3::Occupant_Classification();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::osi3::Occupant_Classification::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Occupant_Classification_osi_5foccupant_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Occupant_Classification_osi_5foccupant_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_osi_5foccupant_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_osi_5foccupant_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_osi_5foccupant_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_osi_5foccupant_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, is_driver_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, seat_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant_Classification, steering_control_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, id_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, classification_),
  PROTOBUF_FIELD_OFFSET(::osi3::Occupant, source_reference_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::osi3::Occupant_Classification)},
  { 8, -1, sizeof(::osi3::Occupant)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_Occupant_Classification_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_Occupant_default_instance_),
};

const char descriptor_table_protodef_osi_5foccupant_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022osi_occupant.proto\022\004osi3\032\020osi_common.p"
  "roto\"\232\006\n\010Occupant\022\034\n\002id\030\001 \001(\0132\020.osi3.Ide"
  "ntifier\0225\n\016classification\030\002 \001(\0132\035.osi3.O"
  "ccupant.Classification\0221\n\020source_referen"
  "ce\030\003 \003(\0132\027.osi3.ExternalReference\032\205\005\n\016Cl"
  "assification\022\021\n\tis_driver\030\002 \001(\010\0220\n\004seat\030"
  "\003 \001(\0162\".osi3.Occupant.Classification.Sea"
  "t\022G\n\020steering_control\030\004 \001(\0162-.osi3.Occup"
  "ant.Classification.SteeringControl\"\367\001\n\004S"
  "eat\022\020\n\014SEAT_UNKNOWN\020\000\022\016\n\nSEAT_OTHER\020\001\022\023\n"
  "\017SEAT_FRONT_LEFT\020\002\022\024\n\020SEAT_FRONT_RIGHT\020\003"
  "\022\025\n\021SEAT_FRONT_MIDDLE\020\004\022\022\n\016SEAT_BACK_LEF"
  "T\020\005\022\023\n\017SEAT_BACK_RIGHT\020\006\022\024\n\020SEAT_BACK_MI"
  "DDLE\020\007\022\027\n\023SEAT_THIRD_ROW_LEFT\020\010\022\030\n\024SEAT_"
  "THIRD_ROW_RIGHT\020\t\022\031\n\025SEAT_THIRD_ROW_MIDD"
  "LE\020\n\"\352\001\n\017SteeringControl\022\034\n\030STEERING_CON"
  "TROL_UNKNOWN\020\000\022\032\n\026STEERING_CONTROL_OTHER"
  "\020\001\022\034\n\030STEERING_CONTROL_NO_HAND\020\002\022\035\n\031STEE"
  "RING_CONTROL_ONE_HAND\020\003\022\037\n\033STEERING_CONT"
  "ROL_BOTH_HANDS\020\004\022\036\n\032STEERING_CONTROL_LEF"
  "T_HAND\020\005\022\037\n\033STEERING_CONTROL_RIGHT_HAND\020"
  "\006B\002H\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_osi_5foccupant_2eproto_deps[1] = {
  &::descriptor_table_osi_5fcommon_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_osi_5foccupant_2eproto_sccs[2] = {
  &scc_info_Occupant_osi_5foccupant_2eproto.base,
  &scc_info_Occupant_Classification_osi_5foccupant_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_osi_5foccupant_2eproto_once;
static bool descriptor_table_osi_5foccupant_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_osi_5foccupant_2eproto = {
  &descriptor_table_osi_5foccupant_2eproto_initialized, descriptor_table_protodef_osi_5foccupant_2eproto, "osi_occupant.proto", 853,
  &descriptor_table_osi_5foccupant_2eproto_once, descriptor_table_osi_5foccupant_2eproto_sccs, descriptor_table_osi_5foccupant_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_osi_5foccupant_2eproto::offsets,
  file_level_metadata_osi_5foccupant_2eproto, 2, file_level_enum_descriptors_osi_5foccupant_2eproto, file_level_service_descriptors_osi_5foccupant_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_osi_5foccupant_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_osi_5foccupant_2eproto), true);
namespace osi3 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Occupant_Classification_Seat_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_osi_5foccupant_2eproto);
  return file_level_enum_descriptors_osi_5foccupant_2eproto[0];
}
bool Occupant_Classification_Seat_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_UNKNOWN;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_OTHER;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_FRONT_LEFT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_FRONT_RIGHT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_FRONT_MIDDLE;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_BACK_LEFT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_BACK_RIGHT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_BACK_MIDDLE;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_THIRD_ROW_LEFT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_THIRD_ROW_RIGHT;
constexpr Occupant_Classification_Seat Occupant_Classification::SEAT_THIRD_ROW_MIDDLE;
constexpr Occupant_Classification_Seat Occupant_Classification::Seat_MIN;
constexpr Occupant_Classification_Seat Occupant_Classification::Seat_MAX;
constexpr int Occupant_Classification::Seat_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Occupant_Classification_SteeringControl_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_osi_5foccupant_2eproto);
  return file_level_enum_descriptors_osi_5foccupant_2eproto[1];
}
bool Occupant_Classification_SteeringControl_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_UNKNOWN;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_OTHER;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_NO_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_ONE_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_BOTH_HANDS;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_LEFT_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::STEERING_CONTROL_RIGHT_HAND;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::SteeringControl_MIN;
constexpr Occupant_Classification_SteeringControl Occupant_Classification::SteeringControl_MAX;
constexpr int Occupant_Classification::SteeringControl_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Occupant_Classification::InitAsDefaultInstance() {
}
class Occupant_Classification::_Internal {
 public:
};

Occupant_Classification::Occupant_Classification()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:osi3.Occupant.Classification)
}
Occupant_Classification::Occupant_Classification(const Occupant_Classification& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&is_driver_, &from.is_driver_,
    static_cast<size_t>(reinterpret_cast<char*>(&steering_control_) -
    reinterpret_cast<char*>(&is_driver_)) + sizeof(steering_control_));
  // @@protoc_insertion_point(copy_constructor:osi3.Occupant.Classification)
}

void Occupant_Classification::SharedCtor() {
  ::memset(&is_driver_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&steering_control_) -
      reinterpret_cast<char*>(&is_driver_)) + sizeof(steering_control_));
}

Occupant_Classification::~Occupant_Classification() {
  // @@protoc_insertion_point(destructor:osi3.Occupant.Classification)
  SharedDtor();
}

void Occupant_Classification::SharedDtor() {
}

void Occupant_Classification::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Occupant_Classification& Occupant_Classification::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Occupant_Classification_osi_5foccupant_2eproto.base);
  return *internal_default_instance();
}


void Occupant_Classification::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.Occupant.Classification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&is_driver_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&steering_control_) -
      reinterpret_cast<char*>(&is_driver_)) + sizeof(steering_control_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Occupant_Classification::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool is_driver = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          is_driver_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .osi3.Occupant.Classification.Seat seat = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_seat(static_cast<::osi3::Occupant_Classification_Seat>(val));
        } else goto handle_unusual;
        continue;
      // .osi3.Occupant.Classification.SteeringControl steering_control = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_steering_control(static_cast<::osi3::Occupant_Classification_SteeringControl>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Occupant_Classification::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:osi3.Occupant.Classification)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_driver = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_driver_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .osi3.Occupant.Classification.Seat seat = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_seat(static_cast< ::osi3::Occupant_Classification_Seat >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .osi3.Occupant.Classification.SteeringControl steering_control = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_steering_control(static_cast< ::osi3::Occupant_Classification_SteeringControl >(value));
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:osi3.Occupant.Classification)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:osi3.Occupant.Classification)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Occupant_Classification::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:osi3.Occupant.Classification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_driver = 2;
  if (this->is_driver() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(2, this->is_driver(), output);
  }

  // .osi3.Occupant.Classification.Seat seat = 3;
  if (this->seat() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      3, this->seat(), output);
  }

  // .osi3.Occupant.Classification.SteeringControl steering_control = 4;
  if (this->steering_control() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      4, this->steering_control(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:osi3.Occupant.Classification)
}

::PROTOBUF_NAMESPACE_ID::uint8* Occupant_Classification::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.Occupant.Classification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_driver = 2;
  if (this->is_driver() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->is_driver(), target);
  }

  // .osi3.Occupant.Classification.Seat seat = 3;
  if (this->seat() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->seat(), target);
  }

  // .osi3.Occupant.Classification.SteeringControl steering_control = 4;
  if (this->steering_control() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->steering_control(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.Occupant.Classification)
  return target;
}

size_t Occupant_Classification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.Occupant.Classification)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool is_driver = 2;
  if (this->is_driver() != 0) {
    total_size += 1 + 1;
  }

  // .osi3.Occupant.Classification.Seat seat = 3;
  if (this->seat() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->seat());
  }

  // .osi3.Occupant.Classification.SteeringControl steering_control = 4;
  if (this->steering_control() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->steering_control());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Occupant_Classification::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:osi3.Occupant.Classification)
  GOOGLE_DCHECK_NE(&from, this);
  const Occupant_Classification* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Occupant_Classification>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:osi3.Occupant.Classification)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:osi3.Occupant.Classification)
    MergeFrom(*source);
  }
}

void Occupant_Classification::MergeFrom(const Occupant_Classification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.Occupant.Classification)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.is_driver() != 0) {
    set_is_driver(from.is_driver());
  }
  if (from.seat() != 0) {
    set_seat(from.seat());
  }
  if (from.steering_control() != 0) {
    set_steering_control(from.steering_control());
  }
}

void Occupant_Classification::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:osi3.Occupant.Classification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Occupant_Classification::CopyFrom(const Occupant_Classification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.Occupant.Classification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Occupant_Classification::IsInitialized() const {
  return true;
}

void Occupant_Classification::InternalSwap(Occupant_Classification* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(is_driver_, other->is_driver_);
  swap(seat_, other->seat_);
  swap(steering_control_, other->steering_control_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Occupant_Classification::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Occupant::InitAsDefaultInstance() {
  ::osi3::_Occupant_default_instance_._instance.get_mutable()->id_ = const_cast< ::osi3::Identifier*>(
      ::osi3::Identifier::internal_default_instance());
  ::osi3::_Occupant_default_instance_._instance.get_mutable()->classification_ = const_cast< ::osi3::Occupant_Classification*>(
      ::osi3::Occupant_Classification::internal_default_instance());
}
class Occupant::_Internal {
 public:
  static const ::osi3::Identifier& id(const Occupant* msg);
  static const ::osi3::Occupant_Classification& classification(const Occupant* msg);
};

const ::osi3::Identifier&
Occupant::_Internal::id(const Occupant* msg) {
  return *msg->id_;
}
const ::osi3::Occupant_Classification&
Occupant::_Internal::classification(const Occupant* msg) {
  return *msg->classification_;
}
void Occupant::clear_id() {
  if (GetArenaNoVirtual() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
}
void Occupant::clear_source_reference() {
  source_reference_.Clear();
}
Occupant::Occupant()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:osi3.Occupant)
}
Occupant::Occupant(const Occupant& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      source_reference_(from.source_reference_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_id()) {
    id_ = new ::osi3::Identifier(*from.id_);
  } else {
    id_ = nullptr;
  }
  if (from.has_classification()) {
    classification_ = new ::osi3::Occupant_Classification(*from.classification_);
  } else {
    classification_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:osi3.Occupant)
}

void Occupant::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Occupant_osi_5foccupant_2eproto.base);
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&classification_) -
      reinterpret_cast<char*>(&id_)) + sizeof(classification_));
}

Occupant::~Occupant() {
  // @@protoc_insertion_point(destructor:osi3.Occupant)
  SharedDtor();
}

void Occupant::SharedDtor() {
  if (this != internal_default_instance()) delete id_;
  if (this != internal_default_instance()) delete classification_;
}

void Occupant::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Occupant& Occupant::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Occupant_osi_5foccupant_2eproto.base);
  return *internal_default_instance();
}


void Occupant::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.Occupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  source_reference_.Clear();
  if (GetArenaNoVirtual() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && classification_ != nullptr) {
    delete classification_;
  }
  classification_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Occupant::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .osi3.Identifier id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .osi3.Occupant.Classification classification = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_classification(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .osi3.ExternalReference source_reference = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_source_reference(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 26);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Occupant::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:osi3.Occupant)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .osi3.Identifier id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .osi3.Occupant.Classification classification = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_classification()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .osi3.ExternalReference source_reference = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_source_reference()));
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:osi3.Occupant)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:osi3.Occupant)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Occupant::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:osi3.Occupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .osi3.Identifier id = 1;
  if (this->has_id()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::id(this), output);
  }

  // .osi3.Occupant.Classification classification = 2;
  if (this->has_classification()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, _Internal::classification(this), output);
  }

  // repeated .osi3.ExternalReference source_reference = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->source_reference_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->source_reference(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:osi3.Occupant)
}

::PROTOBUF_NAMESPACE_ID::uint8* Occupant::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.Occupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .osi3.Identifier id = 1;
  if (this->has_id()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::id(this), target);
  }

  // .osi3.Occupant.Classification classification = 2;
  if (this->has_classification()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::classification(this), target);
  }

  // repeated .osi3.ExternalReference source_reference = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->source_reference_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->source_reference(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.Occupant)
  return target;
}

size_t Occupant::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.Occupant)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .osi3.ExternalReference source_reference = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->source_reference_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->source_reference(static_cast<int>(i)));
    }
  }

  // .osi3.Identifier id = 1;
  if (this->has_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *id_);
  }

  // .osi3.Occupant.Classification classification = 2;
  if (this->has_classification()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *classification_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Occupant::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:osi3.Occupant)
  GOOGLE_DCHECK_NE(&from, this);
  const Occupant* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Occupant>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:osi3.Occupant)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:osi3.Occupant)
    MergeFrom(*source);
  }
}

void Occupant::MergeFrom(const Occupant& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.Occupant)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  source_reference_.MergeFrom(from.source_reference_);
  if (from.has_id()) {
    mutable_id()->::osi3::Identifier::MergeFrom(from.id());
  }
  if (from.has_classification()) {
    mutable_classification()->::osi3::Occupant_Classification::MergeFrom(from.classification());
  }
}

void Occupant::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:osi3.Occupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Occupant::CopyFrom(const Occupant& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.Occupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Occupant::IsInitialized() const {
  return true;
}

void Occupant::InternalSwap(Occupant* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&source_reference_)->InternalSwap(CastToBase(&other->source_reference_));
  swap(id_, other->id_);
  swap(classification_, other->classification_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Occupant::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::Occupant_Classification* Arena::CreateMaybeMessage< ::osi3::Occupant_Classification >(Arena* arena) {
  return Arena::CreateInternal< ::osi3::Occupant_Classification >(arena);
}
template<> PROTOBUF_NOINLINE ::osi3::Occupant* Arena::CreateMaybeMessage< ::osi3::Occupant >(Arena* arena) {
  return Arena::CreateInternal< ::osi3::Occupant >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
