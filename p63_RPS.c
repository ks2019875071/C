#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m;
	int i, j, k;
	
	scanf("%d %d", &n, &m);
	
	char *A, *B;
	A = (char *)malloc(sizeof(char) * n);
	B = (char *)malloc(sizeof(char) * m);
	
	for (j=0; j<n; j++)
	{
		A[j] = getchar();
	}
	
	for (k=0; k<m; k++)
	{
		B[k] = getchar();
	}
	
	int count = 0;
	int win = 0;
	
	for (i=0; i<n-m; i++)
	{
		for (j=i, k=0; j<i+m, k<m; j++, k++)
		{
			if (A[j] == 'R')
			{
				if (B[k] == 'P')
				{
					count++;
					//printf("%c : %c\n", A[j], B[k]);
				}
				else if (B[k] == 'S')
				{
					count--;
				}
			}
			
			if (A[j] == 'P')
			{
				if (B[k] == 'R')
				{
					count--;
				}
				else if (B[k] == 'S')
				{
					count++;
					//printf("%c : %c\n", A[j], B[k]);
				}
			}
			
			if (A[j] == 'S')
			{
				if (B[k] == 'R')
				{
					count++;
					//printf("%c : %c\n", A[j], B[k]);
				}
				else if (B[k] == 'P')
				{
					count--;
				}
			}
		}
		if (count>win)
		{
			win = count;
		}
	}
	
	printf("%d", win);
	
	return 0;
}
