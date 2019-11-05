#include <stdio.h>

void three (double a, double b, double c);

int main()
{
	double a, b, c;
	
	while ((scanf("%lf %lf %lf", &a, &b, &c)) == 3)
	{
		three (a, b, c);
	}
	
	return 0;
}

void three (double a, double b, double c)
{
	if (a>b)
	{
		if (b>c) //a>b>c
			printf("%lf %lf %lf\n", c, b, a);
		else if (c>a) //c>a>b
			printf("%lf %lf %lf\n", b, a, c);
		else //a>c>b
			printf("%lf %lf %lf\n", b, c, a);
	}
	
	else if (b>a)
	{
		if (a>c) //b>a>c
			printf("%lf %lf %lf\n", c, a, b);
		else if (c>b) //c>b>a
			printf("%lf %lf %lf\n", a, b, c);
		else //b>c>a
			printf("%lf %lf %lf\n", a, c, b);
	}
}
