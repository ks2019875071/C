#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101];
	int n, i;
	
	scanf("%s", ch);
	n = strlen(ch);
	
	for (i = n-1; i>=0; i--)
	{
		printf("%c", ch[i]);
	}
	
	return 0;
}
