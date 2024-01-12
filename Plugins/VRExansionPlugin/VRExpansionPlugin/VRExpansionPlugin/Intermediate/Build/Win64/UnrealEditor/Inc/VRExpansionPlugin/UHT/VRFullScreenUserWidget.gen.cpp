// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRFullScreenUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRFullScreenUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWindowVisibility();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRFullScreenUserWidget();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRWidgetDisplayType;
	static UEnum* EVRWidgetDisplayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRWidgetDisplayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRWidgetDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRWidgetDisplayType"));
		}
		return Z_Registration_Info_UEnum_EVRWidgetDisplayType.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRWidgetDisplayType>()
	{
		return EVRWidgetDisplayType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enumerators[] = {
		{ "EVRWidgetDisplayType::Inactive", (int64)EVRWidgetDisplayType::Inactive },
		{ "EVRWidgetDisplayType::Viewport", (int64)EVRWidgetDisplayType::Viewport },
		{ "EVRWidgetDisplayType::PostProcess", (int64)EVRWidgetDisplayType::PostProcess },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inactive.Comment", "/** Do not display. */" },
		{ "Inactive.Name", "EVRWidgetDisplayType::Inactive" },
		{ "Inactive.ToolTip", "Do not display." },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "PostProcess.Comment", "/** Display as a post process. */" },
		{ "PostProcess.Name", "EVRWidgetDisplayType::PostProcess" },
		{ "PostProcess.ToolTip", "Display as a post process." },
		{ "Viewport.Comment", "/** Display on a game viewport. */" },
		{ "Viewport.Name", "EVRWidgetDisplayType::Viewport" },
		{ "Viewport.ToolTip", "Display on a game viewport." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		"EVRWidgetDisplayType",
		"EVRWidgetDisplayType",
		Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType()
	{
		if (!Z_Registration_Info_UEnum_EVRWidgetDisplayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRWidgetDisplayType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRWidgetDisplayType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport;
class UScriptStruct* FVRFullScreenUserWidget_Viewport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRFullScreenUserWidget_Viewport"));
	}
	return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRFullScreenUserWidget_Viewport>()
{
	return FVRFullScreenUserWidget_Viewport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRFullScreenUserWidget_Viewport>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRFullScreenUserWidget_Viewport",
		nullptr,
		0,
		sizeof(FVRFullScreenUserWidget_Viewport),
		alignof(FVRFullScreenUserWidget_Viewport),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport()
	{
		if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.InnerSingleton, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess;
class UScriptStruct* FVRFullScreenUserWidget_PostProcess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRFullScreenUserWidget_PostProcess"));
	}
	return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRFullScreenUserWidget_PostProcess>()
{
	return FVRFullScreenUserWidget_PostProcess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWidgetDrawSize_MetaData[];
#endif
		static void NewProp_bWidgetDrawSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWidgetDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[];
#endif
		static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetBackgroundColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetBlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderTargetBlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderToTextureOnly_MetaData[];
#endif
		static void NewProp_bRenderToTextureOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderToTextureOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawToVRPreview_MetaData[];
#endif
		static void NewProp_bDrawToVRPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawToVRPreview;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VRDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VRDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostVRDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostVRDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PostVRDisplayType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRFullScreenUserWidget_PostProcess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The size of the rendered widget. */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the rendered widget." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit(void* Obj)
	{
		((FVRFullScreenUserWidget_PostProcess*)Obj)->bWidgetDrawSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize = { "bWidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The size of the rendered widget. */" },
#endif
		{ "EditCondition", "bWidgetDrawSize" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the rendered widget." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize = { "WidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, WidgetDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the virtual window created to host the widget focusable? */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((FVRFullScreenUserWidget_PostProcess*)Obj)->bWindowFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The visibility of the virtual window created to host the widget. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visibility of the virtual window created to host the widget." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility = { "WindowVisibility", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, WindowVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData) }; // 1279498516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
	{
		((FVRFullScreenUserWidget_PostProcess*)Obj)->bReceiveHardwareInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The background color of the render target */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The background color of the render target" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor = { "RenderTargetBackgroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, RenderTargetBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The blend mode for the widget. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The blend mode for the widget." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode = { "RenderTargetBlendMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, RenderTargetBlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData) }; // 920142598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target to which the user widget is rendered. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target to which the user widget is rendered." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget = { "WidgetRenderTarget", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, WidgetRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only render to the UTextureRenderTarget2D - do not output to the final viewport. Unless DrawtoVRPreview is active */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only render to the UTextureRenderTarget2D - do not output to the final viewport. Unless DrawtoVRPreview is active" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_SetBit(void* Obj)
	{
		((FVRFullScreenUserWidget_PostProcess*)Obj)->bRenderToTextureOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly = { "bRenderToTextureOnly", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If we should automatically try to draw and manage this to the VR Preview */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should automatically try to draw and manage this to the VR Preview" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_SetBit(void* Obj)
	{
		((FVRFullScreenUserWidget_PostProcess*)Obj)->bDrawToVRPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview = { "bDrawToVRPreview", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VR Spectator mode to use when active\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VR Spectator mode to use when active" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType = { "VRDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, VRDisplayType), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_MetaData) }; // 62130267
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VR Spectator mode to use when not active\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VR Spectator mode to use when not active" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType = { "PostVRDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, PostVRDisplayType), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_MetaData), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_MetaData) }; // 62130267
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRFullScreenUserWidget_PostProcess",
		Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers),
		sizeof(FVRFullScreenUserWidget_PostProcess),
		alignof(FVRFullScreenUserWidget_PostProcess),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess()
	{
		if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.InnerSingleton, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.InnerSingleton;
	}
	DEFINE_FUNCTION(UVRFullScreenUserWidget::execGetPostProcessRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPostProcessRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRFullScreenUserWidget::execGetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRFullScreenUserWidget::execSetIsHidden)
	{
		P_GET_UBOOL(Z_Param_bNewHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsHidden(Z_Param_bNewHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRFullScreenUserWidget::execHide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRFullScreenUserWidget::execDisplay)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Display(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRFullScreenUserWidget::execIsDisplayRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayRequested();
		P_NATIVE_END;
	}
	void UVRFullScreenUserWidget::StaticRegisterNativesUVRFullScreenUserWidget()
	{
		UClass* Class = UVRFullScreenUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Display", &UVRFullScreenUserWidget::execDisplay },
			{ "GetPostProcessRenderTarget", &UVRFullScreenUserWidget::execGetPostProcessRenderTarget },
			{ "GetWidget", &UVRFullScreenUserWidget::execGetWidget },
			{ "Hide", &UVRFullScreenUserWidget::execHide },
			{ "IsDisplayRequested", &UVRFullScreenUserWidget::execIsDisplayRequested },
			{ "SetIsHidden", &UVRFullScreenUserWidget::execSetIsHidden },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics
	{
		struct VRFullScreenUserWidget_eventDisplay_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidget_eventDisplay_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRFullScreenUserWidget_eventDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidget_eventDisplay_Parms), &Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "Display", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::VRFullScreenUserWidget_eventDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::VRFullScreenUserWidget_eventDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_Display()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics
	{
		struct VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "GetPostProcessRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics
	{
		struct VRFullScreenUserWidget_eventGetWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidget_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a pointer to the inner widget.\n// Note: This should not be stored!\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a pointer to the inner widget.\nNote: This should not be stored!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "GetWidget", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::VRFullScreenUserWidget_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::VRFullScreenUserWidget_eventGetWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "Hide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics
	{
		struct VRFullScreenUserWidget_eventIsDisplayRequested_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRFullScreenUserWidget_eventIsDisplayRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidget_eventIsDisplayRequested_Parms), &Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "IsDisplayRequested", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::VRFullScreenUserWidget_eventIsDisplayRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::VRFullScreenUserWidget_eventIsDisplayRequested_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics
	{
		struct VRFullScreenUserWidget_eventSetIsHidden_Parms
		{
			bool bNewHidden;
		};
		static void NewProp_bNewHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden_SetBit(void* Obj)
	{
		((VRFullScreenUserWidget_eventSetIsHidden_Parms*)Obj)->bNewHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden = { "bNewHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidget_eventSetIsHidden_Parms), &Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "SetIsHidden", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::VRFullScreenUserWidget_eventSetIsHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::VRFullScreenUserWidget_eventSetIsHidden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRFullScreenUserWidget);
	UClass* Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister()
	{
		return UVRFullScreenUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVRFullScreenUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditorDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PIEDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PIEDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRFullScreenUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRFullScreenUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_Display, "Display" }, // 119960537
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget, "GetPostProcessRenderTarget" }, // 4029657706
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget, "GetWidget" }, // 1025496986
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_Hide, "Hide" }, // 3410161401
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested, "IsDisplayRequested" }, // 2686551906
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden, "SetIsHidden" }, // 2148331100
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
#endif
		{ "IncludePath", "Misc/VRFullScreenUserWidget.h" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display type when the world is an editor world. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display type when the world is an editor world." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType = { "EditorDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, EditorDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData) }; // 1252495973
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display type when the world is a game world. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display type when the world is a game world." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType = { "GameDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, GameDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData) }; // 1252495973
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display type when the world is a PIE world. */" },
#endif
		{ "DisplayName", "PIE Display Type" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display type when the world is a PIE world." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType = { "PIEDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, PIEDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData) }; // 1252495973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData[] = {
		{ "Category", "Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Behavior when the widget should be display by the slate attached to the viewport. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior when the widget should be display by the slate attached to the viewport." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType = { "ViewportDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, ViewportDisplayType), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData) }; // 3997192198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData[] = {
		{ "Category", "Post Process" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Behavior when the widget should be display by a post process. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior when the widget should be display by a post process." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType = { "PostProcessDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, PostProcessDisplayType), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData) }; // 2223322796
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget_MetaData), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRFullScreenUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRFullScreenUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::ClassParams = {
		&UVRFullScreenUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVRFullScreenUserWidget()
	{
		if (!Z_Registration_Info_UClass_UVRFullScreenUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRFullScreenUserWidget.OuterSingleton, Z_Construct_UClass_UVRFullScreenUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRFullScreenUserWidget.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRFullScreenUserWidget>()
	{
		return UVRFullScreenUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRFullScreenUserWidget);
	UVRFullScreenUserWidget::~UVRFullScreenUserWidget() {}
	DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execGetPostProcessRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPostProcessRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execGetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execSetWidgetVisible)
	{
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetVisible(Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execSetGameDisplayType)
	{
		P_GET_ENUM(EVRWidgetDisplayType,Z_Param_NewDisplayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameDisplayType(EVRWidgetDisplayType(Z_Param_NewDisplayType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execSetPIEDisplayType)
	{
		P_GET_ENUM(EVRWidgetDisplayType,Z_Param_NewDisplayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPIEDisplayType(EVRWidgetDisplayType(Z_Param_NewDisplayType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execGetPreviewWidgetComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVRFullScreenUserWidget**)Z_Param__Result=P_THIS->GetPreviewWidgetComp();
		P_NATIVE_END;
	}
	void AVRFullScreenUserWidgetActor::StaticRegisterNativesAVRFullScreenUserWidgetActor()
	{
		UClass* Class = AVRFullScreenUserWidgetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPostProcessRenderTarget", &AVRFullScreenUserWidgetActor::execGetPostProcessRenderTarget },
			{ "GetPreviewWidgetComp", &AVRFullScreenUserWidgetActor::execGetPreviewWidgetComp },
			{ "GetWidget", &AVRFullScreenUserWidgetActor::execGetWidget },
			{ "SetGameDisplayType", &AVRFullScreenUserWidgetActor::execSetGameDisplayType },
			{ "SetPIEDisplayType", &AVRFullScreenUserWidgetActor::execSetPIEDisplayType },
			{ "SetWidgetVisible", &AVRFullScreenUserWidgetActor::execSetWidgetVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics
	{
		struct VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "GetPostProcessRenderTarget", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics
	{
		struct VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms
		{
			UVRFullScreenUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms, ReturnValue), Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "GetPreviewWidgetComp", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics
	{
		struct VRFullScreenUserWidgetActor_eventGetWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "GetWidget", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::VRFullScreenUserWidgetActor_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::VRFullScreenUserWidgetActor_eventGetWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics
	{
		struct VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms
		{
			EVRWidgetDisplayType NewDisplayType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDisplayType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDisplayType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType = { "NewDisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms, NewDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(0, nullptr) }; // 1252495973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "SetGameDisplayType", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics
	{
		struct VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms
		{
			EVRWidgetDisplayType NewDisplayType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDisplayType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDisplayType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType = { "NewDisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms, NewDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(0, nullptr) }; // 1252495973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "SetPIEDisplayType", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics
	{
		struct VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms
		{
			bool bIsVisible;
		};
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms), &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the widget to visible or not, this will be overriden by any changed to the actors hidden state\n// IE: Setting actor to hidden will force this hidden as well, also setting the actor to visible will do the opposite\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the widget to visible or not, this will be overriden by any changed to the actors hidden state\nIE: Setting actor to hidden will force this hidden as well, also setting the actor to visible will do the opposite" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "SetWidgetVisible", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRFullScreenUserWidgetActor);
	UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor_NoRegister()
	{
		return AVRFullScreenUserWidgetActor::StaticClass();
	}
	struct Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnInit_MetaData[];
#endif
		static void NewProp_bShowOnInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenUserWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget, "GetPostProcessRenderTarget" }, // 3677932882
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp, "GetPreviewWidgetComp" }, // 918358344
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget, "GetWidget" }, // 1961058095
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType, "SetGameDisplayType" }, // 2803226927
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType, "SetPIEDisplayType" }, // 1864946213
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible, "SetWidgetVisible" }, // 2520795545
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
#endif
		{ "HideCategories", "Actor Input Movement Collision Rendering Utilities|Transformation LOD Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Misc/VRFullScreenUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widgets are first rendered to a render target, then that render target is displayed in the world." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true the widget will be shown right away, if false you will need to set SetWidgetVisible(true) to show it */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the widget will be shown right away, if false you will need to set SetWidgetVisible(true) to show it" },
#endif
	};
#endif
	void Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_SetBit(void* Obj)
	{
		((AVRFullScreenUserWidgetActor*)Obj)->bShowOnInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit = { "bShowOnInit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRFullScreenUserWidgetActor), &Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_MetaData), Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget = { "ScreenUserWidget", nullptr, (EPropertyFlags)0x00120000020a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRFullScreenUserWidgetActor, ScreenUserWidget), Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget_MetaData), Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRFullScreenUserWidgetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::ClassParams = {
		&AVRFullScreenUserWidgetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor()
	{
		if (!Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor.OuterSingleton, Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRFullScreenUserWidgetActor>()
	{
		return AVRFullScreenUserWidgetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRFullScreenUserWidgetActor);
	AVRFullScreenUserWidgetActor::~AVRFullScreenUserWidgetActor() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::EnumInfo[] = {
		{ EVRWidgetDisplayType_StaticEnum, TEXT("EVRWidgetDisplayType"), &Z_Registration_Info_UEnum_EVRWidgetDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1252495973U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ScriptStructInfo[] = {
		{ FVRFullScreenUserWidget_Viewport::StaticStruct, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::NewStructOps, TEXT("VRFullScreenUserWidget_Viewport"), &Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRFullScreenUserWidget_Viewport), 3997192198U) },
		{ FVRFullScreenUserWidget_PostProcess::StaticStruct, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewStructOps, TEXT("VRFullScreenUserWidget_PostProcess"), &Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRFullScreenUserWidget_PostProcess), 2223322796U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRFullScreenUserWidget, UVRFullScreenUserWidget::StaticClass, TEXT("UVRFullScreenUserWidget"), &Z_Registration_Info_UClass_UVRFullScreenUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRFullScreenUserWidget), 1412192988U) },
		{ Z_Construct_UClass_AVRFullScreenUserWidgetActor, AVRFullScreenUserWidgetActor::StaticClass, TEXT("AVRFullScreenUserWidgetActor"), &Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRFullScreenUserWidgetActor), 3731676101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_4284427768(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
