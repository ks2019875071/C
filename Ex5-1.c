#include <stdio.h>
#define time 60
int main()
{
	long int n, hour, minute, line;
	
	line = 0;
	
	while (line<20)
	{
		scanf("%ld", &n);
		
		if (n<=0)
		{
			break;
		}
		
		else
		{
			hour = n/time;
			minute = n%time;
		
			printf("Time in minute(s): %ld = %d hour(s) and %d minute(s)\n", n, hour, minute);
			line++;
		}
	}
	
	return 0;
}
