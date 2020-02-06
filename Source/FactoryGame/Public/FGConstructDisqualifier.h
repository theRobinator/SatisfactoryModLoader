// Copyright 2018 Coffee Stain Studios. All Rights Reserved.

#pragma once
#include "SubclassOf.h"
#include "UObject/Class.h"

#include "Object.h"
#include "FGConstructDisqualifier.generated.h"

#define LOCTEXT_NAMESPACE "Construct Disqualifiers" 

/**
 * This specifies the reason why the player could not build.
 */
UCLASS( Blueprintable, Abstract )
class FACTORYGAME_API UFGConstructDisqualifier : public UObject
{
	GENERATED_BODY()

public:
	UFGConstructDisqualifier() :
		mDisqfualifyingText( LOCTEXT( "UFGConstructDisqualifier", "This should never be seen!" ) )
	{
	}

	/** Getter for mDisfualifyingText */
	UFUNCTION( BlueprintPure )
	static FText GetDisqualifyingText( TSubclassOf< UFGConstructDisqualifier > inClass );

protected:

	/** Text displayed to the player when they couldn't build */
	UPROPERTY( EditDefaultsOnly )
	FText mDisqfualifyingText;
};

UCLASS()
class FACTORYGAME_API UFGCDInitializing : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDInitializing()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDInitializing", "Initializing" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDInvalidAimLocation : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDInvalidAimLocation()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDInvalidAimLocation", "Invalid Aim Location!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDUnaffordable : public UFGConstructDisqualifier
{
	GENERATED_BODY()
	
	UFGCDUnaffordable()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDUnaffordable", "Can't Afford!" );
	}
};


UCLASS()
class FACTORYGAME_API UFGCDInvalidPlacement : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDInvalidPlacement()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDInvalidPlacement", "Invalid Placement!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDEncroachingClearance : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDEncroachingClearance()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDEncroachingClearance", "Encroaching other's Clearance!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDEncroachingPlayer : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDEncroachingPlayer()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDEncroachingPlayer", "A player is in the way!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDInvalidFloor : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDInvalidFloor()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDInvalidFloor", "Floor is too Steep!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDUniqueBuilding : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDUniqueBuilding()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDUniqueBuilding", "You can only build one!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDMustSnap : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDMustSnap()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDMustSnap", "Must snap to a foundation or similar!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDShouldntSnap : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDShouldntSnap()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDShouldntSnap", "This building can't snap to foundations!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDNeedsResourceNode : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDNeedsResourceNode()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDNeedsResourceNode", "You need to place this on a Resource Node!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDResourceNodeIsOccuped : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDResourceNodeIsOccuped()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDResourceNodeIsOccuped", "Resource Node is Occupied!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDResourceDeposit : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDResourceDeposit()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDResourceDeposit", "You can't place a Resource Extractor on a Resource Deposit, it needs a Resource Node!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDWireSnap : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDWireSnap()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDWireSnap", "You need to hook this up to a connection!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDWireTooLong : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDWireTooLong()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDWireTooLong", "Wire is too long!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDWireTooManyConnections : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDWireTooManyConnections()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDWireTooManyConnections", "You can't connect more lines to this connection!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDBeltMustSnap : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDBeltMustSnap()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDBeltMustSnap", "The Conveyor Belt must snap to a Conveyor Pole or an Input/Output of a building!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDConveyorTooLong : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDConveyorTooLong()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDConveyorTooLong", "The Conveyor Belt is too long!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDConveyorTooShort : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDConveyorTooShort()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDConveyorTooShort", "The Conveyor Belt is too short!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDConveyorTooSteep : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDConveyorTooSteep()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDConveyorTooSteep", "The Conveyor Belt is too steep!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDConveyorInvalidShape : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDConveyorInvalidShape()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDConveyorInvalidShape", "The Conveyor Belt has an invalid shape!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDConveyorAttachmentTooSharpTurn : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDConveyorAttachmentTooSharpTurn()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDConveyorAttachmentTooSharpTurn", "The turn of the belt is too sharp of an attachment!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDMustHaveRailRoadTrack : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDMustHaveRailRoadTrack()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDMustHaveRailRoadTrack", "This must be placed on a railroad track!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDMustAttachToTrainPlatform : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDMustAttachToTrainPlatform()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDMustAttachToTrainPlatform", "This must be placed inline with another train platform!" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDTrackTooLong : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDTrackTooLong()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDTrackTooLong", "The Railroad Track is too long" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDTrackTooShort : public UFGConstructDisqualifier
{
	GENERATED_BODY()

		UFGCDTrackTooShort()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDTrackTooShort", "The Railroad Track is too short" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDTrackTooSteep : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDTrackTooSteep()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDTrackTooSteep", "The Railroad Track is too steep" );
	}
};

UCLASS()
class FACTORYGAME_API UFGCDTrackTrunToSharp : public UFGConstructDisqualifier
{
	GENERATED_BODY()

	UFGCDTrackTrunToSharp()
	{
		mDisqfualifyingText = LOCTEXT( "UFGCDTrackTrunToSharp", "The Railroad Track has a too sharp turn" );
	}
};

#undef LOCTEXT_NAMESPACE 