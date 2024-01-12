// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/OptionalRepSkeletalMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionalRepSkeletalMeshActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UNoRepSphereComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UNoRepSphereComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR();
// End Cross Module References
	void UNoRepSphereComponent::StaticRegisterNativesUNoRepSphereComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoRepSphereComponent);
	UClass* Z_Construct_UClass_UNoRepSphereComponent_NoRegister()
	{
		return UNoRepSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNoRepSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoRepSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoRepSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temp comp to avoid some engine issues, exists only until a bug fix happens\n" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Misc/OptionalRepSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temp comp to avoid some engine issues, exists only until a bug fix happens" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
	};
#endif
	void Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UNoRepSphereComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNoRepSphereComponent), &Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_MetaData), Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoRepSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoRepSphereComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoRepSphereComponent_Statics::ClassParams = {
		&UNoRepSphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNoRepSphereComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNoRepSphereComponent()
	{
		if (!Z_Registration_Info_UClass_UNoRepSphereComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoRepSphereComponent.OuterSingleton, Z_Construct_UClass_UNoRepSphereComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNoRepSphereComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UNoRepSphereComponent>()
	{
		return UNoRepSphereComponent::StaticClass();
	}

	void UNoRepSphereComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNoRepSphereComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoRepSphereComponent);
	UNoRepSphereComponent::~UNoRepSphereComponent() {}

static_assert(std::is_polymorphic<FSkeletalMeshComponentEndPhysicsTickFunctionVR>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FSkeletalMeshComponentEndPhysicsTickFunctionVR cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR;
class UScriptStruct* FSkeletalMeshComponentEndPhysicsTickFunctionVR::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("SkeletalMeshComponentEndPhysicsTickFunctionVR"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FSkeletalMeshComponentEndPhysicsTickFunctionVR>()
{
	return FSkeletalMeshComponentEndPhysicsTickFunctionVR::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A component specifically for being able to turn off movement replication in the component at will\n* Has the upside of also being a blueprintable base since UE4 doesn't allow that with std ones\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component specifically for being able to turn off movement replication in the component at will\nHas the upside of also being a blueprintable base since UE4 doesn't allow that with std ones" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshComponentEndPhysicsTickFunctionVR>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"SkeletalMeshComponentEndPhysicsTickFunctionVR",
		nullptr,
		0,
		sizeof(FSkeletalMeshComponentEndPhysicsTickFunctionVR),
		alignof(FSkeletalMeshComponentEndPhysicsTickFunctionVR),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR.InnerSingleton;
	}
	DEFINE_FUNCTION(UInversePhysicsSkeletalMeshComponent::execGetLocalBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetLocalBounds();
		P_NATIVE_END;
	}
	void UInversePhysicsSkeletalMeshComponent::StaticRegisterNativesUInversePhysicsSkeletalMeshComponent()
	{
		UClass* Class = UInversePhysicsSkeletalMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalBounds", &UInversePhysicsSkeletalMeshComponent::execGetLocalBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics
	{
		struct InversePhysicsSkeletalMeshComponent_eventGetLocalBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InversePhysicsSkeletalMeshComponent_eventGetLocalBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionFunctions" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent, nullptr, "GetLocalBounds", nullptr, nullptr, Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::InversePhysicsSkeletalMeshComponent_eventGetLocalBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::InversePhysicsSkeletalMeshComponent_eventGetLocalBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInversePhysicsSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_NoRegister()
	{
		return UInversePhysicsSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInversePhysicsSkeletalMeshComponent_GetLocalBounds, "GetLocalBounds" }, // 2789081812
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A base skeletal mesh component that has been added to temp correct an engine bug with inversed scale and physics\n" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Misc/OptionalRepSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A base skeletal mesh component that has been added to temp correct an engine bug with inversed scale and physics" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
#endif
	void Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UInversePhysicsSkeletalMeshComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInversePhysicsSkeletalMeshComponent), &Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData), Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInversePhysicsSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::ClassParams = {
		&UInversePhysicsSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UInversePhysicsSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInversePhysicsSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInversePhysicsSkeletalMeshComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UInversePhysicsSkeletalMeshComponent>()
	{
		return UInversePhysicsSkeletalMeshComponent::StaticClass();
	}

	void UInversePhysicsSkeletalMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInversePhysicsSkeletalMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInversePhysicsSkeletalMeshComponent);
	UInversePhysicsSkeletalMeshComponent::~UInversePhysicsSkeletalMeshComponent() {}
	void AOptionalRepGrippableSkeletalMeshActor::StaticRegisterNativesAOptionalRepGrippableSkeletalMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOptionalRepGrippableSkeletalMeshActor);
	UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_NoRegister()
	{
		return AOptionalRepGrippableSkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAttachmentReplication_MetaData[];
#endif
		static void NewProp_bIgnoreAttachmentReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAttachmentReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePhysicsReplication_MetaData[];
#endif
		static void NewProp_bIgnorePhysicsReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsReplication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*  A class specifically for turning off default physics replication with a skeletal mesh and fixing an\n*  engine bug with inversed scale on skeletal meshes. Generally used for the physical hand setup.\n*/" },
#endif
		{ "IncludePath", "Misc/OptionalRepSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A class specifically for turning off default physics replication with a skeletal mesh and fixing an\nengine bug with inversed scale on skeletal meshes. Generally used for the physical hand setup." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_MetaData[] = {
		{ "Category", "Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skips the attachment replication\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the attachment replication" },
#endif
	};
#endif
	void Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_SetBit(void* Obj)
	{
		((AOptionalRepGrippableSkeletalMeshActor*)Obj)->bIgnoreAttachmentReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication = { "bIgnoreAttachmentReplication", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOptionalRepGrippableSkeletalMeshActor), &Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_MetaData), Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_MetaData[] = {
		{ "Category", "Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skips the physics replication\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the physics replication" },
#endif
	};
#endif
	void Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_SetBit(void* Obj)
	{
		((AOptionalRepGrippableSkeletalMeshActor*)Obj)->bIgnorePhysicsReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication = { "bIgnorePhysicsReplication", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOptionalRepGrippableSkeletalMeshActor), &Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_MetaData), Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOptionalRepGrippableSkeletalMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::ClassParams = {
		&AOptionalRepGrippableSkeletalMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor()
	{
		if (!Z_Registration_Info_UClass_AOptionalRepGrippableSkeletalMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOptionalRepGrippableSkeletalMeshActor.OuterSingleton, Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOptionalRepGrippableSkeletalMeshActor.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AOptionalRepGrippableSkeletalMeshActor>()
	{
		return AOptionalRepGrippableSkeletalMeshActor::StaticClass();
	}

	void AOptionalRepGrippableSkeletalMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIgnoreAttachmentReplication(TEXT("bIgnoreAttachmentReplication"));
		static const FName Name_bIgnorePhysicsReplication(TEXT("bIgnorePhysicsReplication"));

		const bool bIsValid = true
			&& Name_bIgnoreAttachmentReplication == ClassReps[(int32)ENetFields_Private::bIgnoreAttachmentReplication].Property->GetFName()
			&& Name_bIgnorePhysicsReplication == ClassReps[(int32)ENetFields_Private::bIgnorePhysicsReplication].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOptionalRepGrippableSkeletalMeshActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOptionalRepGrippableSkeletalMeshActor);
	AOptionalRepGrippableSkeletalMeshActor::~AOptionalRepGrippableSkeletalMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics::ScriptStructInfo[] = {
		{ FSkeletalMeshComponentEndPhysicsTickFunctionVR::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::NewStructOps, TEXT("SkeletalMeshComponentEndPhysicsTickFunctionVR"), &Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunctionVR, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshComponentEndPhysicsTickFunctionVR), 2125319831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNoRepSphereComponent, UNoRepSphereComponent::StaticClass, TEXT("UNoRepSphereComponent"), &Z_Registration_Info_UClass_UNoRepSphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoRepSphereComponent), 773303648U) },
		{ Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent, UInversePhysicsSkeletalMeshComponent::StaticClass, TEXT("UInversePhysicsSkeletalMeshComponent"), &Z_Registration_Info_UClass_UInversePhysicsSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInversePhysicsSkeletalMeshComponent), 4199500288U) },
		{ Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor, AOptionalRepGrippableSkeletalMeshActor::StaticClass, TEXT("AOptionalRepGrippableSkeletalMeshActor"), &Z_Registration_Info_UClass_AOptionalRepGrippableSkeletalMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOptionalRepGrippableSkeletalMeshActor), 1820077585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_1390732703(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
