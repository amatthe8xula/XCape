
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class XScape_API UMySaveGame : public USaveGame
{
	//what actual variable will be saved?
	//UPROPERTY(VisibleWhere?, Catergory = ?)
	//TypeOfD WhatItIsBeingSaved
    GENERATED_BODY()

    public:

    UPROPERTY(VisibleAnywhere, Category = Basic)
    FString PlayerName;

    UPROPERTY(VisibleAnywhere, Category = Basic)
    FString SaveSlotName;

    UPROPERTY(VisibleAnywhere, Category = Basic)
    uint32 UserIndex;

    UMySaveGame();
}
