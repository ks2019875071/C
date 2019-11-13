#include <stdio.h>

int small(int *a, int n)
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
	int a[1000001];
	int n, i;
	
	for (i=0; i<n; i++)
	{
		scanf("%d", a[i]);
	}
	small(a, n);
	
	printf("%d", small(a, n));
	
	return 0;
}


