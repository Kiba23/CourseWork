#pragma once
#include "ICalculator.h"

class CalculatorBase : public ICalculator
{
public:
	ICalculator* SelectGender(std::string& gender) override;
};