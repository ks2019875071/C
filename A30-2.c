#include <stdio.h>
#include <stdlib.h>

swap(int *a, int *b)
{
	int term = *a;
	*a = *b;
	*b = term;
}

void quick(float *num, int n)
{
	int pivot = 0;
	int left = 0, right = n;
	
	int i, j = pivot;
	
	if (left < right)
	{
		for (i=left+1; i<right; i++)
		{
			if (num[i] < num[pivot])
			{
				j++;
				swap(&num[j], &num[i]);
			}
		}
		swap(&num[left], &num[j]);
		pivot = j;
		
		quick(pivot-1, num);
		quick(right, num);
	}
	
}

int main()
{
	int n;
	scanf("%d", &n);
	
	float *num;
	num = (float *)malloc(sizeof(int)*n);
	
	int i, j;
	float temp;
	for (i=0; i<n; i++)
	{
		scanf("%f", &num[i]);
	}
	
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
		printf("%d", (int)num[m2]);
	}
	
	return 0;
}
