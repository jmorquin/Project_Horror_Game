// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/ParentRelativeAttachmentComponent.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentRelativeAttachmentComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the PRC starts rotating in yaw to match the snap / yaw tolerances. */" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the PRC starts rotating in yaw to match the snap / yaw tolerances." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRPRCBeginYawRotationEventSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVRPRCBeginYawRotationEventSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPRCBeginYawRotationEventSignature)
{
	VRPRCBeginYawRotationEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVR_PRC_RotationMethod;
	static UEnum* EVR_PRC_RotationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVR_PRC_RotationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVR_PRC_RotationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVR_PRC_RotationMethod"));
		}
		return Z_Registration_Info_UEnum_EVR_PRC_RotationMethod.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVR_PRC_RotationMethod>()
	{
		return EVR_PRC_RotationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::Enumerators[] = {
		{ "EVR_PRC_RotationMethod::PRC_ROT_HMD", (int64)EVR_PRC_RotationMethod::PRC_ROT_HMD },
		{ "EVR_PRC_RotationMethod::PRC_ROT_HMDControllerBlend", (int64)EVR_PRC_RotationMethod::PRC_ROT_HMDControllerBlend },
		{ "EVR_PRC_RotationMethod::PRC_ROT_ControllerHMDClamped", (int64)EVR_PRC_RotationMethod::PRC_ROT_ControllerHMDClamped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of rotation sampling to use\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "PRC_ROT_ControllerHMDClamped.Comment", "// Rotate to the controllers with behind the back detection, clamp within neck limit\n" },
		{ "PRC_ROT_ControllerHMDClamped.DisplayName", "Controller Clamped to HMD" },
		{ "PRC_ROT_ControllerHMDClamped.Name", "EVR_PRC_RotationMethod::PRC_ROT_ControllerHMDClamped" },
		{ "PRC_ROT_ControllerHMDClamped.ToolTip", "Rotate to the controllers with behind the back detection, clamp within neck limit" },
		{ "PRC_ROT_HMD.Comment", "// Rotate purely to the HMD yaw, default mode\n" },
		{ "PRC_ROT_HMD.DisplayName", "HMD rotation" },
		{ "PRC_ROT_HMD.Name", "EVR_PRC_RotationMethod::PRC_ROT_HMD" },
		{ "PRC_ROT_HMD.ToolTip", "Rotate purely to the HMD yaw, default mode" },
		{ "PRC_ROT_HMDControllerBlend.Comment", "// Rotate to a blend between the HMD and Controller facing\n" },
		{ "PRC_ROT_HMDControllerBlend.DisplayName", "ROT HMD Controller Blend" },
		{ "PRC_ROT_HMDControllerBlend.Name", "EVR_PRC_RotationMethod::PRC_ROT_HMDControllerBlend" },
		{ "PRC_ROT_HMDControllerBlend.ToolTip", "Rotate to a blend between the HMD and Controller facing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of rotation sampling to use" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVR_PRC_RotationMethod",
		"EVR_PRC_RotationMethod",
		Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod()
	{
		if (!Z_Registration_Info_UEnum_EVR_PRC_RotationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVR_PRC_RotationMethod.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVR_PRC_RotationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVR_PRC_RotationMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UParentRelativeAttachmentComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bNewPaused);
		P_GET_UBOOL(Z_Param_bZeroOutRotation);
		P_GET_UBOOL(Z_Param_bZeroOutLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bNewPaused,Z_Param_bZeroOutRotation,Z_Param_bZeroOutLocation);
		P_NATIVE_END;
	}
	void UParentRelativeAttachmentComponent::StaticRegisterNativesUParentRelativeAttachmentComponent()
	{
		UClass* Class = UParentRelativeAttachmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPaused", &UParentRelativeAttachmentComponent::execSetPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics
	{
		struct ParentRelativeAttachmentComponent_eventSetPaused_Parms
		{
			bool bNewPaused;
			bool bZeroOutRotation;
			bool bZeroOutLocation;
		};
		static void NewProp_bNewPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewPaused;
		static void NewProp_bZeroOutRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroOutRotation;
		static void NewProp_bZeroOutLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroOutLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bNewPaused_SetBit(void* Obj)
	{
		((ParentRelativeAttachmentComponent_eventSetPaused_Parms*)Obj)->bNewPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bNewPaused = { "bNewPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentRelativeAttachmentComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bNewPaused_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutRotation_SetBit(void* Obj)
	{
		((ParentRelativeAttachmentComponent_eventSetPaused_Parms*)Obj)->bZeroOutRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutRotation = { "bZeroOutRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentRelativeAttachmentComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutRotation_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutLocation_SetBit(void* Obj)
	{
		((ParentRelativeAttachmentComponent_eventSetPaused_Parms*)Obj)->bZeroOutLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutLocation = { "bZeroOutLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentRelativeAttachmentComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutLocation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bNewPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::NewProp_bZeroOutLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the paused state of the PRC, if setting to paused then zero out rotation and zero out location will null out those values\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the paused state of the PRC, if setting to paused then zero out rotation and zero out location will null out those values" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentRelativeAttachmentComponent, nullptr, "SetPaused", nullptr, nullptr, Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::ParentRelativeAttachmentComponent_eventSetPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::ParentRelativeAttachmentComponent_eventSetPaused_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParentRelativeAttachmentComponent);
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister()
	{
		return UParentRelativeAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLerpTransition_MetaData[];
#endif
		static void NewProp_bLerpTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerpTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnYawToleranceExceeded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnYawToleranceExceeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFeetLocation_MetaData[];
#endif
		static void NewProp_bUseFeetLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFeetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCenterAsFeetLocation_MetaData[];
#endif
		static void NewProp_bUseCenterAsFeetLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCenterAsFeetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRotationFromParent_MetaData[];
#endif
		static void NewProp_bIgnoreRotationFromParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRotationFromParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInCharacterMovement_MetaData[];
#endif
		static void NewProp_bUpdateInCharacterMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalWaistTrackingParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalWaistTrackingParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachBaseChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachBaseChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParentRelativeAttachmentComponent_SetPaused, "SetPaused" }, // 2577732244
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A component that will track the HMD/Cameras location and YAW rotation to allow for chest/waist attachements.\n* This is intended to be parented to the root component of a pawn, it will then either find and track the camera\n* or use the HMD's position if one is connected. This allows it to work in multiplayer since the camera will\n* have its position replicated.\n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ParentRelativeAttachmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component that will track the HMD/Cameras location and YAW rotation to allow for chest/waist attachements.\nThis is intended to be parented to the root component of a pawn, it will then either find and track the camera\nor use the HMD's position if one is connected. This allows it to work in multiplayer since the camera will\nhave its position replicated." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Angle tolerance before we lerp / snap to the new rotation\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle tolerance before we lerp / snap to the new rotation" },
#endif
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance = { "YawTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, YawTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, LerpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bLerpTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition = { "bLerpTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OnYawToleranceExceeded_MetaData[] = {
		{ "Category", "PRC Events" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OnYawToleranceExceeded = { "OnYawToleranceExceeded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, OnYawToleranceExceeded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPRCBeginYawRotationEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OnYawToleranceExceeded_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OnYawToleranceExceeded_MetaData) }; // 2993500526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true uses feet/bottom of the capsule as the base Z position for this component instead of the HMD/Camera Z position\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true uses feet/bottom of the capsule as the base Z position for this component instead of the HMD/Camera Z position" },
#endif
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bUseFeetLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation = { "bUseFeetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true uses center of capsule as the feet location instead\n" },
#endif
		{ "EditCondition", "bUseFeetLocation" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true uses center of capsule as the feet location instead" },
#endif
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bUseCenterAsFeetLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation = { "bUseCenterAsFeetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An additional value added to the relative position of the PRC \n// Can be used to offset the floor, or component heights if needed\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An additional value added to the relative position of the PRC\nCan be used to offset the floor, or component heights if needed" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will not set rotation every frame, only position\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will not set rotation every frame, only position" },
#endif
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bIgnoreRotationFromParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent = { "bIgnoreRotationFromParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)" },
#endif
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bUpdateInCharacterMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement = { "bUpdateInCharacterMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData[] = {
		{ "Category", "VRTrackedParentInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If valid will use this as the tracked parent instead of the HMD / Parent\n" },
#endif
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid will use this as the tracked parent instead of the HMD / Parent" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent = { "OptionalWaistTrackingParent", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, OptionalWaistTrackingParent), Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData) }; // 652357811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar = { "AttachChar", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, AttachChar), Z_Construct_UClass_AVRCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachBaseChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachBaseChar = { "AttachBaseChar", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, AttachBaseChar), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachBaseChar_MetaData), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachBaseChar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OnYawToleranceExceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseCenterAsFeetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachBaseChar,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRTrackedParentInterface_NoRegister, (int32)VTABLE_OFFSET(UParentRelativeAttachmentComponent, IVRTrackedParentInterface), false },  // 1977504280
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentRelativeAttachmentComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::ClassParams = {
		&UParentRelativeAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent()
	{
		if (!Z_Registration_Info_UClass_UParentRelativeAttachmentComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParentRelativeAttachmentComponent.OuterSingleton, Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParentRelativeAttachmentComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UParentRelativeAttachmentComponent>()
	{
		return UParentRelativeAttachmentComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentRelativeAttachmentComponent);
	UParentRelativeAttachmentComponent::~UParentRelativeAttachmentComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics::EnumInfo[] = {
		{ EVR_PRC_RotationMethod_StaticEnum, TEXT("EVR_PRC_RotationMethod"), &Z_Registration_Info_UEnum_EVR_PRC_RotationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3267536113U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParentRelativeAttachmentComponent, UParentRelativeAttachmentComponent::StaticClass, TEXT("UParentRelativeAttachmentComponent"), &Z_Registration_Info_UClass_UParentRelativeAttachmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentRelativeAttachmentComponent), 423327616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_636694309(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
