#include <stdio.h>
int main()
{
	float a, b, c, d, sum, percent;
	
	scanf("%f %f %f %f", &a, &b, &c, &d);
	sum = a+b+c+d;
	percent = d/sum*100.0;
	
	printf("%.2f%%", percent);
	
	return 0;
}
