#include <stdio.h>
int main()
{
	long long int n, m, i, sum;
	sum = 0;
	
	scanf("%lld %lld", &n, &m);
	
	for (i=n-m; i<=n+m; i++)
	{
		sum += i;
	}
	
	printf("%lld", sum);
	
	return 0;
}
