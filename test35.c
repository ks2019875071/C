#include <stdio.h>
int main()
{
	long long int a, b, i, sum;
	
	
	for (;;)
	{
		sum = 0;
		scanf("%lld %lld", &a, &b);
		
		if (a==b || a>b) //a=b�ų� a>b�� �� ���� ���. 
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
