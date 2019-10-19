#include <stdio.h>
int main()
{
	int ROWS;
	int row;
	char ch;
	
	scanf("%d", &ROWS);
	
	for (row=0; row<ROWS; row++)
	{
		for (ch=('A'+row); ch<('A'+ROWS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
	
}
