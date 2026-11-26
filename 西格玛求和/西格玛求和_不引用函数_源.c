#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//声明头文件

/*定义主函数*/
int main()
{
	int n=1,k=1,i=1,u=1,y=1;//定义整型变量
	float h = 1, p;//定义单精度实型变量
	/*求n和的do while循环*/
	do
	{
		i++;
		n += i;
	} while (i < 100);
	/*求k和的do while循环*/
	do
	{
		u++;
		k += u * u;
	} while (u < 50);
	/*求1/k和的do while循环*/
	do
	{
		y++;
		h += 1.0 / y;
	} while (y < 10);
	p = n + k + h;//求总和
	printf("结果为%.2f\n", p);//输出计算结果
	return 0;//结束函数
}