// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VocallyImpairedCharacter.generated.h"

UCLASS(config=Game)
class AVocallyImpairedCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	virtual void Tick(float DeltaTime) override;

	void MoveRight(float Val);

	float currentDirection;

public:
	AVocallyImpairedCharacter();

	/** Called for side to side input */
	UFUNCTION(BlueprintCallable, Category = "IHT Functions")
		void ChangeDirection(float direction);

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
