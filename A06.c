#include <stdio.h>
#include <string.h>

int main()
{
	char ch[31];
	
	scanf("%s", ch);
	
	int i = strlen(ch);
	
	int l, j, k, m;
	
	for (j=0; j<i; j++)
	{
		for (l=0; l<j; l++)
		{
			printf("-");
		}
		
		for (k=j; k<i; k++)
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
