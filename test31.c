#include <stdio.h>
int main()
{
	long long int N, a, sum;
	
	scanf("%ld", &N);
	sum = 0;
	int i;
	for (i=0; i<N; i++)
	{
		scanf ("%ld", &a);
		sum += a;
	}
	printf("%ld", sum);
	
	return 0;
}
