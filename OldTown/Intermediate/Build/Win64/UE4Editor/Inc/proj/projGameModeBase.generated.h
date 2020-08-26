// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJ_projGameModeBase_generated_h
#error "projGameModeBase.generated.h already included, missing '#pragma once' in projGameModeBase.h"
#endif
#define PROJ_projGameModeBase_generated_h

#define proj_Source_proj_projGameModeBase_h_15_SPARSE_DATA
#define proj_Source_proj_projGameModeBase_h_15_RPC_WRAPPERS
#define proj_Source_proj_projGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define proj_Source_proj_projGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprojGameModeBase(); \
	friend struct Z_Construct_UClass_AprojGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AprojGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/proj"), NO_API) \
	DECLARE_SERIALIZER(AprojGameModeBase)


#define proj_Source_proj_projGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAprojGameModeBase(); \
	friend struct Z_Construct_UClass_AprojGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AprojGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/proj"), NO_API) \
	DECLARE_SERIALIZER(AprojGameModeBase)


#define proj_Source_proj_projGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AprojGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AprojGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AprojGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AprojGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AprojGameModeBase(AprojGameModeBase&&); \
	NO_API AprojGameModeBase(const AprojGameModeBase&); \
public:


#define proj_Source_proj_projGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AprojGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AprojGameModeBase(AprojGameModeBase&&); \
	NO_API AprojGameModeBase(const AprojGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AprojGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AprojGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AprojGameModeBase)


#define proj_Source_proj_projGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define proj_Source_proj_projGameModeBase_h_12_PROLOG
#define proj_Source_proj_projGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_Source_proj_projGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	proj_Source_proj_projGameModeBase_h_15_SPARSE_DATA \
	proj_Source_proj_projGameModeBase_h_15_RPC_WRAPPERS \
	proj_Source_proj_projGameModeBase_h_15_INCLASS \
	proj_Source_proj_projGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define proj_Source_proj_projGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	proj_Source_proj_projGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	proj_Source_proj_projGameModeBase_h_15_SPARSE_DATA \
	proj_Source_proj_projGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	proj_Source_proj_projGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	proj_Source_proj_projGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJ_API UClass* StaticClass<class AprojGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID proj_Source_proj_projGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
