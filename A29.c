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
	
	
	//int table[1001][1001];
	int **table;
	table = (int **)malloc(sizeof(int *)*(n+1)); //int *
	for (i=0; i<n; i++)
	{
		table[i] = (int *)malloc(sizeof(int)*(m+1)); //int
	}
	
	
	
	for (i=0; i<n; i++) //product
	{
		produce1 = 0;
		
		for (j=0; j<m; j++) //date
		{
			scanf("%d", &table[i][j]);
			
			produce1 += table[i][j];
		}
		
		if (max <= produce1)
		{
			num = i+1;
			max = produce1;
			//printf("물건 번호 : %d / 생산한 물건 : %d\n", i, max);
		}
	}
	
	
	for (j=0; j<m; j++)
	{
		produce2 = 0;
		
		for (i=0; i<n; i++)
		{
			produce2 += table[i][j];
		}
		
		if (maxpro <= produce2)
		{
			date = j+1;
			maxpro = produce2;
			//printf("생산한 날 : %d / 그날의 생산량 : %d\n", j, maxpro);
		}
	}
	
	
	printf("%d %d\n", num, max); //first line
	printf("%d %d\n", date, maxpro); //second line
	
	
	return 0;
}
