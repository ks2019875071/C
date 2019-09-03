#include <stdio.h>

void hello()
{
	printf("Hello, World.");
}
void ks()
{
	printf("Kyungsung University.");
}
void cs()
{
	printf("Dept. of Computer Science.");
}


int main()
{
	hello(); printf("\n");
	hello(); printf("\n");
	hello(); printf(" "); ks(); printf("\n");
	ks(); printf("\n");
	ks(); printf(" "); cs(); printf("\n");
	hello(); printf(" "); ks(); printf(" "); cs(); printf("\n");
	return 0;
}
