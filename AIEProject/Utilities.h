#pragma once
#include <Cell.h>
#include <stl_list.h>
#include <iterator>

class Utilities
{
private:
	list<Cell>::iterator _iterator;
public:
	static Cell GetListItem(list<Cell> list, int index);
};