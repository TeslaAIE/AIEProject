#include "Utilities.h"

Cell Utilities::GetListItem(list<Cell> list, int index)
{
	for (int i = 0; i < index; ++i)
	{
		++_iterator;
	}

	return *_iterator;
}
