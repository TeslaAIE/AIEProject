#pragma once
#include <VoltageSensor.h>
#include <CurrentSensor.h>
#include <TemperatureSensor.h>

class IoCContainer
{
	
public:
	static VoltageSensor VoltageSensorObject;
	static CurrentSensor CurrentSensorObject;
	static TemperatureSensor TemperatureSensorObject;
	IoCContainer();
	void Configure();
};