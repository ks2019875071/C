#include <stdio.h>
int main()
{
	float a, b;
	
	while (scanf("%f %f", &a, &b)==2) //2���� ����� �ԷµǴ� ���� �����Ѵ�. ���⼭�� %f�� ����Ͽ� ��ġ���� ������ �ʾƵ� ������ ����ȴ�.
	{
		printf("%.3f\n", (a-b)/(a*b));
	}
	return 0;
}
