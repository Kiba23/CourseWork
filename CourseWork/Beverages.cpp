#include "Beverages.h"

std::string Beverages::MenuDishes()
{
	std::string out;
	for (int i = 0; i < Dishes.size(); i++) {
		out.append(Dishes[i].first + ", ");
		if (i == Dishes.size() - 1)
			out.append(".");
	}
	return out;
}