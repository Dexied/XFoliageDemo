// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XFoliage/Public/XFoliageManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXFoliageManager() {}
// Cross Module References
	XFOLIAGE_API UClass* Z_Construct_UClass_AXFoliageManager_NoRegister();
	XFOLIAGE_API UClass* Z_Construct_UClass_AXFoliageManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XFoliage();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	XFOLIAGE_API UClass* Z_Construct_UClass_AXFoliageActor_NoRegister();
// End Cross Module References
	void AXFoliageManager::StaticRegisterNativesAXFoliageManager()
	{
	}
	UClass* Z_Construct_UClass_AXFoliageManager_NoRegister()
	{
		return AXFoliageManager::StaticClass();
	}
	struct Z_Construct_UClass_AXFoliageManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnInterval;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerFoliageRespawnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerFoliageRespawnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRespawnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxRespawnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstTickSkipped_MetaData[];
#endif
		static void NewProp_bFirstTickSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstTickSkipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXFoliageManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XFoliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XFoliageManager.h" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageManager, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageManager, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RespawnInterval_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RespawnInterval = { "RespawnInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageManager, RespawnInterval), METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RespawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RespawnInterval_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors_Inner = { "FoliageActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AXFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors = { "FoliageActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageManager, FoliageActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_PerFoliageRespawnCount_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_PerFoliageRespawnCount = { "PerFoliageRespawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageManager, PerFoliageRespawnCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_PerFoliageRespawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_PerFoliageRespawnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_MaxRespawnCount_MetaData[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_MaxRespawnCount = { "MaxRespawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXFoliageManager, MaxRespawnCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_MaxRespawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_MaxRespawnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/XFoliageManager.h" },
	};
#endif
	void Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped_SetBit(void* Obj)
	{
		((AXFoliageManager*)Obj)->bFirstTickSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped = { "bFirstTickSkipped", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXFoliageManager), &Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXFoliageManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_RespawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_FoliageActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_PerFoliageRespawnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_MaxRespawnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXFoliageManager_Statics::NewProp_bFirstTickSkipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXFoliageManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXFoliageManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXFoliageManager_Statics::ClassParams = {
		&AXFoliageManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AXFoliageManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXFoliageManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXFoliageManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXFoliageManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXFoliageManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXFoliageManager, 2008685367);
	template<> XFOLIAGE_API UClass* StaticClass<AXFoliageManager>()
	{
		return AXFoliageManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXFoliageManager(Z_Construct_UClass_AXFoliageManager, &AXFoliageManager::StaticClass, TEXT("/Script/XFoliage"), TEXT("AXFoliageManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXFoliageManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
