#pragma once

#include "IChargingService.h"
#include <stl_list.h>
#include <Cell.h>

class ChargingService : IChargingService
{
private:
	list<Cell> _cells;
	list<Cell>::iterator _iterator;
public:
	ChargingService(list<Cell> &cells);
	virtual void Init() override;

	// Inherited via IChargingService
	virtual void StartCharging() override;
	virtual void StopCharging() override;
	virtual void CheckCharging() override;
};