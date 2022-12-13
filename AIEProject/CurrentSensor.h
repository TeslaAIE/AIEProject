#pragma once
#include "ICurrentSensor.h"

class CurrentSensor : public ICurrentSensor
{
	public:
		float Measure();
};