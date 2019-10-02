#include <stdio.h>
int main()
{
	int n, i, m;
	
	scanf("%d", &n);
	for (i=0; i<=n; i++)
	{
		for (m=0; m<i; m++)
		{
			printf("%c", 64+n-m);
		}
		printf("\n");
	}
	return 0;
}
