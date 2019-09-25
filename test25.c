#include <stdio.h>
#include <string.h>
int main()
{
	char a[21];
	scanf("%s", a);
	int b, c;
	b = strlen(a);
	c = 1;
	while (c<b+1)
	{
		printf("*%-*.*s*\n", b, c, a);
		c++;
	}
	return 0;
}
