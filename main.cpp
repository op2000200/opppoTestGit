double my_pow(double a, unsigned int b) 
{
	double c = a;
	for (size_t i = 1; i < b; i++)
		a = a * c;
	return a;
}