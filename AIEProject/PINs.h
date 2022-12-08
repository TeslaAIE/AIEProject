#pragma once

static class PINS
{
public:
	static const int CURRENT_SENSOR_0 = A0;
	static const int CURRENT_SENSOR_1 = A1;
	static const int CURRENT_SENSOR_2 = A2;
	static const int CURRENT_SENSOR_3 = A3;

	static const int VOLTAGE_SENSOR_0 = A0; //put right values here
	static const int VOLTAGE_SENSOR_1 = A1;
	static const int VOLTAGE_SENSOR_2 = A2;
	static const int VOLTAGE_SENSOR_3 = A3;

	static const int CELL_CHARGE_0 = 0; //put right values here
	static const int CELL_CHARGE_1 = 1;
	static const int CELL_CHARGE_2 = 2;
	static const int CELL_CHARGE_3 = 3;

	static const int BALANCE_01 = 0; //put right values here
	static const int BALANCE_12 = 1;
	static const int BALANCE_23 = 2;
	static const int BALANCE_30 = 3;
};
