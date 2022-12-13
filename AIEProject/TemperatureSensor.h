#pragma once
#include<ITemperatureSensor.h>

class TemperatureSensor : public ITemperatureSensor
{
private:
public:
	float Measure();
	
};