// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: osi_detectedoccupant.proto
#pragma warning (disable : 4125)

#include "osi_detectedoccupant.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_osi_5fdetectedobject_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DetectedItemHeader_osi_5fdetectedobject_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_osi_5fdetectedoccupant_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_osi_5foccupant_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Occupant_Classification_osi_5foccupant_2eproto;
namespace osi3 {
class DetectedOccupant_CandidateOccupantDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DetectedOccupant_CandidateOccupant> _instance;
} _DetectedOccupant_CandidateOccupant_default_instance_;
class DetectedOccupantDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DetectedOccupant> _instance;
} _DetectedOccupant_default_instance_;
}  // namespace osi3
static void InitDefaultsscc_info_DetectedOccupant_osi_5fdetectedoccupant_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::osi3::_DetectedOccupant_default_instance_;
    new (ptr) ::osi3::DetectedOccupant();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::osi3::DetectedOccupant::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_DetectedOccupant_osi_5fdetectedoccupant_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_DetectedOccupant_osi_5fdetectedoccupant_2eproto}, {
      &scc_info_DetectedItemHeader_osi_5fdetectedobject_2eproto.base,
      &scc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto.base,}};

static void InitDefaultsscc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::osi3::_DetectedOccupant_CandidateOccupant_default_instance_;
    new (ptr) ::osi3::DetectedOccupant_CandidateOccupant();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::osi3::DetectedOccupant_CandidateOccupant::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto}, {
      &scc_info_Occupant_Classification_osi_5foccupant_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_osi_5fdetectedoccupant_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_osi_5fdetectedoccupant_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_osi_5fdetectedoccupant_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_osi_5fdetectedoccupant_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedOccupant_CandidateOccupant, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedOccupant_CandidateOccupant, probability_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedOccupant_CandidateOccupant, classification_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedOccupant, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedOccupant, header_),
  PROTOBUF_FIELD_OFFSET(::osi3::DetectedOccupant, candidate_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::osi3::DetectedOccupant_CandidateOccupant)},
  { 7, -1, sizeof(::osi3::DetectedOccupant)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_DetectedOccupant_CandidateOccupant_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::osi3::_DetectedOccupant_default_instance_),
};

const char descriptor_table_protodef_osi_5fdetectedoccupant_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032osi_detectedoccupant.proto\022\004osi3\032\022osi_"
  "occupant.proto\032\030osi_detectedobject.proto"
  "\"\332\001\n\020DetectedOccupant\022(\n\006header\030\001 \001(\0132\030."
  "osi3.DetectedItemHeader\022;\n\tcandidate\030\002 \003"
  "(\0132(.osi3.DetectedOccupant.CandidateOccu"
  "pant\032_\n\021CandidateOccupant\022\023\n\013probability"
  "\030\001 \001(\001\0225\n\016classification\030\002 \001(\0132\035.osi3.Oc"
  "cupant.ClassificationB\002H\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_osi_5fdetectedoccupant_2eproto_deps[2] = {
  &::descriptor_table_osi_5fdetectedobject_2eproto,
  &::descriptor_table_osi_5foccupant_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_osi_5fdetectedoccupant_2eproto_sccs[2] = {
  &scc_info_DetectedOccupant_osi_5fdetectedoccupant_2eproto.base,
  &scc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_osi_5fdetectedoccupant_2eproto_once;
static bool descriptor_table_osi_5fdetectedoccupant_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_osi_5fdetectedoccupant_2eproto = {
  &descriptor_table_osi_5fdetectedoccupant_2eproto_initialized, descriptor_table_protodef_osi_5fdetectedoccupant_2eproto, "osi_detectedoccupant.proto", 313,
  &descriptor_table_osi_5fdetectedoccupant_2eproto_once, descriptor_table_osi_5fdetectedoccupant_2eproto_sccs, descriptor_table_osi_5fdetectedoccupant_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_osi_5fdetectedoccupant_2eproto::offsets,
  file_level_metadata_osi_5fdetectedoccupant_2eproto, 2, file_level_enum_descriptors_osi_5fdetectedoccupant_2eproto, file_level_service_descriptors_osi_5fdetectedoccupant_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_osi_5fdetectedoccupant_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_osi_5fdetectedoccupant_2eproto), true);
