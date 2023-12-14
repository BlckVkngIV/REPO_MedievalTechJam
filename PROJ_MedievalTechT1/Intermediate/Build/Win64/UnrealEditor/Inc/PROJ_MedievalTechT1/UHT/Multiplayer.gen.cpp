// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROJ_MedievalTechT1/Multiplayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJ_MEDIEVALTECHT1_API UClass* Z_Construct_UClass_AMultiplayer();
	PROJ_MEDIEVALTECHT1_API UClass* Z_Construct_UClass_AMultiplayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PROJ_MedievalTechT1();
// End Cross Module References
	DEFINE_FUNCTION(AMultiplayer::execJoinGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayer::execCreateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSession();
		P_NATIVE_END;
	}
	void AMultiplayer::StaticRegisterNativesAMultiplayer()
	{
		UClass* Class = AMultiplayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSession", &AMultiplayer::execCreateGameSession },
			{ "JoinGameSession", &AMultiplayer::execJoinGameSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayer_CreateGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayer_CreateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Multiplayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayer_CreateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayer, nullptr, "CreateGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayer_CreateGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayer_CreateGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayer_CreateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayer_CreateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayer_JoinGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayer_JoinGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Multiplayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayer_JoinGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayer, nullptr, "JoinGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayer_JoinGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayer_JoinGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayer_JoinGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayer_JoinGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayer);
	UClass* Z_Construct_UClass_AMultiplayer_NoRegister()
	{
		return AMultiplayer::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PROJ_MedievalTechT1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayer_CreateGameSession, "CreateGameSession" }, // 999725590
		{ &Z_Construct_UFunction_AMultiplayer_JoinGameSession, "JoinGameSession" }, // 859936603
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Multiplayer.h" },
		{ "ModuleRelativePath", "Multiplayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayer_Statics::ClassParams = {
		&AMultiplayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayer()
	{
		if (!Z_Registration_Info_UClass_AMultiplayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayer.OuterSingleton, Z_Construct_UClass_AMultiplayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayer.OuterSingleton;
	}
	template<> PROJ_MEDIEVALTECHT1_API UClass* StaticClass<AMultiplayer>()
	{
		return AMultiplayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayer);
	AMultiplayer::~AMultiplayer() {}
	struct Z_CompiledInDeferFile_FID_PROJ_MedievalTechT1_Source_PROJ_MedievalTechT1_Multiplayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJ_MedievalTechT1_Source_PROJ_MedievalTechT1_Multiplayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayer, AMultiplayer::StaticClass, TEXT("AMultiplayer"), &Z_Registration_Info_UClass_AMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayer), 402471971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJ_MedievalTechT1_Source_PROJ_MedievalTechT1_Multiplayer_h_2181598175(TEXT("/Script/PROJ_MedievalTechT1"),
		Z_CompiledInDeferFile_FID_PROJ_MedievalTechT1_Source_PROJ_MedievalTechT1_Multiplayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJ_MedievalTechT1_Source_PROJ_MedievalTechT1_Multiplayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
