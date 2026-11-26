#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int AfterTime(int x, int y);

int main(void)
{
	int h, f, j;
	printf("请分别输入总头数和总脚数：");
	scanf("%d %d", &h, &f);
	j = AfterTime(h, f);
	printf("鸡的数量为：%d\n", j);
	return 0;
}

int AfterTime(int x, int y)
{
	int j;
	j = 2 * x - y / 2;
	return j;
}