namespace osi3 {

// ===================================================================

void DetectedOccupant_CandidateOccupant::InitAsDefaultInstance() {
  ::osi3::_DetectedOccupant_CandidateOccupant_default_instance_._instance.get_mutable()->classification_ = const_cast< ::osi3::Occupant_Classification*>(
      ::osi3::Occupant_Classification::internal_default_instance());
}
class DetectedOccupant_CandidateOccupant::_Internal {
 public:
  static const ::osi3::Occupant_Classification& classification(const DetectedOccupant_CandidateOccupant* msg);
};

const ::osi3::Occupant_Classification&
DetectedOccupant_CandidateOccupant::_Internal::classification(const DetectedOccupant_CandidateOccupant* msg) {
  return *msg->classification_;
}
void DetectedOccupant_CandidateOccupant::clear_classification() {
  if (GetArenaNoVirtual() == nullptr && classification_ != nullptr) {
    delete classification_;
  }
  classification_ = nullptr;
}
DetectedOccupant_CandidateOccupant::DetectedOccupant_CandidateOccupant()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:osi3.DetectedOccupant.CandidateOccupant)
}
DetectedOccupant_CandidateOccupant::DetectedOccupant_CandidateOccupant(const DetectedOccupant_CandidateOccupant& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_classification()) {
    classification_ = new ::osi3::Occupant_Classification(*from.classification_);
  } else {
    classification_ = nullptr;
  }
  probability_ = from.probability_;
  // @@protoc_insertion_point(copy_constructor:osi3.DetectedOccupant.CandidateOccupant)
}

void DetectedOccupant_CandidateOccupant::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto.base);
  ::memset(&classification_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&probability_) -
      reinterpret_cast<char*>(&classification_)) + sizeof(probability_));
}

DetectedOccupant_CandidateOccupant::~DetectedOccupant_CandidateOccupant() {
  // @@protoc_insertion_point(destructor:osi3.DetectedOccupant.CandidateOccupant)
  SharedDtor();
}

void DetectedOccupant_CandidateOccupant::SharedDtor() {
  if (this != internal_default_instance()) delete classification_;
}

void DetectedOccupant_CandidateOccupant::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DetectedOccupant_CandidateOccupant& DetectedOccupant_CandidateOccupant::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DetectedOccupant_CandidateOccupant_osi_5fdetectedoccupant_2eproto.base);
  return *internal_default_instance();
}


void DetectedOccupant_CandidateOccupant::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.DetectedOccupant.CandidateOccupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && classification_ != nullptr) {
    delete classification_;
  }
  classification_ = nullptr;
  probability_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DetectedOccupant_CandidateOccupant::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // double probability = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          probability_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // .osi3.Occupant.Classification classification = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(mutable_classification(), ptr);
          CHK_(ptr);
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
bool DetectedOccupant_CandidateOccupant::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:osi3.DetectedOccupant.CandidateOccupant)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double probability = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (9 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &probability_)));
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
  // @@protoc_insertion_point(parse_success:osi3.DetectedOccupant.CandidateOccupant)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:osi3.DetectedOccupant.CandidateOccupant)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DetectedOccupant_CandidateOccupant::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:osi3.DetectedOccupant.CandidateOccupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double probability = 1;
  if (!(this->probability() <= 0 && this->probability() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(1, this->probability(), output);
  }

  // .osi3.Occupant.Classification classification = 2;
  if (this->has_classification()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, _Internal::classification(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:osi3.DetectedOccupant.CandidateOccupant)
}

::PROTOBUF_NAMESPACE_ID::uint8* DetectedOccupant_CandidateOccupant::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.DetectedOccupant.CandidateOccupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double probability = 1;
  if (!(this->probability() <= 0 && this->probability() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->probability(), target);
  }

  // .osi3.Occupant.Classification classification = 2;
  if (this->has_classification()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::classification(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.DetectedOccupant.CandidateOccupant)
  return target;
}

size_t DetectedOccupant_CandidateOccupant::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.DetectedOccupant.CandidateOccupant)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .osi3.Occupant.Classification classification = 2;
  if (this->has_classification()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *classification_);
  }

  // double probability = 1;
  if (!(this->probability() <= 0 && this->probability() >= 0)) {
    total_size += 1 + 8;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DetectedOccupant_CandidateOccupant::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:osi3.DetectedOccupant.CandidateOccupant)
  GOOGLE_DCHECK_NE(&from, this);
  const DetectedOccupant_CandidateOccupant* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DetectedOccupant_CandidateOccupant>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:osi3.DetectedOccupant.CandidateOccupant)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:osi3.DetectedOccupant.CandidateOccupant)
    MergeFrom(*source);
  }
}

void DetectedOccupant_CandidateOccupant::MergeFrom(const DetectedOccupant_CandidateOccupant& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.DetectedOccupant.CandidateOccupant)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_classification()) {
    mutable_classification()->::osi3::Occupant_Classification::MergeFrom(from.classification());
  }
  if (!(from.probability() <= 0 && from.probability() >= 0)) {
    set_probability(from.probability());
  }
}

