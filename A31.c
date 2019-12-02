#include <stdio.h>
#include <stdlib.h>

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
	
	int *count;
	count = (int *)malloc(sizeof(int)*n);
	
	for (i=0; i<n; i++)
	{
		count[num[i]] = 0;
	}
	
	for (i=0; i<n; i++)
	{
		count[num[i]]++;
	}
	
	int max = 0;
	int mode = 0;
	
	for (i=0; i<n; i++)
	{
		if (count[i] > max || (count[i] == max && i > mode))
		{
			max = count[i];
			mode = i;
		}
	}
	
	printf("%d %d", mode, max);
	
	return 0;
}
