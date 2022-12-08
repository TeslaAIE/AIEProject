#include "VoltageSensor.h"

void VoltageSensor::Init(int pin)
{
	_pin = pin;
	pinMode(_pin, INPUT);
}

float VoltageSensor::Measure()
{
	return analogRead(_pin);
}