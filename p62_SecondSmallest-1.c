#include <stdio.h>
#include <stdlib.h>

int small(int *a, int n)
{
	int x, y, i;
	x = a[0];
	y = a[0];
	
	for (i=0; i<n; i++)
	{
		if (a[i]<x)
		{
			x = a[i];
		}
		else if (a[i]>x && a[i]<y)
		{
			y = a[i];
		}
	}
	return y;
}

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	int *a = (int *)malloc(sizeof(int) * n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", a[i]);
	}
	small(a, n);
	
	printf("%d", small(a, n));
	
	return 0;
}


