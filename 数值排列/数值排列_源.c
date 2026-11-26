#define _CRT_SECURE_NO_WARNINGS//使程序合理
#include<stdio.h>//

void JiaoH(double x, double y);

int main()
{
	double a, b;
	printf("输入两个数");
	scanf("%.2lf%.2lf", &a, &b);
	JiaoH(a, b);
	return 0;
}

void JiaoH(double x, double y)
{
	double t;
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	printf("由大到小排列为：%f,%f", x, y);
}