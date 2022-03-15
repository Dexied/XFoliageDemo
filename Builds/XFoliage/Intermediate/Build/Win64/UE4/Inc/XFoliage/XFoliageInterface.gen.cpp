// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XFoliage/Public/XFoliageInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXFoliageInterface() {}
// Cross Module References
	XFOLIAGE_API UClass* Z_Construct_UClass_UXFoliageInterface_NoRegister();
	XFOLIAGE_API UClass* Z_Construct_UClass_UXFoliageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_XFoliage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(IXFoliageInterface::execGetXFoliageName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetXFoliageName_Implementation(Z_Param_Out_OutName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IXFoliageInterface::execXFoliageDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->XFoliageDamage_Implementation(Z_Param_OwnerActor,Z_Param_HitResult,Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IXFoliageInterface::execXFoliageInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->XFoliageInteract_Implementation(Z_Param_OwnerActor,Z_Param_HitResult);
		P_NATIVE_END;
	}
	bool IXFoliageInterface::GetXFoliageName(FText& OutName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetXFoliageName instead.");
		XFoliageInterface_eventGetXFoliageName_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IXFoliageInterface::XFoliageDamage(AActor* OwnerActor, FHitResult HitResult, int32 Damage)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_XFoliageDamage instead.");
		XFoliageInterface_eventXFoliageDamage_Parms Parms;
		return Parms.ReturnValue;
	}
	void IXFoliageInterface::XFoliageInteract(AActor* OwnerActor, FHitResult HitResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_XFoliageInteract instead.");
	}
	void UXFoliageInterface::StaticRegisterNativesUXFoliageInterface()
	{
		UClass* Class = UXFoliageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetXFoliageName", &IXFoliageInterface::execGetXFoliageName },
			{ "XFoliageDamage", &IXFoliageInterface::execXFoliageDamage },
			{ "XFoliageInteract", &IXFoliageInterface::execXFoliageInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::NewProp_OutName = { "OutName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventGetXFoliageName_Parms, OutName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XFoliageInterface_eventGetXFoliageName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XFoliageInterface_eventGetXFoliageName_Parms), &Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::NewProp_OutName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXFoliageInterface, nullptr, "GetXFoliageName", nullptr, nullptr, sizeof(XFoliageInterface_eventGetXFoliageName_Parms), Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventXFoliageDamage_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventXFoliageDamage_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventXFoliageDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventXFoliageDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXFoliageInterface, nullptr, "XFoliageDamage", nullptr, nullptr, sizeof(XFoliageInterface_eventXFoliageDamage_Parms), Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventXFoliageInteract_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XFoliageInterface_eventXFoliageInteract_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "XFoliage" },
		{ "ModuleRelativePath", "Public/XFoliageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXFoliageInterface, nullptr, "XFoliageInteract", nullptr, nullptr, sizeof(XFoliageInterface_eventXFoliageInteract_Parms), Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXFoliageInterface_NoRegister()
	{
		return UXFoliageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UXFoliageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXFoliageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_XFoliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXFoliageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXFoliageInterface_GetXFoliageName, "GetXFoliageName" }, // 514308029
		{ &Z_Construct_UFunction_UXFoliageInterface_XFoliageDamage, "XFoliageDamage" }, // 1993712535
		{ &Z_Construct_UFunction_UXFoliageInterface_XFoliageInteract, "XFoliageInteract" }, // 2355290414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXFoliageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XFoliageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXFoliageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IXFoliageInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXFoliageInterface_Statics::ClassParams = {
		&UXFoliageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UXFoliageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXFoliageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXFoliageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXFoliageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXFoliageInterface, 3280963859);
	template<> XFOLIAGE_API UClass* StaticClass<UXFoliageInterface>()
	{
		return UXFoliageInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXFoliageInterface(Z_Construct_UClass_UXFoliageInterface, &UXFoliageInterface::StaticClass, TEXT("/Script/XFoliage"), TEXT("UXFoliageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXFoliageInterface);
	static FName NAME_UXFoliageInterface_GetXFoliageName = FName(TEXT("GetXFoliageName"));
	bool IXFoliageInterface::Execute_GetXFoliageName(UObject* O, FText& OutName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UXFoliageInterface::StaticClass()));
		XFoliageInterface_eventGetXFoliageName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UXFoliageInterface_GetXFoliageName);
		if (Func)
		{
			Parms.OutName=OutName;
			O->ProcessEvent(Func, &Parms);
			OutName=Parms.OutName;
		}
		else if (auto I = (IXFoliageInterface*)(O->GetNativeInterfaceAddress(UXFoliageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetXFoliageName_Implementation(OutName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UXFoliageInterface_XFoliageDamage = FName(TEXT("XFoliageDamage"));
	int32 IXFoliageInterface::Execute_XFoliageDamage(UObject* O, AActor* OwnerActor, FHitResult HitResult, int32 Damage)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UXFoliageInterface::StaticClass()));
		XFoliageInterface_eventXFoliageDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UXFoliageInterface_XFoliageDamage);
		if (Func)
		{
			Parms.OwnerActor=OwnerActor;
			Parms.HitResult=HitResult;
			Parms.Damage=Damage;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IXFoliageInterface*)(O->GetNativeInterfaceAddress(UXFoliageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->XFoliageDamage_Implementation(OwnerActor,HitResult,Damage);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UXFoliageInterface_XFoliageInteract = FName(TEXT("XFoliageInteract"));
	void IXFoliageInterface::Execute_XFoliageInteract(UObject* O, AActor* OwnerActor, FHitResult HitResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UXFoliageInterface::StaticClass()));
		XFoliageInterface_eventXFoliageInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UXFoliageInterface_XFoliageInteract);
		if (Func)
		{
			Parms.OwnerActor=OwnerActor;
			Parms.HitResult=HitResult;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IXFoliageInterface*)(O->GetNativeInterfaceAddress(UXFoliageInterface::StaticClass())))
		{
			I->XFoliageInteract_Implementation(OwnerActor,HitResult);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
