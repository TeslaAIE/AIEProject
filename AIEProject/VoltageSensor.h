#pragma once

class VoltageSensor
{
private:
	int _pin;

public:
	void Init(int pin);
	float Measure();
};