#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x;
	double sum = 0;
	int n, i;
	
	scanf("%f %d", &x, &n);
	
	for (i=1; i<=n; i++)
	{
		if (i%2 == 0)
		{
			sum -= pow(x, i)/(float)i;
			//printf("%d : -%.5lf\n", i, pow(x, i)/(float)i);
		}
		else
		{
			sum += pow(x, i)/(float)i;
			//printf("%d : +%.5lf\n", i, pow(x, i)/(float)i);
		}
	}
	
	printf("%.5lf", sum);
	
	return 0;
}
