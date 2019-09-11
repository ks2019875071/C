#include <stdio.h>
int main()
{
	float a, b, c, d, e;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	e = d/(a+b+c+d)*100;
	printf("%.2f%%", e);
	
	return 0;
}
