#include <stdio.h>
int main()
{
	double x;
	scanf("%lf", &x); //����Ʈ 
	printf("%e", (x*950)/(3.0e-23)); //x*950=���� g��, 3.0e-23=�� ���� ���� g�� 
	return 0;
}
