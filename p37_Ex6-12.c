#include <stdio.h>
int main()
{
	int i, j, a;
	float n;
	double sum1, sum2;
	sum1 = 0.0;
	sum2 = 0.0;
	
	scanf ("%f", &n);
	
	for (i=1; i<=n; i++)
	{
		sum1 += 1.0/i;
	}
	
	printf ("%.5lf ", sum1);
	
	for (j=1; j<=n; j++)
	{
		a = -1;
		if (j%2 == 0)
		{
			sum2 += 1.0/j*a;
		}
		
		else
		{
			sum2 += 1.0/j;
		}
	}
	printf ("%.5lf", sum2);
	
	
	return 0;
}
