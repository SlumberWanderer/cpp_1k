#pragma once
#include <cmath>

using namespace std;

class Calculator {
	const double a_;
	const double b_;
public:
	Calculator(const double& a, const double& b) : a_(a), b_(b) {}

	const double calculate(const double& x) const
	{
		double sin_part = sin(b_ * x) / x;
		double exp_part = exp(-a_ * x);

		return sin_part * exp_part;
	}

	const double operator()(const double& x) const
	{
		return this->calculate(x);
	}
};
