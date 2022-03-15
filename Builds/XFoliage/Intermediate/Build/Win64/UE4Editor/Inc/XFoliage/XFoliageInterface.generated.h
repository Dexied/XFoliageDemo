// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef XFOLIAGE_XFoliageInterface_generated_h
#error "XFoliageInterface.generated.h already included, missing '#pragma once' in XFoliageInterface.h"
#endif
#define XFOLIAGE_XFoliageInterface_generated_h

#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_SPARSE_DATA
#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_RPC_WRAPPERS \
	virtual bool GetXFoliageName_Implementation(FText& OutName) { return false; }; \
	virtual int32 XFoliageDamage_Implementation(AActor* OwnerActor, FHitResult HitResult, int32 Damage) { return 0; }; \
	virtual void XFoliageInteract_Implementation(AActor* OwnerActor, FHitResult HitResult) {}; \
 \
	DECLARE_FUNCTION(execGetXFoliageName); \
	DECLARE_FUNCTION(execXFoliageDamage); \
	DECLARE_FUNCTION(execXFoliageInteract);


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetXFoliageName_Implementation(FText& OutName) { return false; }; \
	virtual int32 XFoliageDamage_Implementation(AActor* OwnerActor, FHitResult HitResult, int32 Damage) { return 0; }; \
	virtual void XFoliageInteract_Implementation(AActor* OwnerActor, FHitResult HitResult) {}; \
 \
	DECLARE_FUNCTION(execGetXFoliageName); \
	DECLARE_FUNCTION(execXFoliageDamage); \
	DECLARE_FUNCTION(execXFoliageInteract);


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_EVENT_PARMS \
	struct XFoliageInterface_eventGetXFoliageName_Parms \
	{ \
		FText OutName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		XFoliageInterface_eventGetXFoliageName_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct XFoliageInterface_eventXFoliageDamage_Parms \
	{ \
		AActor* OwnerActor; \
		FHitResult HitResult; \
		int32 Damage; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		XFoliageInterface_eventXFoliageDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct XFoliageInterface_eventXFoliageInteract_Parms \
	{ \
		AActor* OwnerActor; \
		FHitResult HitResult; \
	};


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XFOLIAGE_API UXFoliageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXFoliageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XFOLIAGE_API, UXFoliageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXFoliageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	XFOLIAGE_API UXFoliageInterface(UXFoliageInterface&&); \
	XFOLIAGE_API UXFoliageInterface(const UXFoliageInterface&); \
public:


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XFOLIAGE_API UXFoliageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	XFOLIAGE_API UXFoliageInterface(UXFoliageInterface&&); \
	XFOLIAGE_API UXFoliageInterface(const UXFoliageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XFOLIAGE_API, UXFoliageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXFoliageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXFoliageInterface)


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUXFoliageInterface(); \
	friend struct Z_Construct_UClass_UXFoliageInterface_Statics; \
public: \
	DECLARE_CLASS(UXFoliageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/XFoliage"), XFOLIAGE_API) \
	DECLARE_SERIALIZER(UXFoliageInterface)


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IXFoliageInterface() {} \
public: \
	typedef UXFoliageInterface UClassType; \
	typedef IXFoliageInterface ThisClass; \
	static bool Execute_GetXFoliageName(UObject* O, FText& OutName); \
	static int32 Execute_XFoliageDamage(UObject* O, AActor* OwnerActor, FHitResult HitResult, int32 Damage); \
	static void Execute_XFoliageInteract(UObject* O, AActor* OwnerActor, FHitResult HitResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IXFoliageInterface() {} \
public: \
	typedef UXFoliageInterface UClassType; \
	typedef IXFoliageInterface ThisClass; \
	static bool Execute_GetXFoliageName(UObject* O, FText& OutName); \
	static int32 Execute_XFoliageDamage(UObject* O, AActor* OwnerActor, FHitResult HitResult, int32 Damage); \
	static void Execute_XFoliageInteract(UObject* O, AActor* OwnerActor, FHitResult HitResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_15_PROLOG \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_EVENT_PARMS


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_SPARSE_DATA \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_RPC_WRAPPERS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_SPARSE_DATA \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XFOLIAGE_API UClass* StaticClass<class UXFoliageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_XFoliage_Source_XFoliage_Public_XFoliageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
