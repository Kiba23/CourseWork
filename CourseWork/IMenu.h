#pragma once
#include "IFood.h"
#include <map>

class IMenu
{
public:
	virtual IFood* SelectKindOfFood(std::string food) = 0;
};