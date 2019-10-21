//1µÇ = 10È©
//10µÇ = 1¸»
//1È© =  180.39m3
// 1m3 = 1000l 

#include <stdio.h>
int main()
{
	double m3, hop, mal, d, l;
	scanf("%lf", &m3);
	
	l = 1000*m3;
	hop = m3*5543.54;
	d = hop/10;
	mal = d/10;
	
	printf("%.2lf cubic meters are equivalent to each of the following:\n", m3);
	printf("%.2lf hob\n", hop);
	printf("%.2lf doe\n", d);
	printf("%.2lf mal\n", mal);
	printf("%.2lf liters", l);
	
	return 0;
}
