// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RageDestruction/RageSteal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRageSteal() {}
// Cross Module References
	RAGEDESTRUCTION_API UClass* Z_Construct_UClass_URageSteal_NoRegister();
	RAGEDESTRUCTION_API UClass* Z_Construct_UClass_URageSteal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RageDestruction();
// End Cross Module References
	void IRageSteal::ChangeRage(int32 value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeRage instead.");
	}
	int32 IRageSteal::RageGather()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RageGather instead.");
		RageSteal_eventRageGather_Parms Parms;
		return Parms.ReturnValue;
	}
	void URageSteal::StaticRegisterNativesURageSteal()
	{
	}
	struct Z_Construct_UFunction_URageSteal_ChangeRage_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URageSteal_ChangeRage_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RageSteal_eventChangeRage_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URageSteal_ChangeRage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URageSteal_ChangeRage_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URageSteal_ChangeRage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rage Interface" },
		{ "ModuleRelativePath", "RageSteal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URageSteal_ChangeRage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URageSteal, nullptr, "ChangeRage", nullptr, nullptr, sizeof(RageSteal_eventChangeRage_Parms), Z_Construct_UFunction_URageSteal_ChangeRage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URageSteal_ChangeRage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URageSteal_ChangeRage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URageSteal_ChangeRage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URageSteal_ChangeRage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URageSteal_ChangeRage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URageSteal_RageGather_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URageSteal_RageGather_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RageSteal_eventRageGather_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URageSteal_RageGather_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URageSteal_RageGather_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URageSteal_RageGather_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rage Interface" },
		{ "ModuleRelativePath", "RageSteal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URageSteal_RageGather_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URageSteal, nullptr, "RageGather", nullptr, nullptr, sizeof(RageSteal_eventRageGather_Parms), Z_Construct_UFunction_URageSteal_RageGather_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URageSteal_RageGather_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URageSteal_RageGather_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URageSteal_RageGather_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URageSteal_RageGather()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URageSteal_RageGather_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URageSteal);
	UClass* Z_Construct_UClass_URageSteal_NoRegister()
	{
		return URageSteal::StaticClass();
	}
	struct Z_Construct_UClass_URageSteal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URageSteal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RageDestruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URageSteal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URageSteal_ChangeRage, "ChangeRage" }, // 1094571374
		{ &Z_Construct_UFunction_URageSteal_RageGather, "RageGather" }, // 2000837533
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URageSteal_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "RageSteal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URageSteal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRageSteal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URageSteal_Statics::ClassParams = {
		&URageSteal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URageSteal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URageSteal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URageSteal()
	{
		if (!Z_Registration_Info_UClass_URageSteal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URageSteal.OuterSingleton, Z_Construct_UClass_URageSteal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URageSteal.OuterSingleton;
	}
	template<> RAGEDESTRUCTION_API UClass* StaticClass<URageSteal>()
	{
		return URageSteal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URageSteal);
	static FName NAME_URageSteal_ChangeRage = FName(TEXT("ChangeRage"));
	void IRageSteal::Execute_ChangeRage(UObject* O, int32 value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URageSteal::StaticClass()));
		RageSteal_eventChangeRage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URageSteal_ChangeRage);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_URageSteal_RageGather = FName(TEXT("RageGather"));
	int32 IRageSteal::Execute_RageGather(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URageSteal::StaticClass()));
		RageSteal_eventRageGather_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URageSteal_RageGather);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_RageDestruction_Source_RageDestruction_RageSteal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RageDestruction_Source_RageDestruction_RageSteal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URageSteal, URageSteal::StaticClass, TEXT("URageSteal"), &Z_Registration_Info_UClass_URageSteal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URageSteal), 1814504395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RageDestruction_Source_RageDestruction_RageSteal_h_4083142988(TEXT("/Script/RageDestruction"),
		Z_CompiledInDeferFile_FID_RageDestruction_Source_RageDestruction_RageSteal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RageDestruction_Source_RageDestruction_RageSteal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
