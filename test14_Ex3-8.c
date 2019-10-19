#include <stdio.h>
int main()
{
	float cup;
	scanf ("%f", &cup);
	
	/*
	pint = 2*cup;
	ounce = cup/8;
	tablespoon = cup/16;
	teaspoon = cup/48;
	*/
	
	printf ("%f cups are equivalent to each of the following:\n", cup);
	printf ("%f pints\n", cup/2);
	printf ("%f tablespoons\n", cup*16);
	printf ("%f teaspoons", cup*48);
	
	return 0;
}
