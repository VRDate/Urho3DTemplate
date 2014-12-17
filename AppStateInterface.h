/*
 * AppStateInterface.h
 *
 *  Created on: Dec 14, 2014
 *      Author: practicing01
 */

#pragma once

class AppStateInterface
{
public:
	virtual ~AppStateInterface() {}
	virtual void Loop(float timeStep) = 0;
};
