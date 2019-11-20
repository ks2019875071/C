#include <stdio.h>
#include <stdlib.h>

int small(int *a, int n)
{
	int x, y, i;
	x = 10000000;
	
	for (i=0; i<n; i++)
	{
		if (a[i] < x)
		{
			y = x;
			x = a[i];
			//printf("%d, %d\n", x, y);
		}
		else if(a[i] < y)
		{
			y = a[i];
		}
	}
	return y;
}

int main()
{
	int n, num, i;
	
	scanf("%d", &n);
	
	int *a;
	a = (int *)malloc(sizeof(int) * n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &num);
		//printf("%d\n", num);
		a[i] = num;
	}
	small(a, n);
	
	printf("%d", small(a, n));
	
	return 0;
}
