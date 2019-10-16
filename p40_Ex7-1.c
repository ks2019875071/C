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
		if (ch!='#' && !isspace(ch))
		{
			word++;
		}
		
		if (isspace(ch) && ch!='\n');
		{
			space++;
		}
		if (ch == '\n')
		{
			newline++;
		}
	}
	
	printf("%d %d %d", space-newline-word, newline, word);
	return 0;
}
