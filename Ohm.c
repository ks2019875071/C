#include <stdio.h>
int main()
{
	unsigned int R1, R2, R3, R4, R5;
	float R;
	
	scanf("%d %d %d %d %d", &R1, &R2, &R3, &R4, &R5);
	
	int R23 = R2+R3;
	float R234 = (R23*R4)/(R23+R4);
	R = R1+R234+R5;
	
	printf("%.5f", R);
	
	return 0;
}
