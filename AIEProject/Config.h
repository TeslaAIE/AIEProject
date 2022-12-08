#pragma once

class Config
{
	public:
		static float VOLTAGE_CHARGED;
		static int CELL_NUMBER;
};

float Config::VOLTAGE_CHARGED = 4.2;
int Config::CELL_NUMBER = 4;