#include "CoreService.h"
#include <Cell.h>
#include <iostream>
#include <vector>
#include <Config.h>
#include "PINS.h"
#include <VoltageSensor.h>
#include <CurrentSensor.h>
#include <TemperatureSensor.h>

//std::list<Cell> _cells;
//std::list<Cell>::iterator _iterator;

bool _isRunning = false;

CoreService::CoreService()
{
	Start(Config::CELL_NUMBER);
}

/// <summary>
/// Start CoreService process
/// </summary>
void CoreService::Start(int cellNumber)
{
	int chargePins[4] = {PINS::CELL_CHARGE_0, PINS::CELL_CHARGE_1, PINS::CELL_CHARGE_2, PINS::CELL_CHARGE_3};
	int voltagePins[4] = {PINS::VOLTAGE_SENSOR_0, PINS::VOLTAGE_SENSOR_1, PINS::VOLTAGE_SENSOR_2, PINS::VOLTAGE_SENSOR_3 };
	int balancePins[4] = {PINS::BALANCE_01, PINS::BALANCE_12, PINS::BALANCE_23, PINS::BALANCE_30 };
	Init(cellNumber, chargePins, voltagePins, balancePins);
}

void CoreService::Init(int cellNumber, int chargePins[], int voltagePins[], int balancePins[])
{
	VoltageSensor voltageSensor;
	CurrentSensor currentSensor;
	TemperatureSensor temperatureSensor;

	for (int i = 0; i < cellNumber; i++)
	{
		Cell cell(voltageSensor, currentSensor, temperatureSensor);
		cell.Init(chargePins[i], voltagePins[i], balancePins[i]);
		_cells.push_back(cell);
	}
}

Cell GetListItem(std::list<Cell> list, int index)
{
	
}

void CoreService::StartLoop()
{
	_isRunning = true;
	while (_isRunning)
	{
		UpdateVoltage();
		CheckCharging();
	}
}

void CoreService::UpdateVoltage()
{
	for (_iterator = _cells.begin(); _iterator != _cells.end(); ++_iterator)
	{
		Cell cell = *_iterator;

		cell.UpdateVoltage();

		Serial.println(cell.Voltage);
	}
}

void CoreService::Balance(int balancePins[])
{
	for (int i = 0; i < _cells.size() - 1; ++i)
	{
		if (GetListItem(_cells, i).Voltage > GetListItem(_cells, i + 1).Voltage)
		{
			GetListItem(_cells, i).BalanceMOSFET.Open();
		}

		if (GetListItem(_cells, i).Voltage < GetListItem(_cells, i + 1).Voltage)
		{
			GetListItem(_cells, i).BalanceMOSFET.Open();
		}

		if (abs( GetListItem(_cells, i).Voltage - GetListItem(_cells, i + 1).Voltage) < 0.02)
		{
			GetListItem(_cells, i).BalanceMOSFET.Close();
		}
	}

	for (_iterator = _cells.begin(); _iterator != _cells.end(); ++_iterator)
	{
		Cell cell = *_iterator;


		Serial.println(cell.Voltage);
	}
}