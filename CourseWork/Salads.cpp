#include "Salads.h"

Salads::Salads()
{
	SetDishesCalories(Dishes_Salads);
}

void Salads::PrintMenu()
{
	std::cout << "Menu (use amount in number of cup served): ";
	for (int i = 0; i < Dishes_Salads.size(); i++) {
		std::cout << Dishes_Salads[i].first << " ";
	}
	std::cout << std::endl;
}