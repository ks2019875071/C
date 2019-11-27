#include <stdio.h>
#include <stdlib.h>

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
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-i-1; j++)
		{
			if (num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
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
