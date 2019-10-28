#include <stdio.h>
int main()
{
	char ch, prev, pprev;
	int ct = 0;
	prev = ' ';
	pprev = ' ';
	
	while ((ch=getchar()) != '#')
	{
		if (ch == 't' && prev == 'a' && pprev == 'c')
			ct++;
		pprev = prev;
		prev = ch;
	}
	
	printf ("%d\n", ct);
	
	return 0;
}
