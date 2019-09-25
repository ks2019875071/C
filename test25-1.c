#include <stdio.h>
#include <string.h>
int main()
{
	char a[21];
	scanf("%s", a);
	int b, c;
	b = strlen(a);
	c = 10;
	while (++c<=b)
	{
		printf("*%-*.*s*\n", b, c, a);
	}
	return 0;
}
