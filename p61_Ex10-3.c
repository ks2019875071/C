#include <stdio.h>
#include <stdlib.h>

int big(int n[], int count)
{
	int i, m = n[0];
	for (i=0; i<count; i++)
	{
		if (n[i]>m)
		{
			m = n[i];
		}
	}
	return m;
}

int main()
{
	int *n = (int *)malloc(sizeof(int)*1000000);
	int count = 0;
	while ((scanf("%d", n)) != EOF)
	{
		count++;
		n = n+1;
	}
	big(n, count);
	
	printf("%d", big(n, count));
	
	free(n);
	
	return 0;
}
