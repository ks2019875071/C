#include <stdio.h>

void three (double *a, double *b, double *c);

int main()
{
	double a, b, c;
	
	while ((scanf("%lf %lf %lf", &a, &b, &c)) == 3)
	{
		three (&a, &b, &c);
		printf ("%lf %lf %lf", a, b, c);
	}
	
	return 0;
}

void three (double *a, double *b, double *c)
{
	double **one, **two, **three;
	
	if (*a>*b)
	{
		if (*b>*c) //a>b>c
		{
			**one = *a;
			**two = *b;
			**three = *c;
		}
		else if (*c>*a) //c>a>b
		{
			**one = *c;
			**two = *a;
			**three = *b;
		}
		else //a>c>b
		{
			**one = *a;
			**two = *c;
			**three = *b;
		}
	}
	
	else if (*b>*a)
	{
		if (*a>*c) //b>a>c
		{
			**one = *b;
			**two = *a;
			**three = *c;
		}
		else if (*c>*b) //c>b>a
		{	**one = *c;
			**two = *b;
			**three = *a;
		}
		else //b>c>a
		{
			**one = *b;
			**two = *c;
			**three = *a;
		}
	}
}
