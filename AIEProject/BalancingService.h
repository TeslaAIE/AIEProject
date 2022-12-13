#pragma once

#include "IBalancingService.h"
#include <Cell.h>
#include <stl_list.h>

class BalancingService : IBalancingService
{
private:
	list<Cell> _cells;
public:
	BalancingService(list<Cell> &cells);

	// Inherited via IBalancingService
	virtual void Init() override;


	// Inherited via IBalancingService
	virtual void StartBalancing() override;


	virtual void Init() override;


};