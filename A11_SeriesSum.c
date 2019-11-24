#include <stdio.h>
int main()
{
	float x, sum = 0;
	int n, i;
	
	scanf("%f %d", &x, &n);
	
	for (i=1; i<=n; i++)
	{
		if (i%2 == 0)
			sum -= x/i;
		else
			sum += x/i;
	}
	
	printf("%.5f", sum);
	
	return 0;
}
