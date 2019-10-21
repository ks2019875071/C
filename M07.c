#include <stdio.h>
int main()
{
	int n, m, i, count = 0;
	
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		scanf("%d", &m);
		if (m%3==0 || m%7==0)
		{
			if (m%5!=0)
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}
