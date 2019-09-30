#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int i, m;
	for (i=0; i<n; i++)
	{
		for (m=0; m<=i; m++)
			printf("$");
		printf("\n");
	}
	return 0;
}
