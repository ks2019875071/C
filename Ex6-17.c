#include <stdio.h>
int main()
{
	unsigned int x, r, y, count;
	count = 0;
	
	scanf("%d %d %d", &x, &r, &y);
	
	if (x*(double)r/100.0>=y)
	{
		printf("NO");
		return 0;
	}
	
	while (x>0)
	{
		x += x*(double)r/100.0;
		count++;
		x -= y;
	}

	printf("%d", count);
	
	return 0;
}
