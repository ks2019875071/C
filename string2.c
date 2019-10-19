#include <stdio.h>
#include <string.h>
int main()
{
	char x[21];
	int y, i;
	
	scanf("%s", x);
	y = strlen(x);
	
	for (i=1; i<=y; i++)
	{
		printf("*%-*.*s*\n", y, i, x);
	}
	
	return 0;
}
