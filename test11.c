#include <stdio.h>
int main()
{
	float cup;
	scanf ("%f", &cup);
	float pint = cup/2, tablespoon = cup*16, teaspoon = cup*48;
	printf("%f cups are equivalent to each of the following:\n", cup);
	printf("%f pints\n", pint);
	printf("%f tablespoons\n", tablespoon);
	printf("%f teaspoons", teaspoon);
	
	return 0;
}
