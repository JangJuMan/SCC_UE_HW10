// MyCharacterData.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MyCharacterData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class TEST_API UMyCharacterData : public UObject
{
	GENERATED_BODY()

public:
	UMyCharacterData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacterData")
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacterData")
	int32 Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCharacterData")
	float AttackDamage;
};
