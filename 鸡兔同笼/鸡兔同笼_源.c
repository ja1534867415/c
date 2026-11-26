#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ChickenRabbitQuantity(int x,int y);
int RabbitQuantity(int x, int y);

int main(void)
{
	int h, f, j, t;
	printf("请分别输入总头数和总脚数：");
	scanf("%d %d", &h, &f);
	j = ChickenQuantity(h, f);
	t = RabbitQuantity(h, f);
	printf("鸡的数量为：%d\n兔的数量为：%d\n", j, t);
	return 0;
}

int ChickenQuantity(int x,int y)
{
	int j;
	j = 2 * x - y / 2;
	return j;
}

int RabbitQuantity(int x,int y)
{
	int t;
	t = y / 2 - x;
	return t;
}