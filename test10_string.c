#include <stdio.h>
#include <string.h>
int main()
{
	char Fname[31], Lname[31];
	int age, num;
	
	scanf("%s %s", Fname, Lname);
	scanf("%d", &age);
	num = strlen(Fname)+strlen(Lname);
	
	printf("%d %d", num, age);
	
	return 0;
}
