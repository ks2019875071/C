#include <stdio.h>
#include <ctype.h>
int main()
{
	int ch;
	int new_line = 0;
	int space = 0;
	int word = 0;
	
	while((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			new_line++;
		else if (isspace(ch))
			space++;
		else
			word++;
	}
	printf("%d %d %d", space, new_line, word);
	
	return 0;
}
