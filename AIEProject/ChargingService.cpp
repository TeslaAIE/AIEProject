#include "ChargingService.h"

ChargingService::ChargingService(list<Cell> &cells)
{
	_cells = cells;
}

void ChargingService::Init()
{

}

void ChargingService::StartCharging()
{
	for (_iterator = _cells.begin(); _iterator != _cells.end(); ++_iterator)
	{
		Cell cell = *_iterator;

		if (cell.Voltage < 4.2)
		{
			cell.ChargeMOSFET.Open();
		}

		Serial.println(cell.Voltage);
	}
}

void ChargingService::StopCharging()
{
	for (_iterator = _cells.begin(); _iterator != _cells.end(); ++_iterator)
	{
		Cell cell = *_iterator;

		cell.ChargeMOSFET.Close();

		Serial.println(cell.Voltage);
	}
}

void ChargingService::CheckCharging()
{
	for (_iterator = _cells.begin(); _iterator != _cells.end(); ++_iterator)
	{
		Cell cell = *_iterator;

		if (cell.Voltage >= 4.2)
		{
			cell.ChargeMOSFET.Close();
		}

		Serial.println(cell.Voltage);
	}
}