void DetectedOccupant_CandidateOccupant::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:osi3.DetectedOccupant.CandidateOccupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DetectedOccupant_CandidateOccupant::CopyFrom(const DetectedOccupant_CandidateOccupant& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.DetectedOccupant.CandidateOccupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectedOccupant_CandidateOccupant::IsInitialized() const {
  return true;
}

void DetectedOccupant_CandidateOccupant::InternalSwap(DetectedOccupant_CandidateOccupant* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(classification_, other->classification_);
  swap(probability_, other->probability_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectedOccupant_CandidateOccupant::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void DetectedOccupant::InitAsDefaultInstance() {
  ::osi3::_DetectedOccupant_default_instance_._instance.get_mutable()->header_ = const_cast< ::osi3::DetectedItemHeader*>(
      ::osi3::DetectedItemHeader::internal_default_instance());
}
class DetectedOccupant::_Internal {
 public:
  static const ::osi3::DetectedItemHeader& header(const DetectedOccupant* msg);
};

const ::osi3::DetectedItemHeader&
DetectedOccupant::_Internal::header(const DetectedOccupant* msg) {
  return *msg->header_;
}
void DetectedOccupant::clear_header() {
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
DetectedOccupant::DetectedOccupant()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:osi3.DetectedOccupant)
}
DetectedOccupant::DetectedOccupant(const DetectedOccupant& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      candidate_(from.candidate_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::osi3::DetectedItemHeader(*from.header_);
  } else {
    header_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:osi3.DetectedOccupant)
}

void DetectedOccupant::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DetectedOccupant_osi_5fdetectedoccupant_2eproto.base);
  header_ = nullptr;
}

DetectedOccupant::~DetectedOccupant() {
  // @@protoc_insertion_point(destructor:osi3.DetectedOccupant)
  SharedDtor();
}

void DetectedOccupant::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void DetectedOccupant::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DetectedOccupant& DetectedOccupant::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DetectedOccupant_osi_5fdetectedoccupant_2eproto.base);
  return *internal_default_instance();
}


void DetectedOccupant::Clear() {
// @@protoc_insertion_point(message_clear_start:osi3.DetectedOccupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  candidate_.Clear();
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DetectedOccupant::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .osi3.DetectedItemHeader header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .osi3.DetectedOccupant.CandidateOccupant candidate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_candidate(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 18);
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
bool DetectedOccupant::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:osi3.DetectedOccupant)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .osi3.DetectedItemHeader header = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .osi3.DetectedOccupant.CandidateOccupant candidate = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_candidate()));
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
  // @@protoc_insertion_point(parse_success:osi3.DetectedOccupant)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:osi3.DetectedOccupant)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DetectedOccupant::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:osi3.DetectedOccupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .osi3.DetectedItemHeader header = 1;
  if (this->has_header()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::header(this), output);
  }

  // repeated .osi3.DetectedOccupant.CandidateOccupant candidate = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->candidate_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->candidate(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:osi3.DetectedOccupant)
}

::PROTOBUF_NAMESPACE_ID::uint8* DetectedOccupant::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:osi3.DetectedOccupant)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .osi3.DetectedItemHeader header = 1;
  if (this->has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::header(this), target);
  }

  // repeated .osi3.DetectedOccupant.CandidateOccupant candidate = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->candidate_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->candidate(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:osi3.DetectedOccupant)
  return target;
}

size_t DetectedOccupant::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:osi3.DetectedOccupant)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .osi3.DetectedOccupant.CandidateOccupant candidate = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->candidate_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->candidate(static_cast<int>(i)));
    }
  }

  // .osi3.DetectedItemHeader header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DetectedOccupant::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:osi3.DetectedOccupant)
  GOOGLE_DCHECK_NE(&from, this);
  const DetectedOccupant* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DetectedOccupant>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:osi3.DetectedOccupant)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:osi3.DetectedOccupant)
    MergeFrom(*source);
  }
}

void DetectedOccupant::MergeFrom(const DetectedOccupant& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:osi3.DetectedOccupant)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  candidate_.MergeFrom(from.candidate_);
  if (from.has_header()) {
    mutable_header()->::osi3::DetectedItemHeader::MergeFrom(from.header());
  }
}

void DetectedOccupant::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:osi3.DetectedOccupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DetectedOccupant::CopyFrom(const DetectedOccupant& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:osi3.DetectedOccupant)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectedOccupant::IsInitialized() const {
  return true;
}

void DetectedOccupant::InternalSwap(DetectedOccupant* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&candidate_)->InternalSwap(CastToBase(&other->candidate_));
  swap(header_, other->header_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectedOccupant::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace osi3
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::osi3::DetectedOccupant_CandidateOccupant* Arena::CreateMaybeMessage< ::osi3::DetectedOccupant_CandidateOccupant >(Arena* arena) {
  return Arena::CreateInternal< ::osi3::DetectedOccupant_CandidateOccupant >(arena);
}
template<> PROTOBUF_NOINLINE ::osi3::DetectedOccupant* Arena::CreateMaybeMessage< ::osi3::DetectedOccupant >(Arena* arena) {
  return Arena::CreateInternal< ::osi3::DetectedOccupant >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
