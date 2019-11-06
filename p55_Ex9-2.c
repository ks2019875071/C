#include <stdio.h>
#define cross '+'

void chline(char ch, int i, int j);
int main()
{
	char ch;
	int i, j;
	scanf("%c %d %d", &ch, &i, &j);
	chline(ch, i, j);
	return 0;
}

void chline(char ch, int i, int j)
{
	int n, m;
	
	for (m=(2*i-1)/2; m>0; m--)
		putchar(cross);
	
	for (n=i; n<=j; n++)
		putchar(ch);
		
	for (m=(2*i-1)/2; m>0; m--)
		putchar(cross);
}
