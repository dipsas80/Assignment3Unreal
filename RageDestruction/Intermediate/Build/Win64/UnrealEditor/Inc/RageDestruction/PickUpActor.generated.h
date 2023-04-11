// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RAGEDESTRUCTION_PickUpActor_generated_h
#error "PickUpActor.generated.h already included, missing '#pragma once' in PickUpActor.h"
#endif
#define RAGEDESTRUCTION_PickUpActor_generated_h

#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_SPARSE_DATA
#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_EVENT_PARMS
#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_CALLBACK_WRAPPERS
#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpActor(); \
	friend struct Z_Construct_UClass_APickUpActor_Statics; \
public: \
	DECLARE_CLASS(APickUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RageDestruction"), NO_API) \
	DECLARE_SERIALIZER(APickUpActor)


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickUpActor(); \
	friend struct Z_Construct_UClass_APickUpActor_Statics; \
public: \
	DECLARE_CLASS(APickUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RageDestruction"), NO_API) \
	DECLARE_SERIALIZER(APickUpActor)


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpActor(APickUpActor&&); \
	NO_API APickUpActor(const APickUpActor&); \
public:


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpActor(APickUpActor&&); \
	NO_API APickUpActor(const APickUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpActor)


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_9_PROLOG \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_EVENT_PARMS


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_SPARSE_DATA \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_RPC_WRAPPERS \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_CALLBACK_WRAPPERS \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_INCLASS \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_SPARSE_DATA \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_CALLBACK_WRAPPERS \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_RageDestruction_Source_RageDestruction_PickUpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAGEDESTRUCTION_API UClass* StaticClass<class APickUpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RageDestruction_Source_RageDestruction_PickUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
