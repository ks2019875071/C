#include <stdio.h>
#include <ctype.h>
int main()
{
	int ch;
	int high = 0;
	int low = 0;
	
	while((ch = getchar()) != EOF)
	{
		if (islower(ch))
			low++;
		else if (isupper(ch))
			high++;
	}
	printf("%d %d", high, low);
	
	return 0;
}
