#define _CRT_SECURE_NO_WARNINGS//使程序合理
#include <stdio.h>//声明头文件

double YouHui(int value);//声明函数
double PreferentialPrice(int value, double y);//声明函数

/*定义主函数*/
int main()
{
	int x;//定义整型变量
	double y, z;//定义实型变量
	printf("请输入产品目前的价格：");//输出提示
	scanf("%d", &x);//读取整型数据
	y = YouHui(x);//引用函数
	z = PreferentialPrice(x, y);//应用函数
	printf("产品优惠后的价格为；%.2lf", z);//输出结果
	return 0;//结束函数
}

/*定义函数*/
double YouHui(int value)
{
	double y;//定义实型变量
	if (value < 1600)
		y = 0.00;//符合条件时，不优惠
	else if (value >= 1600 && value < 2400)
		y = 0.05;//符合条件时，优惠5%
	else if (value >= 2400 && value < 3200)
		y = 0.10;//符合条件时，优惠10%
	else if (value >= 3200 && value < 6400)
		y = 0.15;//符合条件时，优惠15%
	else
		y = 0.20;//符合条件时，优惠20%
	return y;//结束函数，并返回结果
}

/*定义函数*/
double PreferentialPrice(int value, double y)
{
	double p;//定义整型变量
	p = value - value * y;//计算过程
	return p;//结束函数，并返回结果
}