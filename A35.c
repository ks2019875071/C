#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	
	int i, j;
	int **num;
	num = (int **)malloc(sizeof(int *)*m);
	for (i=0; i<m; i++)
	{
		num[i] = (int *)malloc(sizeof(int)*n);
	}
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			scanf("%1d", &num[i][j]);
	}
	
	/*
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%d", num[i][j]);
		printf("\n");
	}
	*/
	
	int k, l;
	int count, max = 0;
	for (i=0; i<m-3; i++) //start point
	{
		//printf("*");
		count = 0;
		for (j=i; j<i+3; j++) //m
		{
			for (k=0; k<n-3; k++) //start point
			{
				for (l=k; l<k+3; k++) //n
				{
					count += num[j][l];
				}
			}
			if (count > max)
				max = count;
		}
	}
	
	printf("%d", max);
	
	return 0;
}
