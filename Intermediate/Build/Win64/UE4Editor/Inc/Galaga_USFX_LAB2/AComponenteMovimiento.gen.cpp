// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB2/AComponenteMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAComponenteMovimiento() {}
// Cross Module References
	GALAGA_USFX_LAB2_API UClass* Z_Construct_UClass_UAComponenteMovimiento_NoRegister();
	GALAGA_USFX_LAB2_API UClass* Z_Construct_UClass_UAComponenteMovimiento();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB2();
// End Cross Module References
	void UAComponenteMovimiento::StaticRegisterNativesUAComponenteMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UAComponenteMovimiento_NoRegister()
	{
		return UAComponenteMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UAComponenteMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoNaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovimientoNaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAComponenteMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAComponenteMovimiento_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AComponenteMovimiento.h" },
		{ "ModuleRelativePath", "AComponenteMovimiento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAComponenteMovimiento_Statics::NewProp_MovimientoNaves_MetaData[] = {
		{ "Comment", "//Definimos la velocidad de las naves\n" },
		{ "ModuleRelativePath", "AComponenteMovimiento.h" },
		{ "ToolTip", "Definimos la velocidad de las naves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAComponenteMovimiento_Statics::NewProp_MovimientoNaves = { "MovimientoNaves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAComponenteMovimiento, MovimientoNaves), METADATA_PARAMS(Z_Construct_UClass_UAComponenteMovimiento_Statics::NewProp_MovimientoNaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAComponenteMovimiento_Statics::NewProp_MovimientoNaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAComponenteMovimiento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAComponenteMovimiento_Statics::NewProp_MovimientoNaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAComponenteMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAComponenteMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAComponenteMovimiento_Statics::ClassParams = {
		&UAComponenteMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAComponenteMovimiento_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAComponenteMovimiento_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAComponenteMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAComponenteMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAComponenteMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAComponenteMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAComponenteMovimiento, 1192742064);
	template<> GALAGA_USFX_LAB2_API UClass* StaticClass<UAComponenteMovimiento>()
	{
		return UAComponenteMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAComponenteMovimiento(Z_Construct_UClass_UAComponenteMovimiento, &UAComponenteMovimiento::StaticClass, TEXT("/Script/Galaga_USFX_LAB2"), TEXT("UAComponenteMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAComponenteMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
