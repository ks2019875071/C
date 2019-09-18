#include <stdio.h>

int main()
{
	float a, c, f;
	scanf("%f", &a);
	c=a-273.16;
	f=32.0+1.8*c;
	printf("%.2f %.2f", f, c);
	
	return 0;
}
