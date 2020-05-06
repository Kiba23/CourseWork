#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>

class IFood	
{
public:						
	virtual int CalculateCalories(std::string dish, int amount) = 0;
	virtual void PrintMenu() = 0;
	//virtual void Test() = 0;
};

// virtual void PrintList() { std::cout << "Intreface"; } - not pure function
// virtual void PrintList() = 0; - pure function