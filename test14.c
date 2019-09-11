#include <stdio.h>
int main()
{
	char a[11], b[11];
	int l, e, m;
	double c;
	scanf("%s %s", a, b);
	scanf("%d %d %d", &l, &e, &m);
	
	c = (l+e+m)/3.0; //실수를 나눠줘야 결과가 실수로 나오므로 3 대신 3.0을 쓴다 
	
	printf("\"%-10s %10s\"%8.1lf", a, b, c); /*앞에 -10을 붙인 것은 10칸에 string을 출력하는데 왼쪽으로 붙이게 함
	%8.1f는 8자리 안에 출력하는데 소수점을 1자리로 제한*/
}
