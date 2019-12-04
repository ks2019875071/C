#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	if (*(int *)a > *(int *)b)
	{
		return 1;
	}
	
	if (*(int *)a < *(int *)b)
	{
		return -1;
	}
	
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	
	int *num;
	num = (int *)malloc(sizeof(int)*n);
	
	int i;
	for (i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
	}
	
	qsort(num, n, sizeof(int), compare);
	
	int m1, m2;
	if (n%2 == 0)
	{
		m1 = n/2-1;
		m2 = n/2;
		float middle = (num[m1]+num[m2])/2.0;
		printf("%.1f", middle);
	}
	else
	{
		m2 = n/2;
		printf("%d", num[m2]);
	}
	
	return 0;
}
