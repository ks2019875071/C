#include <stdio.h>
int main()
{
	double n, r, y, i;
	
	scanf("%lf %lf %lf", &n, &r, &y);
	
	for (i=1; i<=y; i++)
	{
		n += n*r;
	}
	
	printf ("%.5lf", n);
	
	return 0;
}
