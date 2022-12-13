#pragma once

#include <IVoltageSensor.h>

class VoltageSensor : public IVoltageSensor
{
private:
	int _pin;

public:
	void Init(const int pin);
	float Measure();
};