#include <stdio.h>
int main()
{
	int pascal[61][61];
	int i;
	
	pascal[0][0] = 1;
	
	for (i=0; i<60; i++)
	{
		pascal[i][0] = 1;
		pascal[i][i] = 1;
	}
	
	
}
