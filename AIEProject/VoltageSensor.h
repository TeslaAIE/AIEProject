#pragma once

#include <IVoltageSensor.h>

class VoltageSensor : public IVoltageSensor
{
private:
	int _pin;

public:
	void Init(int pin);
	float Measure();
};