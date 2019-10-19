#include <stdio.h>
int main()
{
	double x, y, r;
	int i, count = 0;
	
	scanf("%lf %lf %lf", &x, &r, &y);
	
	if (x*r/100 >= y)
	{
		printf("NO");
	}
	
	else
	{
		while (x>=0)
		{
		count++;
		x += x*r/100 - y;	
		}
		printf("%d", count);
	}
	
	return 0;
}
