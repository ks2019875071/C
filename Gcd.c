#include <stdio.h>
int main()
{
	long int a, b;
	long int i, j;
	
	scanf("%d %d", &a, &b);
	
	for (i=a; i>0; i--)
	{
		if (a%i == 0)
		{
			for (j=b; j>0; j--)
			{
				if (b%j==0 && i==a)
				{
					printf("%d", j);
					break;
				}
			}
		}
	}
	
	return 0;
}
