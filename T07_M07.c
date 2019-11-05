#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int i, num, count = 0;
	for (i=0; i<n; i++)
	{
		scanf("%d", &num);
		if (num%3==0 || num%7==0)
		{
			if (num%5!=0)
				count++;
		}
	}
	printf("%d", count);
	
	return 0;
}
