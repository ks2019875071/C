#include <stdio.h>
#define cross '+'

void chline(int i, int j);
int main()
{
	char ch;
	int n, i, j;
	scanf("%c %d %d", &ch, &i, &j);
	chline(i, j);
	for (n=i; n<=j; n++)
		putchar(ch);
	chline(i, j);
	return 0;
}

void chline(int i, int j)
{
	int m;
	for (m=(2*i-1)/2; m>0; m--)
		putchar(cross);
}
