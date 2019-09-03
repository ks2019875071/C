#include <stdio.h>
int main()
{
	double x;
	scanf("%lf", &x); //파인트 
	printf("%e", (x*950)/(3.0e-23)); //x*950=물의 g수, 3.0e-23=물 분자 개당 g수 
	return 0;
}
