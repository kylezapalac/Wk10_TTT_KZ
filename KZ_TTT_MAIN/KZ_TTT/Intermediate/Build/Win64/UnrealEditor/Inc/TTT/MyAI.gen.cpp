// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTT/MyAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAI() {}
// Cross Module References
	TTT_API UClass* Z_Construct_UClass_UMyAI_NoRegister();
	TTT_API UClass* Z_Construct_UClass_UMyAI();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TTT();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMyAI::StaticRegisterNativesUMyAI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAI);
	UClass* Z_Construct_UClass_UMyAI_NoRegister()
	{
		return UMyAI::StaticClass();
	}
	struct Z_Construct_UClass_UMyAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_managerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_managerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TTT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyAI.h" },
		{ "ModuleRelativePath", "MyAI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAI_Statics::NewProp_managerActor_MetaData[] = {
		{ "Category", "MyAI" },
		{ "Comment", "//TSubclassOf<class AClass> manager;\n" },
		{ "ModuleRelativePath", "MyAI.h" },
		{ "ToolTip", "TSubclassOf<class AClass> manager;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAI_Statics::NewProp_managerActor = { "managerActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyAI, managerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyAI_Statics::NewProp_managerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAI_Statics::NewProp_managerActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAI_Statics::NewProp_managerActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAI_Statics::ClassParams = {
		&UMyAI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyAI_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAI()
	{
		if (!Z_Registration_Info_UClass_UMyAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAI.OuterSingleton, Z_Construct_UClass_UMyAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAI.OuterSingleton;
	}
	template<> TTT_API UClass* StaticClass<UMyAI>()
	{
		return UMyAI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAI);
	struct Z_CompiledInDeferFile_FID_KZ_TTT_Source_TTT_MyAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KZ_TTT_Source_TTT_MyAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAI, UMyAI::StaticClass, TEXT("UMyAI"), &Z_Registration_Info_UClass_UMyAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAI), 285285232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KZ_TTT_Source_TTT_MyAI_h_4196633756(TEXT("/Script/TTT"),
		Z_CompiledInDeferFile_FID_KZ_TTT_Source_TTT_MyAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KZ_TTT_Source_TTT_MyAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
