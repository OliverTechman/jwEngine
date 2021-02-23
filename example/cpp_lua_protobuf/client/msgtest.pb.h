// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgtest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_msgtest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_msgtest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015001 < PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_msgtest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_msgtest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_msgtest_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_msgtest_2eproto_metadata_getter(int index);
class Family;
struct FamilyDefaultTypeInternal;
extern FamilyDefaultTypeInternal _Family_default_instance_;
class Role;
struct RoleDefaultTypeInternal;
extern RoleDefaultTypeInternal _Role_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Family* Arena::CreateMaybeMessage<::Family>(Arena*);
template<> ::Role* Arena::CreateMaybeMessage<::Role>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Role PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Role) */ {
 public:
  inline Role() : Role(nullptr) {}
  virtual ~Role();
  explicit constexpr Role(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Role(const Role& from);
  Role(Role&& from) noexcept
    : Role() {
    *this = ::std::move(from);
  }

  inline Role& operator=(const Role& from) {
    CopyFrom(from);
    return *this;
  }
  inline Role& operator=(Role&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Role& default_instance() {
    return *internal_default_instance();
  }
  static inline const Role* internal_default_instance() {
    return reinterpret_cast<const Role*>(
               &_Role_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Role& a, Role& b) {
    a.Swap(&b);
  }
  inline void Swap(Role* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Role* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Role* New() const final {
    return CreateMaybeMessage<Role>(nullptr);
  }

  Role* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Role>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Role& from);
  void MergeFrom(const Role& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Role* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Role";
  }
  protected:
  explicit Role(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_msgtest_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTasksFieldNumber = 4,
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
    kMoneyFieldNumber = 3,
  };
  // repeated int32 tasks = 4;
  int tasks_size() const;
  private:
  int _internal_tasks_size() const;
  public:
  void clear_tasks();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_tasks(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_tasks() const;
  void _internal_add_tasks(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_tasks();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 tasks(int index) const;
  void set_tasks(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_tasks(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      tasks() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_tasks();

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 money = 3;
  void clear_money();
  ::PROTOBUF_NAMESPACE_ID::int32 money() const;
  void set_money(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_money() const;
  void _internal_set_money(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Role)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > tasks_;
  mutable std::atomic<int> _tasks_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 money_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msgtest_2eproto;
};
// -------------------------------------------------------------------

class Family PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Family) */ {
 public:
  inline Family() : Family(nullptr) {}
  virtual ~Family();
  explicit constexpr Family(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Family(const Family& from);
  Family(Family&& from) noexcept
    : Family() {
    *this = ::std::move(from);
  }

  inline Family& operator=(const Family& from) {
    CopyFrom(from);
    return *this;
  }
  inline Family& operator=(Family&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Family& default_instance() {
    return *internal_default_instance();
  }
  static inline const Family* internal_default_instance() {
    return reinterpret_cast<const Family*>(
               &_Family_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Family& a, Family& b) {
    a.Swap(&b);
  }
  inline void Swap(Family* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Family* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Family* New() const final {
    return CreateMaybeMessage<Family>(nullptr);
  }

  Family* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Family>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Family& from);
  void MergeFrom(const Family& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Family* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Family";
  }
  protected:
  explicit Family(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_msgtest_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRolesFieldNumber = 3,
    kNameFieldNumber = 1,
    kLvFieldNumber = 2,
  };
  // repeated .Role roles = 3;
  int roles_size() const;
  private:
  int _internal_roles_size() const;
  public:
  void clear_roles();
  ::Role* mutable_roles(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Role >*
      mutable_roles();
  private:
  const ::Role& _internal_roles(int index) const;
  ::Role* _internal_add_roles();
  public:
  const ::Role& roles(int index) const;
  ::Role* add_roles();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Role >&
      roles() const;

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 lv = 2;
  void clear_lv();
  ::PROTOBUF_NAMESPACE_ID::int32 lv() const;
  void set_lv(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_lv() const;
  void _internal_set_lv(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Family)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Role > roles_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 lv_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msgtest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Role

// int32 id = 1;
inline void Role::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Role::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Role::id() const {
  // @@protoc_insertion_point(field_get:Role.id)
  return _internal_id();
}
inline void Role::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Role::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Role.id)
}

// string name = 2;
inline void Role::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Role::name() const {
  // @@protoc_insertion_point(field_get:Role.name)
  return _internal_name();
}
inline void Role::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Role.name)
}
inline std::string* Role::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Role.name)
  return _internal_mutable_name();
}
inline const std::string& Role::_internal_name() const {
  return name_.Get();
}
inline void Role::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Role::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Role.name)
}
inline void Role::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Role.name)
}
inline void Role::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Role.name)
}
inline std::string* Role::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Role::release_name() {
  // @@protoc_insertion_point(field_release:Role.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Role::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Role.name)
}

// int32 money = 3;
inline void Role::clear_money() {
  money_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Role::_internal_money() const {
  return money_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Role::money() const {
  // @@protoc_insertion_point(field_get:Role.money)
  return _internal_money();
}
inline void Role::_internal_set_money(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  money_ = value;
}
inline void Role::set_money(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_money(value);
  // @@protoc_insertion_point(field_set:Role.money)
}

// repeated int32 tasks = 4;
inline int Role::_internal_tasks_size() const {
  return tasks_.size();
}
inline int Role::tasks_size() const {
  return _internal_tasks_size();
}
inline void Role::clear_tasks() {
  tasks_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Role::_internal_tasks(int index) const {
  return tasks_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Role::tasks(int index) const {
  // @@protoc_insertion_point(field_get:Role.tasks)
  return _internal_tasks(index);
}
inline void Role::set_tasks(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  tasks_.Set(index, value);
  // @@protoc_insertion_point(field_set:Role.tasks)
}
inline void Role::_internal_add_tasks(::PROTOBUF_NAMESPACE_ID::int32 value) {
  tasks_.Add(value);
}
inline void Role::add_tasks(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_tasks(value);
  // @@protoc_insertion_point(field_add:Role.tasks)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Role::_internal_tasks() const {
  return tasks_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Role::tasks() const {
  // @@protoc_insertion_point(field_list:Role.tasks)
  return _internal_tasks();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Role::_internal_mutable_tasks() {
  return &tasks_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Role::mutable_tasks() {
  // @@protoc_insertion_point(field_mutable_list:Role.tasks)
  return _internal_mutable_tasks();
}

// -------------------------------------------------------------------

// Family

// string name = 1;
inline void Family::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Family::name() const {
  // @@protoc_insertion_point(field_get:Family.name)
  return _internal_name();
}
inline void Family::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Family.name)
}
inline std::string* Family::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Family.name)
  return _internal_mutable_name();
}
inline const std::string& Family::_internal_name() const {
  return name_.Get();
}
inline void Family::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Family::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Family.name)
}
inline void Family::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Family.name)
}
inline void Family::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Family.name)
}
inline std::string* Family::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Family::release_name() {
  // @@protoc_insertion_point(field_release:Family.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Family::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Family.name)
}

