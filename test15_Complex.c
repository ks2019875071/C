#include <stdio.h>
int main()
{
	float a, b, c, d, e, f, sum1, sum2;
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	
	sum1 = (c*e+d*f)/(e*e+f*f) + a;
	sum2 = (d*e-c*f)/(e*e+f*f) + b;
	
	if ((e*e+f*f) == 0)
	{
		printf("X");
	}
	
	else
	{
		printf("%.2f %.2f", sum1, sum2);
 	}
 	
	return 0;
}
