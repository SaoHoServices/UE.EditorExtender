// Copyright (C) 2021 MoonStudio, Inc. All Rights Reserved.


#include "AssetActionAssist_Example.h"
#include "Framework/Commands/GenericCommands.h"
#include "Widgets/SWindow.h"

#define LOCTEXT_NAMESPACE "AssetActionAssist"

UAssetActionAssist_Example::UAssetActionAssist_Example(const FObjectInitializer &ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClasses.Empty();
}

void UAssetActionAssist_Example::ConstructMenu(FMenuBuilder &MenuBuilder)
{
	MenuBuilder.AddMenuEntry
	(
		NSLOCTEXT("EditorExtender", "Example", "Example"),
		NSLOCTEXT("EditorExtender", "ExampleTooltip", "Operate the selected asset."),
		FSlateIcon(),
		FExecuteAction::CreateUObject(this, &UAssetActionAssist_Example::ExecuteExample)
	);
}

void UAssetActionAssist_Example::ExecuteExample()
{
}

#undef LOCTEXT_NAMESPACE