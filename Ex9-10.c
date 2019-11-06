#include <stdio.h>

int to_base_n(int, int);
int main()
{
	long long int x;
	int y;
	scanf("%lld %d", &x, &y);
	to_base_n(x, y);
	
	return 0;
}

int to_base_n(int x, int y)
{
	int n;
	
	n = x%y;
	x = x/y;
	
	if (x>y)
		to_base_n(x, y);
	else
		printf("%d", x);
	printf("%d", n);
}
