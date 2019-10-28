#include<stdio.h>
int main()
{
	int i, s, sum = 0;
	double p;
	int max = 0;
	
	for (i=0; i<12; i++)
	{
		scanf("%d", &s);
		sim += s;
		max = max < s ? s : max;
	}
	
	p = max*100.0/sum;
	
	printf("%.2lf%%\n", p);
	
	return 0;
}
