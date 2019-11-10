#include <stdio.h>

double harmonic(double, double);

int main()
{
	double a, b;
	while ((scanf("%lf %lf", &a, &b)) == 2)
	{
		harmonic (a, b);
		printf("%.3lf\n", harmonic(a, b));
	}
	return 0;
}

double harmonic(double a, double b)
{
	double c = (2*a*b)/(a+b);
	return c;
}
