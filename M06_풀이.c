#include <stdio.h>

#define over_time1 1.6 //40
#define over_time2 2.1 //55
#define tax1 0.08 //35*x
#define tax2 0.12 //50*x
#define tax3 0.18 //60*x
#define tax4 0.25 //over 60*x

int main()
{
	double time, x;
	double salary, tax;
	
	while ((scanf("%lf %lf", &time, &x)) == 2)
	{
		if (time<=40)
		{
			salary = time*x;
		}
		else if (time>40 && time<=55)
		{
			salary = 40.0*x + (time-40)*x;
		}
		else if (time>55)
		{
			salary = 40.0*x + 15.0*x + (time-55)*x;
		}
		
		if (salary<=35.0*x)
		{
			tax = salary*tax1;
		}
		else if (salary>35*x && salary<=50*x)
		{
			tax = 35*x*tax1 + (salary-35*x)*tax2;
		}
		else if (salary>50*x && salary<=60*x)
		{
			tax = 35*x*tax1 + 15*x*tax2 + (salary-50*x)*tax3;
		}
		else if (salary>60*x)
		{
			tax = 35*x*tax1 + 15*x*tax2 + 10*x*tax3 + (salary-60*x)*tax4;
		}
		
		printf("%.1lf %.1lf %.1lf\n", salary, tax, salary-tax);
	}
	
	
	
	return 0;
}
