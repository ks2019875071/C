#include <stdio.h>

int to_base_n(int n, int b)
{
	int q[100];
	int i = 0;
	int count = 0;
	while (n-b >= 0)
	{
		q[i++] = n%b;
		n = n/b;
		count++;
	}
	
	q[count] = n;
	for (i=count; i>=0; i--)
	{
		printf ("%d", q[i]);
	}
}

int main()
{
	int n, b;
	scanf("%d %d", &n, &b);
	
	to_base_n(n, b);
	
	return 0;
}
