#include <stdio.h>
#include <stdlib.h>

double H(double *x, int n)
{
	double h, m = 0;
	
	int i;
	for (i=0; i<n; i++)
	{
		m += 1.0/(double)x[i];
	}
	
	h = n/m;
	
	return h;
}

int main()
{
	int n;
	
	while ((scanf("%d", &n)) != 0)
	{
		double *x;
		x = (double *)malloc(sizeof(double)*n);
		
		int i;
		for (i=0; i<n; i++)
		{
			scanf("%lf", &x[i]);
		}
		
		H(x, n);
		
		printf("%.3lf\n", H(x, n));
		
		free(x);
	}
	
	return 0;
}
