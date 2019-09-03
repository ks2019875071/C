#include <stdio.h>
int main()
{
	float x, y; 
	scanf("%f", &x); //표준입력 함수, %f는 소수점 이하 6자리까지
	y = (x*2.54);
	printf("%.2f", y); //.2를 써서 소수점 이하 2자리를 쓰게 만듬
	return 0;
} 
