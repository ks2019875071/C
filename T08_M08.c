#include <stdio.h>
int main()
{
	long long int R1, R2, R3, R4, R5, R12;
	double R123, R1235, middle, R;
	scanf("%lld %lld %lld %lld %lld", &R1, &R2, &R3, &R4, &R5);
	
	R12 = R1+R2;
	R123 = (double)(R12*R3)/(R12+R3);
	R1235 = (double)R123+R5;
	middle = (R1235*R1)/(R1235+R1);
	R = R3+middle+R4;
	
	printf("%.0lf", R);
	
	return 0;
}
