#define _CRT_SECURE_NO_WARNINGS//使程序合理
#include<stdio.h>//说明头文件
#define pi 3.14//定义符号常量pi
double mj(double x);//声明函数mj
double zc(double y);//声明函数zc
/*以下为主函数的定义*/
int main(void)
{
	double r, s, l;//定义变量r,s,l
	printf("此程序用于计算圆的面积和周长\n请输入圆的半径");//提示用户输入
	scanf("%lf", &r);//调用输入函数
	s = mj(r);//调用mj函数
	l = zc(r);//调用zc函数
	printf("此圆的面积为%lf,周长为%lf\n", s, l);//输出计算结果
	return 0;//返回主函数
}
/*以下为mj函数的定义*/
double mj(double x)
{
	double a;//定义变量a
	a = pi * x * x;//定义计算过程
	return a;//返回变量a
}
/*以下为zc函数的定义*/
double zc(double y)
{
	double b;//定义变量b
	b = pi * 2 * y;//定义计算过程
	return b;//返回变量b
}