#include "Cell.h"

void Cell::UpdateVoltage()
{
	Voltage = _voltageSensor.Measure();
}

void Cell::Init(int chargePin, int voltagePin, int balancePin)
{
	ChargeMOSFET.InitOutPut(chargePin, false);
	_voltageSensor.Init(voltagePin);
	BalanceMOSFET.InitOutPut(balancePin, false);
}