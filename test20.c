#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, s, m;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	s = (a+b+c)/2.0;
	m = sqrt(s*(s-a)*(s-b)*(s-c));

	
	if (a>b+c || b>a+c || c>a+b)
		printf("Not a Triangle");

	else {	
	printf("%.2lf", m);
	}
}
