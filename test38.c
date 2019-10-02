#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, sum; //a=원금, b=복리이자.
	int year, i;
	sum = 0;
	c = 1.0;
	
	scanf("%lf %lf %d", &a, &b, &year);
	
	for (i=1; i<=year; i++)
	{
		c = c*(b+1);
	}
	sum = a*c;
	printf("%.5lf", sum);
	
	return 0;
}
