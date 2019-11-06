#include <stdio.h>
#include <ctype.h>

int alpha(char);

int main()
{
	char ch;
	int num;
	while ((ch = getchar()) != EOF)
	{
		alpha(ch);
		if (64<num<91)
			printf("%c is a letter #%d\n", num, num-64);
		else if (96<num<123)
			printf("%c is a letter #%d\n", num, num-96);
		else if (num==1)
			printf("%c is not a letter.", num);
	}
	
	return 0;
}

int alpha(char num)
{
	if (isspace(num) || num == '\n')
		return 1;
	else if ('A'<num<'Z' || 'a'<num<'z')
	{
		return (int)num;
	}
	else
		return -1;
}
