#include <stdio.h>
int main()
{
	long long int pascal[61][61];
	int i, j;
	
	for (i=0; i<60; i++)
	{
		pascal[i][0] = 1;
		
		for (j=1; j<=i+1; j++)
		{
			pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
		}
		pascal[i][i] = 1;
	}
	
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	printf("%lld", pascal[n-1][k-1]);
	
	return 0;
}
