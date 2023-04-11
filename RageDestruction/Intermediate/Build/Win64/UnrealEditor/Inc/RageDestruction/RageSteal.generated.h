// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAGEDESTRUCTION_RageSteal_generated_h
#error "RageSteal.generated.h already included, missing '#pragma once' in RageSteal.h"
#endif
#define RAGEDESTRUCTION_RageSteal_generated_h

#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_SPARSE_DATA
#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_RPC_WRAPPERS
#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_EVENT_PARMS \
	struct RageSteal_eventChangeRage_Parms \
	{ \
		int32 value; \
	}; \
	struct RageSteal_eventRageGather_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		RageSteal_eventRageGather_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_CALLBACK_WRAPPERS
#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RAGEDESTRUCTION_API URageSteal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URageSteal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RAGEDESTRUCTION_API, URageSteal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URageSteal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RAGEDESTRUCTION_API URageSteal(URageSteal&&); \
	RAGEDESTRUCTION_API URageSteal(const URageSteal&); \
public:


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RAGEDESTRUCTION_API URageSteal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RAGEDESTRUCTION_API URageSteal(URageSteal&&); \
	RAGEDESTRUCTION_API URageSteal(const URageSteal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RAGEDESTRUCTION_API, URageSteal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URageSteal); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URageSteal)


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURageSteal(); \
	friend struct Z_Construct_UClass_URageSteal_Statics; \
public: \
	DECLARE_CLASS(URageSteal, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RageDestruction"), RAGEDESTRUCTION_API) \
	DECLARE_SERIALIZER(URageSteal)


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_GENERATED_UINTERFACE_BODY() \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_GENERATED_UINTERFACE_BODY() \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRageSteal() {} \
public: \
	typedef URageSteal UClassType; \
	typedef IRageSteal ThisClass; \
	static void Execute_ChangeRage(UObject* O, int32 value); \
	static int32 Execute_RageGather(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IRageSteal() {} \
public: \
	typedef URageSteal UClassType; \
	typedef IRageSteal ThisClass; \
	static void Execute_ChangeRage(UObject* O, int32 value); \
	static int32 Execute_RageGather(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_10_PROLOG \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_EVENT_PARMS


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_SPARSE_DATA \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_RPC_WRAPPERS \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_CALLBACK_WRAPPERS \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RageDestruction_Source_RageDestruction_RageSteal_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_SPARSE_DATA \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_CALLBACK_WRAPPERS \
	FID_RageDestruction_Source_RageDestruction_RageSteal_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAGEDESTRUCTION_API UClass* StaticClass<class URageSteal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RageDestruction_Source_RageDestruction_RageSteal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
