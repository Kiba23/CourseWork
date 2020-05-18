#pragma once
#include "CalculatorBase.h"

class Male : public CalculatorBase	// A bit wrong naming of a class. How Male is inherit from CalculatorBase? It should be smth like CalculatorMale
{
public:
	ICalculator& operator-=(ICalculator* obj) override;
};