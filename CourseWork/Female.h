#pragma once
#include "CalculatorBase.h"
#include "Male.h"

class Female : public CalculatorBase  // A bit wrong naming of a class. How Female is inherit from CalculatorBase? It should be smth like CalculatorFemale
{
public:
	ICalculator& operator-=(ICalculator* obj) override;
};