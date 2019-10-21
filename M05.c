#include<stdio.h>
int main()
{
	char ch;
	int count = 0;
	
	while ((ch=getchar()) != '#')
	{
		if (ch == 'c' && (ch=getchar())=='a')
		{
			if ((ch=getchar()) == 't')
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}
