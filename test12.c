#include <stdio.h>
#include <string.h>
int main()
{
	char a[31], b[31]; /*[n]�� ���� �� �ִ� ���� ����(n-1)*/
	int c, x, y, o;
	
	scanf("%s %s", a, b);// %s = string ��� ��. & ��ȣ�� �� ��쿡�� �Ⱦ�.
	scanf("%d", &o); //���� �Է� 
	
	x = strlen(a);
	y = strlen(b); //strlen()�� a�� ���� ������ �˷���
	c = (x+y);
	
	printf("%d %d", c, o);
	
	return 0;
}
