#include <stdio.h>
#include <string.h>
int main()
{
	char n;
	int i, j, k, p;
	
	scanf("%c", &n);
	
	for (i=1; i<=n-64; i++)
	{
		for (j=n-64-i; j>0; j--)
		{
			printf("-");
		}
		
		for (k=0; k<i-1; k++)
		{
			printf("%c", 65+k);
		}
		
		for (p=i-1; p>=0; p--)
		{
			printf("%c", 65+p);
		}
		
		printf("\n");
	}
	
	return 0;
}