// int32 lv = 2;
inline void Family::clear_lv() {
  lv_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Family::_internal_lv() const {
  return lv_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Family::lv() const {
  // @@protoc_insertion_point(field_get:Family.lv)
  return _internal_lv();
}
inline void Family::_internal_set_lv(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  lv_ = value;
}
inline void Family::set_lv(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_lv(value);
  // @@protoc_insertion_point(field_set:Family.lv)
}

// repeated .Role roles = 3;
inline int Family::_internal_roles_size() const {
  return roles_.size();
}
inline int Family::roles_size() const {
  return _internal_roles_size();
}
inline void Family::clear_roles() {
  roles_.Clear();
}
inline ::Role* Family::mutable_roles(int index) {
  // @@protoc_insertion_point(field_mutable:Family.roles)
  return roles_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Role >*
Family::mutable_roles() {
  // @@protoc_insertion_point(field_mutable_list:Family.roles)
  return &roles_;
}
inline const ::Role& Family::_internal_roles(int index) const {
  return roles_.Get(index);
}
inline const ::Role& Family::roles(int index) const {
  // @@protoc_insertion_point(field_get:Family.roles)
  return _internal_roles(index);
}
inline ::Role* Family::_internal_add_roles() {
  return roles_.Add();
}
inline ::Role* Family::add_roles() {
  // @@protoc_insertion_point(field_add:Family.roles)
  return _internal_add_roles();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Role >&
Family::roles() const {
  // @@protoc_insertion_point(field_list:Family.roles)
  return roles_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_msgtest_2eproto
