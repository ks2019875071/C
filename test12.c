#include <stdio.h>
#include <string.h>
int main()
{
	char a[31], b[31]; /*[n]은 담을 수 있는 문자 개수(n-1)*/
	int c, x, y, o;
	
	scanf("%s %s", a, b);// %s = string 라는 뜻. & 기호는 이 경우에는 안씀.
	scanf("%d", &o); //나이 입력 
	
	x = strlen(a);
	y = strlen(b); //strlen()은 a의 글자 개수를 알려줌
	c = (x+y);
	
	printf("%d %d", c, o);
	
	return 0;
}
