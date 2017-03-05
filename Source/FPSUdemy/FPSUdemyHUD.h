// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "FPSUdemyHUD.generated.h"

UCLASS()
class AFPSUdemyHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSUdemyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

