//1•ÏC = 10E®œ
//10•ÏC = 1¢¨°Ì
//1E®œ =  180.39m3
// 1m3 = 1000l 

#include <stdio.h>
int main()
{
	double m3, cm3, hop, mal, d, l;
	scanf("%lf", &m3);
	
	l = 1000*m3;
	cm3 = m3*1000000;
	hop = cm3/180.39;
	d = hop/10;
	mal = d/10;
	
	printf("%.2lf cubic meters are equivalent to each of the following:\n", m3);
	printf("%.2lf hob\n", hop);
	printf("%.2lf doe\n", d);
	printf("%.2lf mal\n", mal);
	printf("%.2lf liters", l);
	
	return 0;
}
