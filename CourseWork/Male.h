#pragma once
#include "CalculatorBase.h"

class Male : public CalculatorBase
{
public:
	ICalculator& operator-=(ICalculator* obj) override;
};