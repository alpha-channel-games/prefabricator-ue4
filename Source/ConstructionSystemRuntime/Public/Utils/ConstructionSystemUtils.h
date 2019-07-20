//$ Copyright 2015-19, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"

class APrefabActor;
class UPrefabricatorConstructionSnapComponent;

class CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemUtils {
public:
	static ECollisionChannel FindPrefabSnapChannel();
	static APrefabActor* FindTopMostPrefabActor(UPrefabricatorConstructionSnapComponent* SnapComponent);
};


class CONSTRUCTIONSYSTEMRUNTIME_API FPCSnapUtils {
public:
	static bool GetSnapPoint(UPrefabricatorConstructionSnapComponent* InFixedSnapComp, UPrefabricatorConstructionSnapComponent* InNewSnapComp,
		const FVector& InRequestedSnapLocation, FTransform& OutTargetSnapTransform, int32 CursorRotationStep = 0, float InSnapTolerrance = 200.0f);

};