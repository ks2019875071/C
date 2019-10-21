#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for (j=n-i+1; j>0; j--)
		{
			printf("%c", j+96);
		}
		printf("\n");
	}
	return 0;
}
