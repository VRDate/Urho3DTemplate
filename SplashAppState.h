/*
 * SplashAppState.h
 *
 *  Created on: Dec 14, 2014
 *      Author: practicing01
 */

#pragma once

#include "AppStateInterface.h"
#include "Urho3DPlayer.h"

class SplashAppState : public AppStateInterface
{
public:
	SplashAppState(Urho3DPlayer* main);
	virtual ~SplashAppState();
	void Loop(float timeStep);
	void Splash();

	Urho3DPlayer* main_;
	float elapsedTime_;
};
