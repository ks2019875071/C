#include <stdio.h>
int main()
{
	long long int n, i, m, sum = 0;
	scanf ("%lld", &n);
	
	for (i=1; i<=n; i++)
	{
		scanf("%lld", &m);
		sum += m;
	}
	
	printf ("%lld", sum);
	
	return 0;
}
