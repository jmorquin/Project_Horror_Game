// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_LerpToHand.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_LerpToHand() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_LerpToHand();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_LerpToHand_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRLerpToHandFinishedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVRLerpToHandFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLerpToHandFinishedSignature)
{
	VRLerpToHandFinishedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	void UGS_LerpToHand::StaticRegisterNativesUGS_LerpToHand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_LerpToHand);
	UClass* Z_Construct_UClass_UGS_LerpToHand_NoRegister()
	{
		return UGS_LerpToHand::StaticClass();
	}
	struct Z_Construct_UClass_UGS_LerpToHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceForLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceForLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedForLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedForLerp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LerpInterpolationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpInterpolationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LerpInterpolationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLerpToHandBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLerpToHandBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLerpToHandFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLerpToHandFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurve_MetaData[];
#endif
		static void NewProp_bUseCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalCurveToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalCurveToFollow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_LerpToHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A grip script that causes new grips to lerp to the hand (from their current position to where they are supposed to sit).\n// It turns off when the lerp is complete.\n" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_LerpToHand.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A grip script that causes new grips to lerp to the hand (from their current position to where they are supposed to sit).\nIt turns off when the lerp is complete." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp_MetaData[] = {
		{ "Category", "LerpSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the initial grip distance is closer than this value then the lerping will not be performed.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the initial grip distance is closer than this value then the lerping will not be performed." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp = { "MinDistanceForLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, MinDistanceForLerp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration_MetaData[] = {
		{ "Category", "LerpSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many seconds the lerp should take\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds the lerp should take" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration = { "LerpDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, LerpDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp_MetaData[] = {
		{ "Category", "LerpSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\n// Will speed the LerpSpeed up to try and maintain this initial speed if required\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\nWill speed the LerpSpeed up to try and maintain this initial speed if required" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp = { "MinSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, MinSpeedForLerp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp_MetaData[] = {
		{ "Category", "LerpSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum speed (in UU per second) that the lerp should have across the initial grip distance\n// Will slow the LerpSpeed down to try and maintain this initial speed if required\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum speed (in UU per second) that the lerp should have across the initial grip distance\nWill slow the LerpSpeed down to try and maintain this initial speed if required" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp = { "MaxSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, MaxSpeedForLerp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_MetaData[] = {
		{ "Category", "LerpSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode = { "LerpInterpolationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, LerpInterpolationMode), Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_MetaData) }; // 3505397665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin_MetaData[] = {
		{ "Category", "LerpEvents" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin = { "OnLerpToHandBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, OnLerpToHandBegin), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin_MetaData) }; // 380205029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished_MetaData[] = {
		{ "Category", "LerpEvents" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished = { "OnLerpToHandFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, OnLerpToHandFinished), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLerpToHandFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished_MetaData) }; // 380205029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_MetaData[] = {
		{ "Category", "LerpCurve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to use a curve map to map the lerp to\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use a curve map to map the lerp to" },
#endif
	};
#endif
	void Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_SetBit(void* Obj)
	{
		((UGS_LerpToHand*)Obj)->bUseCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve = { "bUseCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGS_LerpToHand), &Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow_MetaData[] = {
		{ "Category", "LerpCurve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration\n" },
#endif
		{ "editcondition", "bUseCurve" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_LerpToHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow = { "OptionalCurveToFollow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_LerpToHand, OptionalCurveToFollow), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow_MetaData), Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinDistanceForLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MinSpeedForLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_MaxSpeedForLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_LerpInterpolationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OnLerpToHandFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_bUseCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_LerpToHand_Statics::NewProp_OptionalCurveToFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_LerpToHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_LerpToHand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_LerpToHand_Statics::ClassParams = {
		&UGS_LerpToHand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_LerpToHand_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_LerpToHand_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGS_LerpToHand()
	{
		if (!Z_Registration_Info_UClass_UGS_LerpToHand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_LerpToHand.OuterSingleton, Z_Construct_UClass_UGS_LerpToHand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_LerpToHand.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_LerpToHand>()
	{
		return UGS_LerpToHand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_LerpToHand);
	UGS_LerpToHand::~UGS_LerpToHand() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_LerpToHand, UGS_LerpToHand::StaticClass, TEXT("UGS_LerpToHand"), &Z_Registration_Info_UClass_UGS_LerpToHand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_LerpToHand), 1936278040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_865550571(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_LerpToHand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
