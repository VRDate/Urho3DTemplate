/*
 * RigidBodyMoveTo.h
 *
 *  Created on: Dec 25, 2014
 *      Author: practicing01
 */

#pragma once

#include "Object.h"
#include "LogicComponent.h"

// All Urho3D classes reside in namespace Urho3D
using namespace Urho3D;

static const StringHash E_MOVETOCOMPLETE("MoveToComplete");

class RigidBodyMoveTo: public LogicComponent
{
	OBJECT(RigidBodyMoveTo);
public:
	RigidBodyMoveTo(Context* context);
	virtual void FixedUpdate(float timeStep);
	void OnMoveToComplete();
	void MoveTo(Vector3 dest, float speed, bool stopOnCompletion);

	bool moveToStopOnTime_;
	bool isMoving_;
	float moveToSpeed_;
	float moveToTravelTime_;
	float moveToElapsedTime_;
	float inderp_;
	float remainingDist_;
	Vector3 moveToDest_;
	Vector3 moveToLoc_;
	Vector3 moveToDir_;

};