#include <stdio.h>
int main()
{
	long long int a, b, i, sum;
	
	
	for (;;)
	{
		sum = 0;
		scanf("%lld %lld", &a, &b);
		
		if (a==b || a>b) //a=b거나 a>b일 때 루프 벗어남. 
		{
			break;
		}
		
		else
		{
			for (i=a; i<=b; i++)
			{
				sum += i*i;
			}
			printf("%lld\n", sum);
		}
	}
	return 0;
}
