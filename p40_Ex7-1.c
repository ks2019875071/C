#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int word, space, enter;
	space = 0;
	enter = 0;
	word = 0;
	
	while ((ch = getchar()) != '#')
	{
		if (isspace(ch) && ch != '\n')
			space++;
		
		else if (ch == '\n')
			enter++;
		
		else
			word++;
	}
	
	printf("%d %d %d", space, enter, word);
	
	return 0;
}
