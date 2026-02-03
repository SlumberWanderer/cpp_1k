#include <iostream>
#include "calculator.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Task #1. Constant values" << endl;
	double a = 2.1, b = 3.9, x = 0.1;
	Calculator calculator(a, b);
	cout << "sin(bx)/x * e^(-ax) = " << calculator(x) << endl;
	cout << endl;
	
	cout << "Task #2. Using Calculator" << endl;
	cout << "Type a, b, x: ";
	cin >> a >> b >> x;
	
	Calculator user_calculator(a, b);
	const auto result = user_calculator(x);
	
	cout << "sin(bx)/x * e^(-ax) = " << result << endl;
	
}
