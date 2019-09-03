#include <stdio.h>
int main()
{
	long long int a, b, c; //64bit 까지 사용 가능하게 함
	scanf("%lld", &a);
	scanf("%lld", &b);
	c = a+b;
	printf("%lld", c);
	return 0;
}
