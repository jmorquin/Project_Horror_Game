// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterMovementCompTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_CharacterMovementCompTypes_generated_h
#error "CharacterMovementCompTypes.generated.h already included, missing '#pragma once' in CharacterMovementCompTypes.h"
#endif
#define VREXPANSIONPLUGIN_CharacterMovementCompTypes_generated_h

#define FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionContainer>();

#define FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_339_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionArray>();

#define FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep>();

#define FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_514_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jules_Documents_Unreal_Projects_Project_Horror_Game_Plugins_VRExansionPlugin_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h


#define FOREACH_ENUM_EVRMOVEACTION(op) \
	op(EVRMoveAction::VRMOVEACTION_None) \
	op(EVRMoveAction::VRMOVEACTION_SnapTurn) \
	op(EVRMoveAction::VRMOVEACTION_Teleport) \
	op(EVRMoveAction::VRMOVEACTION_StopAllMovement) \
	op(EVRMoveAction::VRMOVEACTION_SetRotation) \
	op(EVRMoveAction::VRMOVEACTION_PauseTracking) \
	op(EVRMoveAction::VRMOVEACTION_SetGravityDirection) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM1) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM2) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM3) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM4) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM5) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM6) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM7) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM8) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM9) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM10) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM11) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM12) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM13) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM14) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM15) 

enum class EVRMoveAction : uint8;
template<> struct TIsUEnumClass<EVRMoveAction> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>();

#define FOREACH_ENUM_EVRMOVEACTIONVELOCITYRETENTION(op) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn) 

enum class EVRMoveActionVelocityRetention : uint8;
template<> struct TIsUEnumClass<EVRMoveActionVelocityRetention> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>();

#define FOREACH_ENUM_EVRMOVEACTIONDATAREQ(op) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_None) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT) 

enum class EVRMoveActionDataReq : uint8;
template<> struct TIsUEnumClass<EVRMoveActionDataReq> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
