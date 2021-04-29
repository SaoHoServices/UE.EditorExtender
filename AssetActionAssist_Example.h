// Copyright (C) 2021 MoonStudio, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionAssist.h"
#include "AssetActionAssist_Example.generated.h"

UCLASS()
class UAssetActionAssist_Example : public UAssetActionAssist
{
	GENERATED_UCLASS_BODY()

public:
	virtual void ConstructMenu(FMenuBuilder &MenuBuilder) override;

private:
	void ExecuteExample();
};
