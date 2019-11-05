#include <stdio.h>

void harmonic(double a, double b);

int main()
{
	double a, b;
	while ((scanf("%lf %lf", &a, &b)) == 2)
	{
		harmonic (a, b);	
	}
	return 0;
}

void harmonic(double a, double b)
{
	printf("%.3lf\n", (2*a*b)/(a+b));
}
