#include <stdio.h>

int harmonic(double a, double b);

int main()
{
	double a, b;
	while ((scanf("%lf %lf", &a, &b)) == 2)
	{
		harmonic (a, b);
		printf("%.3lf\n", (2*a*b)/(a+b));
	}
	return 0;
}

int harmonic(double a, double b)
{
	return a, b;
}
