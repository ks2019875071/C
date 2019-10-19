#include <stdio.h>
#include <string.h>
int main()
{
	char fname[31], lname[31];
	int f, l;
	scanf("%s %s", fname, lname);
	
	f = strlen(fname);
	l = strlen(lname);
	
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", f, f, l, l);
	
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d", f, f, l, l);
	
	return 0;
}
