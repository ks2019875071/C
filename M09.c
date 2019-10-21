#include <stdio.h>
int main()
{
	double h, f, m = 0;
	int n, i;
	
	
	for (;;)
	{
		scanf("%d", &n);
		if (n==0)
			break;
		
		else
		{
			for (i=1; i<=n; i++)
			{
				scanf("%lf", &f);
				m += 1.0/f;
			}
		}
		h = (double)n/m;
		printf("%.3lf", h);
	}
	return 0;
}
