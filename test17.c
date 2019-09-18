#include <stdio.h>
int main()
{
	const double L = 1.609;
	const double km = 3.785;
	
	double gallon, mile;
	
	scanf("%lf", &mile);
	scanf("%lf", &gallon);
	
	double mpg = mile/gallon;
	double lpk = (gallon*km)/(mile*L)*100;
	
	printf("%.1f mpg or %.1f liters / 100km.", mpg, lpk);
	
	return 0;
}
