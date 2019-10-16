#include <stdio.h>
int main()
{
	long int R1, R2, R3, R4, R5;
	double R;
	
	scanf("%d %d %d %d %d", &R1, &R2, &R3, &R4, &R5);
	
	long int R23 = R2+R3;
	double R234 = (double)(R23*R4)/(R23+R4);
	R = R1+R234+R5;
	
	printf("%.5lf", R);
	
	return 0;
}
