#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int b, c;
	
	scanf("%s", a);
	c = strlen(a);
	
	for (b=c-1; b>=0; b--)
	{
		printf("%c", a[b]);
	}
	return 0;
}
