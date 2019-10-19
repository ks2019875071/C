#include <stdio.h>
int main()
{
	int n, i, j;
	
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		for (j='A'+n; j>'A'+n-i; j--)
		{
			printf("%c", j-1);
		}
		printf("\n");
	}
	
	return 0;
}
