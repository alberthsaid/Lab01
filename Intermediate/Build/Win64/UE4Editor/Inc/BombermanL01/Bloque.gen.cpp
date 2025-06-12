// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BombermanL01/Bloque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}
// Cross Module References
	BOMBERMANL01_API UClass* Z_Construct_UClass_ABloque_NoRegister();
	BOMBERMANL01_API UClass* Z_Construct_UClass_ABloque();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BombermanL01();
// End Cross Module References
	void ABloque::StaticRegisterNativesABloque()
	{
	}
	UClass* Z_Construct_UClass_ABloque_NoRegister()
	{
		return ABloque::StaticClass();
	}
	struct Z_Construct_UClass_ABloque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaMaxima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaMaxima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaMinima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaMinima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadRotacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadRotacion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BombermanL01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMaxima_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMaxima = { "AlturaMaxima", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, AlturaMaxima), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMaxima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMaxima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMinima_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMinima = { "AlturaMinima", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, AlturaMinima), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMinima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMinima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadRotacion_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadRotacion = { "VelocidadRotacion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, VelocidadRotacion), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadRotacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadRotacion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMaxima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_AlturaMinima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_VelocidadRotacion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
		&ABloque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloque_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloque, 2377098415);
	template<> BOMBERMANL01_API UClass* StaticClass<ABloque>()
	{
		return ABloque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloque(Z_Construct_UClass_ABloque, &ABloque::StaticClass, TEXT("/Script/BombermanL01"), TEXT("ABloque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
