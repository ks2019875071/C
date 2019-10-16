#include <stdio.h>
int main()
{
	long int n, i, j, count;
	count = 1;
	
	scanf ("%ld", &n);
	
	if (n ==1)
	{
		putchar('0');
	}
	
	else if (n ==2)
	{
		putchar('1');
	}
	
	for (i=3; i<=n; i+=2)
	{
		int flag = 0;
		for (j=3; j<=(i/2); j++)
		{
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			count ++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
