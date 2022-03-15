// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOverlapResult;
#ifdef XFOLIAGE_XFoliageActor_generated_h
#error "XFoliageActor.generated.h already included, missing '#pragma once' in XFoliageActor.h"
#endif
#define XFOLIAGE_XFoliageActor_generated_h

#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_SPARSE_DATA
#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_RPC_WRAPPERS \
	virtual void Multicast_OnShowDeletedInstances_Implementation(TArray<uint8> const& InstancesIndexes); \
	virtual void Multicast_OnHideInstance_Implementation(uint8 InstanceIndex); \
	virtual void Multicast_OnShowInstance_Implementation(uint8 InstanceIndex); \
	virtual void OnShowDeletedInstances_Implementation(TArray<uint8> const& InstancesIndexes, bool bWithEffects); \
	virtual void OnHideInstance_Implementation(uint8 InstanceIndex, bool bWithEffects); \
	virtual void OnShowInstance_Implementation(uint8 InstanceIndex, bool bWithEffects); \
	virtual int32 ApplyInstanceDamage_Implementation(uint8 InstanceIndex, int32 Damage); \
	virtual int32 SetInstanceHealth_Implementation(uint8 InstanceIndex, int32 NewHealth); \
	virtual int32 GetInstanceHealth_Implementation(uint8 InstanceIndex); \
	virtual void OnRep_InstancesDeleted_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnShowDeletedInstances); \
	DECLARE_FUNCTION(execMulticast_OnHideInstance); \
	DECLARE_FUNCTION(execMulticast_OnShowInstance); \
	DECLARE_FUNCTION(execOnShowDeletedInstances); \
	DECLARE_FUNCTION(execOnHideInstance); \
	DECLARE_FUNCTION(execOnShowInstance); \
	DECLARE_FUNCTION(execShowDeletedInstances); \
	DECLARE_FUNCTION(execIsRespawnBlock); \
	DECLARE_FUNCTION(execHideInstance); \
	DECLARE_FUNCTION(execShowInstance); \
	DECLARE_FUNCTION(execIsInstanceVisible); \
	DECLARE_FUNCTION(execIsValidInstance); \
	DECLARE_FUNCTION(execApplyInstanceDamage); \
	DECLARE_FUNCTION(execSetInstanceHealth); \
	DECLARE_FUNCTION(execGetInstanceHealth); \
	DECLARE_FUNCTION(execHideDeletedInstances); \
	DECLARE_FUNCTION(execOnRep_InstancesDeleted); \
	DECLARE_FUNCTION(execFixFoliage); \
	DECLARE_FUNCTION(execRecreateFoliage);


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulticast_OnShowDeletedInstances); \
	DECLARE_FUNCTION(execMulticast_OnHideInstance); \
	DECLARE_FUNCTION(execMulticast_OnShowInstance); \
	DECLARE_FUNCTION(execOnShowDeletedInstances); \
	DECLARE_FUNCTION(execOnHideInstance); \
	DECLARE_FUNCTION(execOnShowInstance); \
	DECLARE_FUNCTION(execShowDeletedInstances); \
	DECLARE_FUNCTION(execIsRespawnBlock); \
	DECLARE_FUNCTION(execHideInstance); \
	DECLARE_FUNCTION(execShowInstance); \
	DECLARE_FUNCTION(execIsInstanceVisible); \
	DECLARE_FUNCTION(execIsValidInstance); \
	DECLARE_FUNCTION(execApplyInstanceDamage); \
	DECLARE_FUNCTION(execSetInstanceHealth); \
	DECLARE_FUNCTION(execGetInstanceHealth); \
	DECLARE_FUNCTION(execHideDeletedInstances); \
	DECLARE_FUNCTION(execOnRep_InstancesDeleted); \
	DECLARE_FUNCTION(execFixFoliage); \
	DECLARE_FUNCTION(execRecreateFoliage);


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_EVENT_PARMS \
	struct XFoliageActor_eventApplyInstanceDamage_Parms \
	{ \
		uint8 InstanceIndex; \
		int32 Damage; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		XFoliageActor_eventApplyInstanceDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct XFoliageActor_eventGetInstanceHealth_Parms \
	{ \
		uint8 InstanceIndex; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		XFoliageActor_eventGetInstanceHealth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct XFoliageActor_eventMulticast_OnHideInstance_Parms \
	{ \
		uint8 InstanceIndex; \
	}; \
	struct XFoliageActor_eventMulticast_OnShowDeletedInstances_Parms \
	{ \
		TArray<uint8> InstancesIndexes; \
	}; \
	struct XFoliageActor_eventMulticast_OnShowInstance_Parms \
	{ \
		uint8 InstanceIndex; \
	}; \
	struct XFoliageActor_eventOnHideInstance_Parms \
	{ \
		uint8 InstanceIndex; \
		bool bWithEffects; \
	}; \
	struct XFoliageActor_eventOnShowDeletedInstances_Parms \
	{ \
		TArray<uint8> InstancesIndexes; \
		bool bWithEffects; \
	}; \
	struct XFoliageActor_eventOnShowInstance_Parms \
	{ \
		uint8 InstanceIndex; \
		bool bWithEffects; \
	}; \
	struct XFoliageActor_eventSetInstanceHealth_Parms \
	{ \
		uint8 InstanceIndex; \
		int32 NewHealth; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		XFoliageActor_eventSetInstanceHealth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_CALLBACK_WRAPPERS
#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXFoliageActor(); \
	friend struct Z_Construct_UClass_AXFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AXFoliageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XFoliage"), NO_API) \
	DECLARE_SERIALIZER(AXFoliageActor) \
	virtual UObject* _getUObject() const override { return const_cast<AXFoliageActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InstancesDeleted=NETFIELD_REP_START, \
		NETFIELD_REP_END=InstancesDeleted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAXFoliageActor(); \
	friend struct Z_Construct_UClass_AXFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AXFoliageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XFoliage"), NO_API) \
	DECLARE_SERIALIZER(AXFoliageActor) \
	virtual UObject* _getUObject() const override { return const_cast<AXFoliageActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InstancesDeleted=NETFIELD_REP_START, \
		NETFIELD_REP_END=InstancesDeleted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXFoliageActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXFoliageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXFoliageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXFoliageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXFoliageActor(AXFoliageActor&&); \
	NO_API AXFoliageActor(const AXFoliageActor&); \
public:


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXFoliageActor(AXFoliageActor&&); \
	NO_API AXFoliageActor(const AXFoliageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXFoliageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXFoliageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AXFoliageActor)


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstancesDeleted() { return STRUCT_OFFSET(AXFoliageActor, InstancesDeleted); } \
	FORCEINLINE static uint32 __PPO__bInstancesLoaded() { return STRUCT_OFFSET(AXFoliageActor, bInstancesLoaded); }


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_17_PROLOG \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_EVENT_PARMS


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_SPARSE_DATA \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_RPC_WRAPPERS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_CALLBACK_WRAPPERS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_INCLASS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_SPARSE_DATA \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_CALLBACK_WRAPPERS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XFOLIAGE_API UClass* StaticClass<class AXFoliageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
