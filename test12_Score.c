#include <stdio.h>
int main()
{
	char a[10], b[10];
	float word, english, math, average;
	
	scanf("%s %s", a, b);
	scanf("%f %f %f", &word, &english, &math);
	average = (word+english+math)/3;
	
	printf("\"%-10s %10s\"%8.1f", a, b, average);
	
	return 0;
}
