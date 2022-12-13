#include "Cell.h"

Cell::Cell(IVoltageSensor voltageSensor, ICurrentSensor currentSensor, ITemperatureSensor temperatureSensor)
{
	_voltageSensor = voltageSensor;
	_currentSensor = currentSensor;
	_temperatureSensor = temperatureSensor;
	ID = _cellNumber++;
}

void Cell::UpdateVoltage()
{
	//Voltage = _voltageSensor.Measure();
}

void Cell::Init(int chargePin, int voltagePin, int balancePin)
{
	ChargeMOSFET.InitOutPut(chargePin, false);
	_voltageSensor.Init(voltagePin);
	BalanceMOSFET.InitOutPut(balancePin, false);
}