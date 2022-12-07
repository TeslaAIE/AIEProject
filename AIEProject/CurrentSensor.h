#pragma once
#include "ICurrentSensor.h"

class CurrentSensor : public ICurrentSensor
{
	public:
		void Measure();
};