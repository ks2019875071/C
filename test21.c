#include <stdio.h>
int main()
{
	const int b = 60;
	int a, hour, minute;
	scanf("%d", &a);
	hour = (a/b);
	minute = (a-b);
	
	while (a>0)
	{
		printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n", a, hour, minute);
		scanf("%d", &a);
	}
	
	
	return 0;
}
