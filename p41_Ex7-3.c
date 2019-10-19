#include <stdio.h>
int main()
{
	long long int n, count_odd, count_even;
	double sum_odd, sum_even, average_odd, average_even;
	
	count_odd = 0;
	sum_odd = 0;
	count_even = 0;
	sum_even = 0;
	average_odd = 0.0;
	average_even = 0.0;
	
	while ((scanf("%lld", &n)) == 1)
	{
		if (n == 0)
			break;
		
		if (n%2 == 0)
		{
			count_even++;
			sum_even += n;
		}
		
		else
		{
			count_odd++;
			sum_odd += n;
		}
	}
	
	if (count_odd == 0)
	{
		average_odd = 0.0;
	}
	else
	{
		average_odd = sum_odd/count_odd;
	}
	
	if (count_even == 0)
	{
		average_even = 0;
	}
	else
	{
		average_even = sum_even/count_even;
	}
	
	printf("%d %.2lf %d %.2lf", count_even, average_even, count_odd, average_odd);
	
	return 0;
}
