#include <stdio.h>
int main()
{
	long int n, i; //n = working days
	long long int sum = 0;
	
	scanf("%ld", &n);
	
	for (i=1; i<=n; i++)
	{
		sum += 1000*i;
	}
	
	printf("%lld", sum);
	
	return 0;
}
