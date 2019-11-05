#include<stdio.h>
int main()
{
	int i, s, sum = 0;
	double per;
	int max = 0;
	
	for (i=0; i<12; i++)
	{
		scanf("%d", &s);
		sum += s;
		max = max < s ? s : max;
	}
	
	per = max*100.0/sum;
	
	printf("%.2lf%%\n", per);
	
	return 0;
}
