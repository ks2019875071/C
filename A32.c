#include <stdio.h>
#include <stdlib.h>

double trimmed_mean(int *arr, int n, int k)
{
	int i;
	double all = 0, t_mean;
	for (i=k; i<n-k; i++)
	{
		//printf("t_arr[%d] %d\n", i, arr[i]);
		all += arr[i];
		//printf("%d, %f\n", arr[i], all);
	}
	
	t_mean = all/(n-2*k);
	//printf("%.1lf, %.1lf\n", all, t_mean);
	
	return t_mean;
}

double calibration_mean(int *arr, int n, int k)
{
	int i;
	int m = n-1;
	
	for (i=0; i<k; i++)
	{
		arr[i] = arr[k];
		//printf("arr[%d] : %d\n", i, arr[i]);
	}
	
	for (i=m; i>m-k; i--)
	{
		arr[i] = arr[m-k];
		//printf("arr[%d] : %d\n", i, arr[i]);
	}
	
	double all=0, c_mean;
	for (i=0; i<n; i++)
	{
		all += arr[i];
		//printf("arr[%d] : %d\n", i, arr[i]);
	}
	
	c_mean = all/n;
	//printf("%.1lf\n", c_mean);
	
	return c_mean;
}

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
	int n, k;
	scanf("%d %d", &n, &k);
	
	int *arr;
	arr = (int *)malloc(sizeof(int) * n);
	
	int i;
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), compare);
	
	/*
	for (i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	*/
	
	trimmed_mean(arr, n, k);
	calibration_mean(arr, n, k);
	
	printf("%.1lf %.1lf", trimmed_mean(arr, n, k), calibration_mean(arr, n, k));
	
	return 0;
}
