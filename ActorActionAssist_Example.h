// Copyright (C) 2021 MoonStudio, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActorActionAssist.h"
#include "ActorActionAssist_Renamer.generated.h"

UCLASS()
class UActorActionAssist_Example : public UActorActionAssist
{
	GENERATED_UCLASS_BODY()

public:
	virtual void ConstructMenu(FMenuBuilder &MenuBuilder) override;

private:
	void ExecuteExample();
};
