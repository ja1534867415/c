#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//声明头文件
int Sum(int x, int y, int z);//定义Sum函数
/*
定义主函数
*/
int main(void)
{
	int a, b, c,s;//定义整数变量a,b,s
	printf("请输入三个整数");//提示用户输入三个整数
	scanf("%d%d%d", &a, &b, &c);//读取两个整数，分别记作变量a,b
	s = Sum(a, b, c);//引用函数Sum
	printf("求平均值结果为：%d\n", s);//输出计算结果
	return 0;//返回main函数
}
/*
函数Sum的计算过程
*/
int Sum(int x, int y,int z)
{
	int k;//定义变量k
	k = (x + y + z)/3;//定义变量之间的关系
	return k;//返回变量k
}