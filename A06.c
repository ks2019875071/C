#include <stdio.h>
#include <string.h>

int main()
{
	char ch[31];
	char c;
	int i;
	
	scanf("%s", ch);
	
	for (i = 0 ; i< strlen(ch); i++)
	{
		
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
