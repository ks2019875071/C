#include <stdio.h>
int main()
{
	char ch, ch1 = ' ', ch2 = ' ';
	int count = 0;
	
	while ((ch=getchar()) != '#')
	{
		if (ch1=='c' && ch2=='a' && ch=='t')
			count++;
		ch1 = ch2;
		ch2 = ch;
	}
	printf("%d", count);
	
	return 0;
}
