#include <stdio.h>

int big(int *n, int count)
{
	int i, m = n[0];
	
	for (i=1; i<count; i++)
	{
		if (n[i] > m)
		{
			m = n[i];
		}
	}
	return m;
}

int main()
{
	int n[1000000];
	int count = 0;
	
	while ((scanf("%d", &n[count])) != EOF)
	{
		count++;
	}
	big (n, count);
	printf("%d", big(n, count));
	
	return 0;
}
