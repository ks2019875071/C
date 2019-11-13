#include <stdio.h>

int small(long int *a, long int n)
{
	int x, y, i;
	x = a[0];
	y = a[0];
	
	for (i=0; i<n; i++)
	{
		if (*a<x)
		{
			x = *a;
		}
		else if (*a>x && *a<y)
		{
			y = *a;
		}
		a = a+1;
	}
	return y;
}

int main()
{
	long int a[1000001];
	long int n, i;
	
	scanf("%ld", &n);
	
	for (i=0; i<n; i++)
	{
		scanf("%ld", a[i]);
	}
	small(a, n);
	
	printf("%ld", small(a, n));
	
	return 0;
}


