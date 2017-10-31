// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	SHADOWMINIONS2_API UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateHealth();
	SHADOWMINIONS2_API UClass* Z_Construct_UClass_ABaseCharacter();
	SHADOWMINIONS2_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShadowMinions2();
// End Cross Module References
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateHealth", (Native)&ABaseCharacter::execCalculateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateHealth()
	{
		struct BaseCharacter_eventCalculateHealth_Parms
		{
			float delta;
		};
		UObject* Outer = Z_Construct_UClass_ABaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(BaseCharacter_eventCalculateHealth_Parms));
			UProperty* NewProp_delta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("delta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(delta, BaseCharacter_eventCalculateHealth_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Step 5: Expose a method"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_ShadowMinions2();
			OuterClass = ABaseCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABaseCharacter_CalculateHealth());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isDead, ABaseCharacter);
				UProperty* NewProp_isDead = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isDead"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isDead, ABaseCharacter), 0x0010000000020015, CPP_BOOL_PROPERTY_BITMASK(isDead, ABaseCharacter), sizeof(bool), true);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, ABaseCharacter), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABaseCharacter_CalculateHealth(), "CalculateHealth"); // 571839605
				static TCppClassTypeInfo<TCppClassTypeTraits<ABaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BaseCharacter.h"));
				MetaData->SetValue(NewProp_isDead, TEXT("Category"), TEXT("BaseCharacter"));
				MetaData->SetValue(NewProp_isDead, TEXT("ModuleRelativePath"), TEXT("BaseCharacter.h"));
				MetaData->SetValue(NewProp_isDead, TEXT("ToolTip"), TEXT("Step 3: Expose a boolean property"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("BaseCharacter"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("BaseCharacter.h"));
				MetaData->SetValue(NewProp_Health, TEXT("ToolTip"), TEXT("Step 2: Expose a float property"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter, 624020415);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/ShadowMinions2"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
