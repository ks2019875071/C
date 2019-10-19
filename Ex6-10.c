#include <stdio.h>
int main()
{
	long long int a, b, i, sum;
	
	scanf("%ld %ld", &a, &b);
	
	while (a<b)
	{
		sum = 0;
		
		for (i=a; i<=b; i++)
		{
			sum += i*i;
		
		}
		printf("%d\n", sum);
		scanf("%ld %ld", &a, &b);
	}
	
	return 0;
}
