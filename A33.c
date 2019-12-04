#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	if (*(int *)a > *(int *)b)
		return 1;
	
	if (*(int *)a < *(int *)b)
		return -1;
	
	else
		return 0;
}

int main()
{
	int n, k1, k2, k3;
	scanf("%d %d %d %d", &n, &k1, &k2, &k3);
	
	int *arr;
	arr = (int *)malloc(sizeof(int) * n);
	
	int i;
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), compare);
	
	int sum = arr[k1-1] + arr[k2-1] + arr[k3-1];
	printf("%d", sum);
	
	return 0;
}
