#include <stdio.h>
int main()
{
	long long int n, sales=0, total=0;
	scanf("%d", &n);
	while (n>0)
	{
		n--;
		sales += 1000;
		total += sales;
	}
	printf("%lld", total);
	return 0;
}
