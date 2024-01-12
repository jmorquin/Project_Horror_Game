// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Default.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Default() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_ExtendedDefault();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_ExtendedDefault_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
// End Cross Module References
	void UGS_Default::StaticRegisterNativesUGS_Default()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_Default);
	UClass* Z_Construct_UClass_UGS_Default_NoRegister()
	{
		return UGS_Default::StaticClass();
	}
	struct Z_Construct_UClass_UGS_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Default_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Default_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The default grip transform logic for the motion controllers\n*/" },
#endif
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Default.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default grip transform logic for the motion controllers" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Default>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_Default_Statics::ClassParams = {
		&UGS_Default::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Default_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_Default_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGS_Default()
	{
		if (!Z_Registration_Info_UClass_UGS_Default.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_Default.OuterSingleton, Z_Construct_UClass_UGS_Default_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_Default.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Default>()
	{
		return UGS_Default::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Default);
	UGS_Default::~UGS_Default() {}
	void UGS_ExtendedDefault::StaticRegisterNativesUGS_ExtendedDefault()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_ExtendedDefault);
	UClass* Z_Construct_UClass_UGS_ExtendedDefault_NoRegister()
	{
		return UGS_ExtendedDefault::StaticClass();
	}
	struct Z_Construct_UClass_UGS_ExtendedDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitGripScaling_MetaData[];
#endif
		static void NewProp_bLimitGripScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitGripScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumGripScaling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumGripScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumGripScaling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumGripScaling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_ExtendedDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An extended default grip script that adds less common grip features that were moved out of the default implementation\n" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Default.h" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An extended default grip script that adds less common grip features that were moved out of the default implementation" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether clamp the grip scaling in scaling grips\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether clamp the grip scaling in scaling grips" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_SetBit(void* Obj)
	{
		((UGS_ExtendedDefault*)Obj)->bLimitGripScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling = { "bLimitGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_ExtendedDefault), &Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_MetaData), Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum size to allow scaling in double grip to reach\n" },
#endif
		{ "editcondition", "bLimitGripScaling" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum size to allow scaling in double grip to reach" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling = { "MinimumGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_ExtendedDefault, MinimumGripScaling), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling_MetaData), Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum size to allow scaling in double grip to reach\n" },
#endif
		{ "editcondition", "bLimitGripScaling" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum size to allow scaling in double grip to reach" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling = { "MaximumGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_ExtendedDefault, MaximumGripScaling), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling_MetaData), Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling_MetaData) }; // 2131173936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_ExtendedDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_ExtendedDefault>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::ClassParams = {
		&UGS_ExtendedDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_ExtendedDefault_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGS_ExtendedDefault()
	{
		if (!Z_Registration_Info_UClass_UGS_ExtendedDefault.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_ExtendedDefault.OuterSingleton, Z_Construct_UClass_UGS_ExtendedDefault_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_ExtendedDefault.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_ExtendedDefault>()
	{
		return UGS_ExtendedDefault::StaticClass();
	}
	UGS_ExtendedDefault::UGS_ExtendedDefault(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_ExtendedDefault);
	UGS_ExtendedDefault::~UGS_ExtendedDefault() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Default_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Default_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_Default, UGS_Default::StaticClass, TEXT("UGS_Default"), &Z_Registration_Info_UClass_UGS_Default, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_Default), 1628668849U) },
		{ Z_Construct_UClass_UGS_ExtendedDefault, UGS_ExtendedDefault::StaticClass, TEXT("UGS_ExtendedDefault"), &Z_Registration_Info_UClass_UGS_ExtendedDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_ExtendedDefault), 40055536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Default_h_955000218(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Default_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Default_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
