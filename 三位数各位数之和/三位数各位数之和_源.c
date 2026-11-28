#define _CRT_SECURE_NO_WARNINGS//使函数合理
#include<stdio.h>//声明头文件

int Sum(int n);//声明函数

/*主函数*/
int main()
{
	int a, b;//定义变量
	printf("输入三位数的整数：");//输出提示
	scanf("%d", &a);//读取输入
	b = Sum(a);//引用函数
	printf("各项之和为：%d", b);//输出结果
	return 0;//结束函数
}

/*Sum函数*/
int Sum(int n)
{
	int a, b, c, d;//定义变量
	/*计算过程*/
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100;
	d = a + b + c;
	return d;//结束函数，返回结果
}