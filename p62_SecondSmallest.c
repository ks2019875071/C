#include <stdio.h>
#include <stdlib.h>

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
	int n, i;
	
	scanf("%d", &n);
	
	int *a = (int *)malloc(sizeof(int) * n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", a);
		a = a+1;
	}
	small(a, n);
	
	printf("%d", small(a, n));
	
	free(a);
	
	return 0;
}


