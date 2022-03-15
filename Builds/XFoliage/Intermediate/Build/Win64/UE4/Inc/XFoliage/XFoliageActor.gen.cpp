// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XFoliage/Public/XFoliageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXFoliageActor() {}
// Cross Module References
	XFOLIAGE_API UClass* Z_Construct_UClass_AXFoliageActor_NoRegister();
	XFOLIAGE_API UClass* Z_Construct_UClass_AXFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XFoliage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOverlapResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	XFOLIAGE_API UClass* Z_Construct_UClass_UXFoliageInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AXFoliageActor::execMulticast_OnShowDeletedInstances)
	{
		P_GET_TARRAY(uint8,Z_Param_InstancesIndexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnShowDeletedInstances_Implementation(Z_Param_InstancesIndexes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execMulticast_OnHideInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnHideInstance_Implementation(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execMulticast_OnShowInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnShowInstance_Implementation(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execOnShowDeletedInstances)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InstancesIndexes);
		P_GET_UBOOL(Z_Param_bWithEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowDeletedInstances_Implementation(Z_Param_Out_InstancesIndexes,Z_Param_bWithEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execOnHideInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_GET_UBOOL(Z_Param_bWithEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideInstance_Implementation(Z_Param_InstanceIndex,Z_Param_bWithEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execOnShowInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_GET_UBOOL(Z_Param_bWithEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowInstance_Implementation(Z_Param_InstanceIndex,Z_Param_bWithEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execShowDeletedInstances)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_MaxShowCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->ShowDeletedInstances(Z_Param_MaxShowCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execIsRespawnBlock)
	{
		P_GET_TARRAY_REF(FOverlapResult,Z_Param_Out_OverlapResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRespawnBlock(Z_Param_Out_OverlapResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execHideInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HideInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execShowInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execIsInstanceVisible)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInstanceVisible(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execIsValidInstance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execApplyInstanceDamage)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ApplyInstanceDamage_Implementation(Z_Param_InstanceIndex,Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execSetInstanceHealth)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetInstanceHealth_Implementation(Z_Param_InstanceIndex,Z_Param_NewHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execGetInstanceHealth)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstanceHealth_Implementation(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execHideDeletedInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideDeletedInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execOnRep_InstancesDeleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InstancesDeleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execFixFoliage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FixFoliage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXFoliageActor::execRecreateFoliage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecreateFoliage();
		P_NATIVE_END;
	}
	static FName NAME_AXFoliageActor_ApplyInstanceDamage = FName(TEXT("ApplyInstanceDamage"));
	int32 AXFoliageActor::ApplyInstanceDamage(uint8 InstanceIndex, int32 Damage)
	{
		XFoliageActor_eventApplyInstanceDamage_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		Parms.Damage=Damage;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_ApplyInstanceDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AXFoliageActor_GetInstanceHealth = FName(TEXT("GetInstanceHealth"));
	int32 AXFoliageActor::GetInstanceHealth(uint8 InstanceIndex)
	{
		XFoliageActor_eventGetInstanceHealth_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_GetInstanceHealth),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AXFoliageActor_Multicast_OnHideInstance = FName(TEXT("Multicast_OnHideInstance"));
	void AXFoliageActor::Multicast_OnHideInstance(uint8 InstanceIndex)
	{
		XFoliageActor_eventMulticast_OnHideInstance_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_Multicast_OnHideInstance),&Parms);
	}
	static FName NAME_AXFoliageActor_Multicast_OnShowDeletedInstances = FName(TEXT("Multicast_OnShowDeletedInstances"));
	void AXFoliageActor::Multicast_OnShowDeletedInstances(TArray<uint8> const& InstancesIndexes)
	{
		XFoliageActor_eventMulticast_OnShowDeletedInstances_Parms Parms;
		Parms.InstancesIndexes=InstancesIndexes;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_Multicast_OnShowDeletedInstances),&Parms);
	}
	static FName NAME_AXFoliageActor_Multicast_OnShowInstance = FName(TEXT("Multicast_OnShowInstance"));
	void AXFoliageActor::Multicast_OnShowInstance(uint8 InstanceIndex)
	{
		XFoliageActor_eventMulticast_OnShowInstance_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_Multicast_OnShowInstance),&Parms);
	}
	static FName NAME_AXFoliageActor_OnHideInstance = FName(TEXT("OnHideInstance"));
	void AXFoliageActor::OnHideInstance(uint8 InstanceIndex, bool bWithEffects)
	{
		XFoliageActor_eventOnHideInstance_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		Parms.bWithEffects=bWithEffects ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_OnHideInstance),&Parms);
	}
	static FName NAME_AXFoliageActor_OnRep_InstancesDeleted = FName(TEXT("OnRep_InstancesDeleted"));
	void AXFoliageActor::OnRep_InstancesDeleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_OnRep_InstancesDeleted),NULL);
	}
	static FName NAME_AXFoliageActor_OnShowDeletedInstances = FName(TEXT("OnShowDeletedInstances"));
	void AXFoliageActor::OnShowDeletedInstances(TArray<uint8> const& InstancesIndexes, bool bWithEffects)
	{
		XFoliageActor_eventOnShowDeletedInstances_Parms Parms;
		Parms.InstancesIndexes=InstancesIndexes;
		Parms.bWithEffects=bWithEffects ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_OnShowDeletedInstances),&Parms);
	}
	static FName NAME_AXFoliageActor_OnShowInstance = FName(TEXT("OnShowInstance"));
	void AXFoliageActor::OnShowInstance(uint8 InstanceIndex, bool bWithEffects)
	{
		XFoliageActor_eventOnShowInstance_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		Parms.bWithEffects=bWithEffects ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_OnShowInstance),&Parms);
	}
	static FName NAME_AXFoliageActor_SetInstanceHealth = FName(TEXT("SetInstanceHealth"));
	int32 AXFoliageActor::SetInstanceHealth(uint8 InstanceIndex, int32 NewHealth)
	{
		XFoliageActor_eventSetInstanceHealth_Parms Parms;
		Parms.InstanceIndex=InstanceIndex;
		Parms.NewHealth=NewHealth;
		ProcessEvent(FindFunctionChecked(NAME_AXFoliageActor_SetInstanceHealth),&Parms);
		return Parms.ReturnValue;
	}
	void AXFoliageActor::StaticRegisterNativesAXFoliageActor()
	{
		UClass* Class = AXFoliageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyInstanceDamage", &AXFoliageActor::execApplyInstanceDamage },
			{ "FixFoliage", &AXFoliageActor::execFixFoliage },
			{ "GetInstanceHealth", &AXFoliageActor::execGetInstanceHealth },
			{ "HideDeletedInstances", &AXFoliageActor::execHideDeletedInstances },
			{ "HideInstance", &AXFoliageActor::execHideInstance },
			{ "IsInstanceVisible", &AXFoliageActor::execIsInstanceVisible },
			{ "IsRespawnBlock", &AXFoliageActor::execIsRespawnBlock },
			{ "IsValidInstance", &AXFoliageActor::execIsValidInstance },
			{ "Multicast_OnHideInstance", &AXFoliageActor::execMulticast_OnHideInstance },
			{ "Multicast_OnShowDeletedInstances", &AXFoliageActor::execMulticast_OnShowDeletedInstances },
			{ "Multicast_OnShowInstance", &AXFoliageActor::execMulticast_OnShowInstance },
			{ "OnHideInstance", &AXFoliageActor::execOnHideInstance },
			{ "OnRep_InstancesDeleted", &AXFoliageActor::execOnRep_InstancesDeleted },
			{ "OnShowDeletedInstances", &AXFoliageActor::execOnShowDeletedInstances },
			{ "OnShowInstance", &AXFoliageActor::execOnShowInstance },
			{ "RecreateFoliage", &AXFoliageActor::execRecreateFoliage },
			{ "SetInstanceHealth", &AXFoliageActor::execSetInstanceHealth },
			{ "ShowDeletedInstances", &AXFoliageActor::execShowDeletedInstances },
			{ "ShowInstance", &AXFoliageActor::execShowInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventApplyInstanceDamage_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventApplyInstanceDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventApplyInstanceDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "ApplyInstanceDamage", nullptr, nullptr, sizeof(XFoliageActor_eventApplyInstanceDamage_Parms), Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_FixFoliage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_FixFoliage_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_FixFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "FixFoliage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_FixFoliage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_FixFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_FixFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_FixFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventGetInstanceHealth_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventGetInstanceHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "GetInstanceHealth", nullptr, nullptr, sizeof(XFoliageActor_eventGetInstanceHealth_Parms), Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "HideDeletedInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics
	{
		struct XFoliageActor_eventHideInstance_Parms
		{
			uint8 InstanceIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventHideInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XFoliageActor_eventHideInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventHideInstance_Parms), &Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "HideInstance", nullptr, nullptr, sizeof(XFoliageActor_eventHideInstance_Parms), Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_HideInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_HideInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics
	{
		struct XFoliageActor_eventIsInstanceVisible_Parms
		{
			uint8 InstanceIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventIsInstanceVisible_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XFoliageActor_eventIsInstanceVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventIsInstanceVisible_Parms), &Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "IsInstanceVisible", nullptr, nullptr, sizeof(XFoliageActor_eventIsInstanceVisible_Parms), Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics
	{
		struct XFoliageActor_eventIsRespawnBlock_Parms
		{
			TArray<FOverlapResult> OverlapResults;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults_Inner = { "OverlapResults", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOverlapResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults = { "OverlapResults", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventIsRespawnBlock_Parms, OverlapResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults_MetaData)) };
	void Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XFoliageActor_eventIsRespawnBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventIsRespawnBlock_Parms), &Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_OverlapResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "IsRespawnBlock", nullptr, nullptr, sizeof(XFoliageActor_eventIsRespawnBlock_Parms), Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics
	{
		struct XFoliageActor_eventIsValidInstance_Parms
		{
			uint8 InstanceIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventIsValidInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XFoliageActor_eventIsValidInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventIsValidInstance_Parms), &Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "IsValidInstance", nullptr, nullptr, sizeof(XFoliageActor_eventIsValidInstance_Parms), Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_IsValidInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_IsValidInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventMulticast_OnHideInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "Multicast_OnHideInstance", nullptr, nullptr, sizeof(XFoliageActor_eventMulticast_OnHideInstance_Parms), Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstancesIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesIndexes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_Inner = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventMulticast_OnShowDeletedInstances_Parms, InstancesIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "Multicast_OnShowDeletedInstances", nullptr, nullptr, sizeof(XFoliageActor_eventMulticast_OnShowDeletedInstances_Parms), Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventMulticast_OnShowInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "Multicast_OnShowInstance", nullptr, nullptr, sizeof(XFoliageActor_eventMulticast_OnShowInstance_Parms), Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static void NewProp_bWithEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventOnHideInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::NewProp_bWithEffects_SetBit(void* Obj)
	{
		((XFoliageActor_eventOnHideInstance_Parms*)Obj)->bWithEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::NewProp_bWithEffects = { "bWithEffects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventOnHideInstance_Parms), &Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::NewProp_bWithEffects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::NewProp_bWithEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "OnHideInstance", nullptr, nullptr, sizeof(XFoliageActor_eventOnHideInstance_Parms), Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_OnHideInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_OnHideInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "OnRep_InstancesDeleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstancesIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesIndexes;
		static void NewProp_bWithEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_Inner = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventOnShowDeletedInstances_Parms, InstancesIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_MetaData)) };
	void Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_bWithEffects_SetBit(void* Obj)
	{
		((XFoliageActor_eventOnShowDeletedInstances_Parms*)Obj)->bWithEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_bWithEffects = { "bWithEffects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventOnShowDeletedInstances_Parms), &Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_bWithEffects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_InstancesIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::NewProp_bWithEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "OnShowDeletedInstances", nullptr, nullptr, sizeof(XFoliageActor_eventOnShowDeletedInstances_Parms), Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static void NewProp_bWithEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventOnShowInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::NewProp_bWithEffects_SetBit(void* Obj)
	{
		((XFoliageActor_eventOnShowInstance_Parms*)Obj)->bWithEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::NewProp_bWithEffects = { "bWithEffects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventOnShowInstance_Parms), &Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::NewProp_bWithEffects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::NewProp_bWithEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "OnShowInstance", nullptr, nullptr, sizeof(XFoliageActor_eventOnShowInstance_Parms), Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_OnShowInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_OnShowInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_RecreateFoliage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_RecreateFoliage_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_RecreateFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "RecreateFoliage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_RecreateFoliage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_RecreateFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_RecreateFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_RecreateFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewHealth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventSetInstanceHealth_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventSetInstanceHealth_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventSetInstanceHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::NewProp_NewHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "SetInstanceHealth", nullptr, nullptr, sizeof(XFoliageActor_eventSetInstanceHealth_Parms), Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics
	{
		struct XFoliageActor_eventShowDeletedInstances_Parms
		{
			uint8 MaxShowCount;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxShowCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::NewProp_MaxShowCount = { "MaxShowCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventShowDeletedInstances_Parms, MaxShowCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventShowDeletedInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::NewProp_MaxShowCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "ShowDeletedInstances", nullptr, nullptr, sizeof(XFoliageActor_eventShowDeletedInstances_Parms), Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics
	{
		struct XFoliageActor_eventShowInstance_Parms
		{
			uint8 InstanceIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageActor_eventShowInstance_Parms, InstanceIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XFoliageActor_eventShowInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageActor_eventShowInstance_Parms), &Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXFoliageActor, nullptr, "ShowInstance", nullptr, nullptr, sizeof(XFoliageActor_eventShowInstance_Parms), Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXFoliageActor_ShowInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXFoliageActor_ShowInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AXFoliageActor_NoRegister()
	{
		return AXFoliageActor::StaticClass();
	}
	struct Z_Construct_UClass_AXFoliageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HISMComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HISMComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInstanceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxInstanceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignToNormal_MetaData[];
#endif
		static void NewProp_bAlignToNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignToNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomPitch_MetaData[];
#endif
		static void NewProp_bRandomPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomYaw_MetaData[];
#endif
		static void NewProp_bRandomYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomRoll_MetaData[];
#endif
		static void NewProp_bRandomRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomRoll;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FindPlaceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindPlaceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FindPlaceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLandscape_MetaData[];
#endif
		static void NewProp_bIgnoreLandscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLandscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStaticMesh_MetaData[];
#endif
		static void NewProp_bIgnoreStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSkeletalMesh_MetaData[];
#endif
		static void NewProp_bIgnoreSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockDetectRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockDetectRadius;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlockRespawnActorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockRespawnActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockRespawnActorClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEffects_MetaData[];
#endif
		static void NewProp_bEnableEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FXSystemScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FXSystemScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowFXSystemAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ShowFXSystemAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowSoundBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ShowSoundBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideFXSystemAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HideFXSystemAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideSoundBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HideSoundBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDefaultXFoliageInteract_MetaData[];
#endif
		static void NewProp_bEnableDefaultXFoliageInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDefaultXFoliageInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDefaultXFoliageDamage_MetaData[];
#endif
		static void NewProp_bEnableDefaultXFoliageDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDefaultXFoliageDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultXFoliageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultXFoliageName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageInstancesTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageInstancesTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageInstancesTransforms;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstancesDeleted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesDeleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstancesLoaded_MetaData[];
#endif
		static void NewProp_bInstancesLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstancesLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXFoliageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XFoliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AXFoliageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AXFoliageActor_ApplyInstanceDamage, "ApplyInstanceDamage" }, // 205636522
		{ &Z_Construct_UFunction_AXFoliageActor_FixFoliage, "FixFoliage" }, // 533650634
		{ &Z_Construct_UFunction_AXFoliageActor_GetInstanceHealth, "GetInstanceHealth" }, // 1879232355
		{ &Z_Construct_UFunction_AXFoliageActor_HideDeletedInstances, "HideDeletedInstances" }, // 461759776
		{ &Z_Construct_UFunction_AXFoliageActor_HideInstance, "HideInstance" }, // 881028408
		{ &Z_Construct_UFunction_AXFoliageActor_IsInstanceVisible, "IsInstanceVisible" }, // 1346577543
		{ &Z_Construct_UFunction_AXFoliageActor_IsRespawnBlock, "IsRespawnBlock" }, // 2874738441
		{ &Z_Construct_UFunction_AXFoliageActor_IsValidInstance, "IsValidInstance" }, // 361317479
		{ &Z_Construct_UFunction_AXFoliageActor_Multicast_OnHideInstance, "Multicast_OnHideInstance" }, // 500598503
		{ &Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowDeletedInstances, "Multicast_OnShowDeletedInstances" }, // 2062336553
		{ &Z_Construct_UFunction_AXFoliageActor_Multicast_OnShowInstance, "Multicast_OnShowInstance" }, // 2992900131
		{ &Z_Construct_UFunction_AXFoliageActor_OnHideInstance, "OnHideInstance" }, // 899503365
		{ &Z_Construct_UFunction_AXFoliageActor_OnRep_InstancesDeleted, "OnRep_InstancesDeleted" }, // 968259896
		{ &Z_Construct_UFunction_AXFoliageActor_OnShowDeletedInstances, "OnShowDeletedInstances" }, // 2429290431
		{ &Z_Construct_UFunction_AXFoliageActor_OnShowInstance, "OnShowInstance" }, // 268876792
		{ &Z_Construct_UFunction_AXFoliageActor_RecreateFoliage, "RecreateFoliage" }, // 3716640152
		{ &Z_Construct_UFunction_AXFoliageActor_SetInstanceHealth, "SetInstanceHealth" }, // 1071741294
		{ &Z_Construct_UFunction_AXFoliageActor_ShowDeletedInstances, "ShowDeletedInstances" }, // 1620527595
		{ &Z_Construct_UFunction_AXFoliageActor_ShowInstance, "ShowInstance" }, // 3282813304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XFoliageActor.h" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HISMComponent_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HISMComponent = { "HISMComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, HISMComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HISMComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HISMComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstanceStaticMesh_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstanceStaticMesh = { "InstanceStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, InstanceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstanceStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstanceStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxInstanceCount_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxInstanceCount = { "MaxInstanceCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, MaxInstanceCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxInstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxInstanceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxSpawnRadius_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxSpawnRadius = { "MaxSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, MaxSpawnRadius), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxSpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxSpawnRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InitialSeed_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, InitialSeed), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InitialSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InitialSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, MinScale), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, MaxScale), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bAlignToNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal = { "bAlignToNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bRandomPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch = { "bRandomPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bRandomYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw = { "bRandomYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bRandomRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll = { "bRandomRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes_Inner = { "FindPlaceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes_MetaData[] = {
		{ "Category", "XFoliage|Rules" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes = { "FindPlaceObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, FindPlaceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape_MetaData[] = {
		{ "Category", "XFoliage|Rules" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bIgnoreLandscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape = { "bIgnoreLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh_MetaData[] = {
		{ "Category", "XFoliage|Rules" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bIgnoreStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh = { "bIgnoreStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh_MetaData[] = {
		{ "Category", "XFoliage|Rules" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bIgnoreSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh = { "bIgnoreSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, StartCullDistance), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_StartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, EndCullDistance), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_EndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockDetectRadius_MetaData[] = {
		{ "Category", "XFoliage|Respawn" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockDetectRadius = { "BlockDetectRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, BlockDetectRadius), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockDetectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockDetectRadius_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses_Inner = { "BlockRespawnActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses_MetaData[] = {
		{ "Category", "XFoliage|Respawn" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses = { "BlockRespawnActorClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, BlockRespawnActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects_MetaData[] = {
		{ "Category", "XFoliage|Effects" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bEnableEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects = { "bEnableEffects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FXSystemScaleMultiplier_MetaData[] = {
		{ "Category", "XFoliage|Effects" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FXSystemScaleMultiplier = { "FXSystemScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, FXSystemScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FXSystemScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FXSystemScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowFXSystemAsset_MetaData[] = {
		{ "Category", "XFoliage|Effects" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowFXSystemAsset = { "ShowFXSystemAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, ShowFXSystemAsset), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowFXSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowFXSystemAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowSoundBase_MetaData[] = {
		{ "Category", "XFoliage|Effects" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowSoundBase = { "ShowSoundBase", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, ShowSoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowSoundBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowSoundBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideFXSystemAsset_MetaData[] = {
		{ "Category", "XFoliage|Effects" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideFXSystemAsset = { "HideFXSystemAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, HideFXSystemAsset), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideFXSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideFXSystemAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideSoundBase_MetaData[] = {
		{ "Category", "XFoliage|Effects" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideSoundBase = { "HideSoundBase", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, HideSoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideSoundBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideSoundBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract_MetaData[] = {
		{ "Category", "XFoliage|Interface" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bEnableDefaultXFoliageInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract = { "bEnableDefaultXFoliageInteract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage_MetaData[] = {
		{ "Category", "XFoliage|Interface" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bEnableDefaultXFoliageDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage = { "bEnableDefaultXFoliageDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_DefaultXFoliageName_MetaData[] = {
		{ "Category", "XFoliage|Interface" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_DefaultXFoliageName = { "DefaultXFoliageName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, DefaultXFoliageName), METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_DefaultXFoliageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_DefaultXFoliageName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms_Inner = { "FoliageInstancesTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms_MetaData[] = {
		{ "Category", "XFoliage|Instances" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms = { "FoliageInstancesTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, FoliageInstancesTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted_Inner = { "InstancesDeleted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted = { "InstancesDeleted", "OnRep_InstancesDeleted", (EPropertyFlags)0x0020080100000024, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageActor, InstancesDeleted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/XFoliageActor.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded_SetBit(void* Obj)
	{
		((AXFoliageActor*)Obj)->bInstancesLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded = { "bInstancesLoaded", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageActor), &Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXFoliageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HISMComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstanceStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxInstanceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxSpawnRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InitialSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MinScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_MaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bAlignToNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bRandomRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FindPlaceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreLandscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bIgnoreSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_StartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockDetectRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_BlockRespawnActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FXSystemScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowFXSystemAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_ShowSoundBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideFXSystemAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_HideSoundBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bEnableDefaultXFoliageDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_DefaultXFoliageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_FoliageInstancesTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_InstancesDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageActor_Statics::NewProp_bInstancesLoaded,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AXFoliageActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UXFoliageInterface_NoRegister, (int32)VTABLE_OFFSET(AXFoliageActor, IXFoliageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXFoliageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXFoliageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXFoliageActor_Statics::ClassParams = {
		&AXFoliageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AXFoliageActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXFoliageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXFoliageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXFoliageActor, 2645413355);
	template<> XFOLIAGE_API UClass* StaticClass<AXFoliageActor>()
	{
		return AXFoliageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXFoliageActor(Z_Construct_UClass_AXFoliageActor, &AXFoliageActor::StaticClass, TEXT("/Script/XFoliage"), TEXT("AXFoliageActor"), false, nullptr, nullptr, nullptr);

	void AXFoliageActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InstancesDeleted(TEXT("InstancesDeleted"));

		const bool bIsValid = true
			&& Name_InstancesDeleted == ClassReps[(int32)ENetFields_Private::InstancesDeleted].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AXFoliageActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXFoliageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
