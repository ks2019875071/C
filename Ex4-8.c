#include <stdio.h>
int main()
{
	const double m = 1.609;
	const double g = 3.785;
	
	double mile, gallon, km, litter;
	
	scanf ("%lf %lf", &mile, &gallon);
	
	km = mile*m;
	litter = gallon*g;
	
	double mpg = mile/gallon;
	double lpk = litter/km*100;
	
	printf ("%.1lf mpg or %.1lf liters / 100Km.", mpg, lpk);
	
	return 0;
}
