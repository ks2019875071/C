#include <stdio.h>

#define tax_rate1 0.15 //until 300
#define tax_rate2 0.20 //until 450
#define tax_rate3 0.25

int main()
{
	long int time, over_time;
	double salary, net_income, tax;
	
	scanf("%d", &time);
	over_time = time-40;
	
	int i;
	for (i = time; i>0; i--)
	{
		salary += 10.00;
		if (over_time > 0)
		{
			salary += 5.00;
			over_time --;
		}
	}
	printf("%.2lf ", salary);
	
	if (salary<=300)
	{
		tax = salary*tax_rate1;
		net_income = salary-tax;
	}
	
	if (300<salary && salary<=450)
	{
		tax = 300*tax_rate1+(salary-300)*tax_rate2;
		net_income = salary-tax;
	}
	
	if (450<salary)
	{
		tax = 300*tax_rate1+150*tax_rate2+(salary-450)*tax_rate3;
		net_income = salary-tax;
	}
	
	printf("%.2lf %.2lf", tax, net_income);
	
	return 0;
}
