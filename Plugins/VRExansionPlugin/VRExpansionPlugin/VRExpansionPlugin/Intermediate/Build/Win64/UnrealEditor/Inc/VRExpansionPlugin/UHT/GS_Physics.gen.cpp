// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Physics.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Physics() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Physics();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Physics_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
// End Cross Module References
	void UGS_Physics::StaticRegisterNativesUGS_Physics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_Physics);
	UClass* Z_Construct_UClass_UGS_Physics_NoRegister()
	{
		return UGS_Physics::StaticClass();
	}
	struct Z_Construct_UClass_UGS_Physics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleHandPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleHandPhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiHandPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiHandPhysicsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_Physics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A pure physics multi hand interaction grip script, expects that bAllowMultiGrips is set on the parent object*\n*/" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Physics.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A pure physics multi hand interaction grip script, expects that bAllowMultiGrips is set on the parent object*" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip settings to use when a single hand is gripping, overrides interface defaults\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip settings to use when a single hand is gripping, overrides interface defaults" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings = { "SingleHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Physics, SingleHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings_MetaData), Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings_MetaData) }; // 2973955314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip settings to use when multiple hands are gripping\n// Overrides interface defaults\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip settings to use when multiple hands are gripping\nOverrides interface defaults" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings = { "MultiHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Physics, MultiHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings_MetaData), Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings_MetaData) }; // 2973955314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_Physics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_Physics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Physics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_Physics_Statics::ClassParams = {
		&UGS_Physics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGS_Physics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGS_Physics()
	{
		if (!Z_Registration_Info_UClass_UGS_Physics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_Physics.OuterSingleton, Z_Construct_UClass_UGS_Physics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_Physics.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Physics>()
	{
		return UGS_Physics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Physics);
	UGS_Physics::~UGS_Physics() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_Physics, UGS_Physics::StaticClass, TEXT("UGS_Physics"), &Z_Registration_Info_UClass_UGS_Physics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_Physics), 1031527844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_2308393454(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
