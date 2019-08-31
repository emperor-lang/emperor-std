#include "maths.h"

double raise(double a, int b)
{
	double r = 1;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}

	return r;
}