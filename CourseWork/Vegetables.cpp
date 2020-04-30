#include "Vegetables.h"

std::string Vegetables::MenuDishes()
{
	std::string out;
	for (int i = 0; i < Dishes.size(); i++) {
		out.append(Dishes[i].first + ", ");
		if (i == Dishes.size() - 1)
			out.append(".");
	}
	return out;
}