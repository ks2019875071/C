#include <stdio.h>
int main()
{
	int a, b, c, d, e, f;
	double sum1, sum2;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	
	sum1 = (float)(a*e+c*e+b*f+d*f)/(e*e+f*f);
	sum2 = (float)(b*e+d*e-a*f-c*f)/(e*e+f*f);
	
	printf ("%.2lf %.2lf", sum1, sum2);
	
	return 0;
}
