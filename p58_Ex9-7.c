#include <stdio.h>

int word(char ch);

int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		word(ch);
		if (word(ch) == 1) //space, \n, tab
		{
			continue;
		}
		else if (word(ch) == 2) // 특수 문자 
		{
			printf("%c is not a letter.\n", ch);
		}
		else
		{
			printf("%c is a letter #%d.\n", ch, word(ch));
		}
	}
	return 0;
}

int word(char ch)
{
	int n;
	
	if (isspace(ch) || ch == '\n')
	{
		return 1;
	}
	else if (isupper(ch))
	{
		n = (int)ch - 64;
		return n;
	}
	else if (islower(ch))
	{
		n = (int)ch - 96;
		return n;
	}
	else
	{
		return 2;
	}
}

