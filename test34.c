#include <stdio.h>
int main()
{
	float a, b;
	
	while (scanf("%f %f", &a, &b)==2) //2개가 제대로 입력되는 동안 루프한다. 여기서는 %f를 사용하여 수치형이 들어오지 않아도 루프가 종료된다.
	{
		printf("%.3f\n", (a-b)/(a*b));
	}
	return 0;
}
