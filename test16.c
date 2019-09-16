#include <stdio.h>
#include <string.h>
int main()
{
	char name1[31], name2[31];
	scanf("%s %s", name1, name2);
	
	int count1 = strlen(name1), count2 = strlen(name2);
	
	printf("%s %s/n", name1, name2);
	printf("%d%-d", count1, count2);
	
	return 0;
}
