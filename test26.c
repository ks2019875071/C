#include <stdio.h>
int main()
{
	int h, w, n;
	int H=1, W=1;
	scanf("%d %d %d", &h, &w, &n);
	
	while (n>0)
	{
		while (H<h)
		{
			H++;
			n--;
		}
		while (W<w)
		{
			W++;
			n--;
		}
	}
	
	printf("%d%d", H, W);
	
	return 0;
}
