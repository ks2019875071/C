#include <stdio.h>
int main()
{
	int i, n[1001], sum = 0;
	double a;
	
	for (i=0; i<=11; i++)
	{
		scanf(" %d", &n[i]);
		sum += n[i];
	}
		
	int big = n[0];
	
	
	for (i=1; i<=11; i++)
	{
		if (n[i]>big)
			big = n[i];
	}
	
	a = (double)big/sum*100.0;
	
	printf("%.2lf%%", a);
	
	return 0;
}
