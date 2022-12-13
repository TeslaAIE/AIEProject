#pragma once

#include <iterator>
#include <stl_list.h>
#include <Cell.h>

class TemperatureControl
{
private:
	std::list<Cell> _cells;
	std::list<Cell>::iterator _iterator;

public:
	TemperatureControl(std::list<Cell> &cells);
	void CheckTemperature();
	void ControlLiquid();
};