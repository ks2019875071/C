#include <stdio.h>
int main()
{
	double k, c, f;
	scanf ("%lf", &k);
	
	c = k-273.16;
	f = c*9.0/5.0+32.0;
	
	printf("%.2lf %.2lf", f, c);
	
	return 0;
}
