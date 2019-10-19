#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (c>a+b || b>a+c || a>b+c)
	{
		printf("Not a Triangle");
	}
	
	else
	{
		double s, sum;
		s = (a+b+c)/2;
		sum = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("%.2lf", sum);
	}
	
	return 0;
}
