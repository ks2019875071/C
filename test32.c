#include <stdio.h>
int main()
{
	int a, b, i;
	scanf ("%d %d", &a, &b);
	for (i=a; i<=b; i++)
	{
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	return 0;
}
