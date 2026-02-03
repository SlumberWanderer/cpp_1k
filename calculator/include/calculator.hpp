#pragma once
#include <cmath>

class Calculator {
	const double a_;
	const double b_;
public:
	Calculator(const double& a, const double& b): a_(a), b_(b) {}
	
	const double calculate(const double& x) const
	{
		return (std::sin(b_ * x) / x) * std::exp(-a_ * x);
	}
	
	const double operator()(const double& x) const
	{
		return this->calculate(x);
	}
};
