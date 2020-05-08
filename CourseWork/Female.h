#pragma once
#include "CalculatorBase.h"
#include "Male.h"

class Female : public CalculatorBase
{
public:
	ICalculator& operator-=(ICalculator* obj) override;
};