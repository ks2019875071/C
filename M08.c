#include <stdio.h>
int main()
{
	int R1, R2, R3, R4, R5;
	double R;
	
	scanf("%d %d %d %d %d", &R1, &R2, &R3, &R4, &R5);
	
	int R12 = R1+R2;
	double R12_3 = (double)(R12*R3)/(R12+R3);
	double R12_3_5 = (double)R12_3+R5;
	double Rm = (double)(R1*R12_3_5)/(R1+R12_3_5);
	R = R3+Rm+R4;
	
	printf("%.0lf\n", R);
	
	return 0;
}
