#include "BalancingService.h"
#include "Utilities.h"

BalancingService::BalancingService(list<Cell> &cells)
{
	_cells = cells;
}

void BalancingService::Init()
{

}

void BalancingService::StartBalancing()
{
	for (int i = 0; i < _cells.size() - 1; ++i)
	{
		if (Utilities::GetListItem(_cells, i).Voltage > Utilities::GetListItem(_cells, i + 1).Voltage)
		{
			Utilities::GetListItem(_cells, i).BalanceMOSFET.Open();
		}

		if (Utilities::GetListItem(_cells, i).Voltage < Utilities::GetListItem(_cells, i + 1).Voltage)
		{
			Utilities::GetListItem(_cells, i).BalanceMOSFET.Open();
		}

		if (abs(Utilities::GetListItem(_cells, i).Voltage - Utilities::GetListItem(_cells, i + 1).Voltage) < 0.02)
		{
			Utilities::GetListItem(_cells, i).BalanceMOSFET.Close();
		}
	}

	for (_iterator = _cells.begin(); _iterator != _cells.end(); ++_iterator)
	{
		Cell cell = *_iterator;


		Serial.println(cell.Voltage);
	}
}