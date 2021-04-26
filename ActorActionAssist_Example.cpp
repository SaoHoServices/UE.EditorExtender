// Copyright (C) 2021 MoonStudio, Inc. All Rights Reserved.


#include "ActorActionAssist_Example.h"
#include "Framework/Commands/GenericCommands.h"

#define LOCTEXT_NAMESPACE "ActorActionAssist"

UActorActionAssist_Example::UActorActionAssist_Example(const FObjectInitializer &ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClasses.Empty();
}

void UActorActionAssist_Example::ConstructMenu(FMenuBuilder &MenuBuilder)
{
	MenuBuilder.AddMenuEntry
	(
		NSLOCTEXT("EditorExtender", "Example", "Example"),
		NSLOCTEXT("EditorExtender", "ExampleTooltip", "Operate the selected asset."),
		FSlateIcon(),
		FExecuteAction::CreateUObject(this, &UActorActionAssist_Example::ExecuteExample)
	);
}

void UActorActionAssist_Example::ExecuteExample()
{
}

#undef LOCTEXT_NAMESPACE