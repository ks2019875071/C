#include <stdio.h>
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
	
	int j;
	int mode=0;
	int fre=0;
	int *count;
	
	count = (int *)malloc(sizeof(int)*n);
	
	for (i=0; i<n; i++)
	{
		count[i] = 0;
	}
	
	for (i=0; i<n; i++)
	{
		fre = 0;
		
		for (j=0; j<n; j++)
		{
			if (count[i] == count[j])
			{
				fre++;
			}
		}
		if (fre < count[i])
		{
			fre = count[i];
			mode = i;
		}
	}
	
	printf("%d %d", mode, max);
	
	return 0;
}
