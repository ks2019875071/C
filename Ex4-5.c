#include <stdio.h>
int main()
{
	float Mbs, MB;
	scanf("%f %f", &Mbs, &MB);
	
	printf("%.2fsec", MB/Mbs*8);
	
	return 0;
}
