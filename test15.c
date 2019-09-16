#include <stdio.h>
int main()
{
	float Mbs, MBs, MB, speed;
	scanf("%f %f", &Mbs, &MB);
	MBs = Mbs/8;
	speed = MB/MBs;
	printf("%.2fsec", speed);
	return 0;
}
