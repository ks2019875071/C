#include <stdio.h>
int main()
{
	char ch[31];
	char c;
	int i = 0;
	
	while ((c = getchar()) != EOF)
	{
		ch[i++] = c;
	}
	
	int l, j, k, m;
	
	for (j=0; j<i-1; j++)
	{
		for (l=0; l<j; l++)
		{
			printf("-");
		}
		
		for (k=j; k<i-2; k++)
		{
			printf("%c", ch[k]);
		}
		
		for (m=i-2; m>=j; m--)
		{
			printf("%c", ch[m]);
		}
		
		for (l=0; l<j; l++)
		{
			printf("-");
		}
		
		printf("\n");
		
	}
	
	return 0;
}
