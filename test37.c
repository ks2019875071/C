#include <stdio.h>
int main()
{
	int n;
	double  i, j, sum1, sum2;
	sum1 = 0.0; 
	
	scanf("%d", &n);
	
	for (i=1.0; i<(double)n+1.0; i=i+1.0)
	{
		sum1 += 1.0/i;
		printf("%lf\n", &sum1); //테스트용 코드 
	}
	
	printf("%lf", &sum1);
	
	return 0;
}
