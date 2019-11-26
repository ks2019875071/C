#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, i, j; //n=product, m=date
	scanf("%d %d", &n, &m);
	
	int num, max= 0;
	int produce1;
	
	int date, maxpro = 0;
	int produce2;
	
	
	int **table;
	table = (int **)malloc(sizeof(int)*n);
	for (i=0; i<n; i++)
	{
		table[i] = (int *)malloc(sizeof(int)*m);
	}
	
	
	for (i=0; i<n; i++) //product
	{
		produce1 = 0;
		
		for (j=0; j<m; j++) //date
		{
			scanf("%d", table[i][j]);
			
			produce1 += table[i][j];
		}
		
		if (max < produce1)
		{
			num = i+1;
			max = produce1;
		}
	}
	
	
	for (j=0; j<m; j++)
	{
		produce2 = 0;
		
		for (i=0; i<n; i++)
		{
			produce2 += table[i][j];
		}
		
		if (maxpro < produce2)
		{
			date = j+1;
			maxpro = produce2;
		}
	}
	
	
	printf("%d %d\n", num, produce1); //first line
	printf("%d %d\n", date, produce2); //second line
	
	
	return 0;
}
