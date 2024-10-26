#include <iostream>
double my_pow(double a, int b) {
	double c = a;
	if (b > 0)
		for (size_t i = 1; i < b; i++)
			a *= c;
	else if (b == 0)
		return 1;
	else if (b < 0)
		for (size_t i = 0; i <= abs(b); i++)
			a *= (1 / c);

	return a;
}