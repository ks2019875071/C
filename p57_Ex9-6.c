#include <stdio.h>

void order(double *n1, double *n2, double *n3);

int main()
{
	double a, b, c;
	
	while ((scanf("%lf %lf %lf", &a, &b, &c)) == 3)
	{
		order(&a, &b, &c);
		printf ("%lf %lf %lf\n", a, b, c);
	}
	
	return 0;
}

void order (double *n1, double *n2, double *n3)
{
	double n, m;
	
	if (*n3>*n2)
	{
		if (*n2>*n1) //c>b>a
		{
			*n1 = *n1;
			*n2 = *n2;
			*n3 = *n3;
		}
		else if (*n1>*n3) //a>c>b
		{
			n = *n1;
			*n1 = *n2;
			*n2 = *n3;
			*n3 = n;
		}
		else //c>a>b
		{
			n = *n1;
			*n1 = *n2;
			*n2 = *n1;
			*n3 = *n3;
		}
	}
	
	else if (*n2>*n3)
	{
		if (*n1>*n2) //a>b>c
		{
			n = *n1;
			*n1 = *n3;
			*n2 = *n2;
			*n3 = n;
		}
		else if (*n3>*n1) //b>c>a
		{
			n = *n2;
			*n1 = *n1;
			*n2 = *n3;
			*n3 = n;
		}
		else //b>a>c
		{
			n = *n1;
			m = *n2;
			*n1 = *n3;
			*n2 = n;
			*n3 = m;
		}
	}
}
