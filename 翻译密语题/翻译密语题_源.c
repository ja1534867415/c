#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char translate(char x);

int main(void)
{
	char a, b, c, d, e, f, g, h, i, j;
	printf("请输入5个英文字符：");
	scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
	f = translate(a);
	g = translate(b);
	h = translate(c);
	i = translate(d);
	j = translate(e);
	printf("编译结果为：%c%c%c%c%c\n", f, g, h, i, j);
	return 0;
}
char translate(char x)
{
	char p;
	static char q;
	q = q + 1;
	p = x + q;
	return p;
}