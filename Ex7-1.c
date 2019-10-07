#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int space = 0;
	int newline = 0;
	int word = 0;
	
	while ((ch = getchar()) != '#')
	{
		word++;
		
		if (isspace(ch));
		{
			space++;
		}
		if (ch == '\n')
		{
			newline++;
		}
	}
	
	printf("%d %d %d", space, newline, word-space-newline);
	return 0;
}
