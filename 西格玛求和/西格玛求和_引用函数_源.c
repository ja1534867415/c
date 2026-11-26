#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//声明头文件

int Sum1();//声明函数Sum1
int Sum2();//声明函数Sum2
float Sum3();//声明函数Sum3
float Sum4(int x, int y, float z);//声明函数Sum4

/*定义主函数*/
int main()
{
	/*定义变量*/
	int n, k;
	float h, p;
	/*引用函数*/
	n = Sum1();
	k = Sum2();
	h = Sum3();
	p = Sum4(n, k, h);
	printf("结果为%.2f\n", p);//输出计算结果
	return 0;//结束函数
}

/*定义函数Sum1*/
int Sum1()
{
	int n = 1, i = 1;//定义变量
	/*求n和的do while循环*/
	do
	{
		i++;
		n += i;
	} while (i < 100);
}

/*定义函数Sum2*/
int Sum2()
{
	int k = 1, i = 1;//定义变量
	/*求k和的do while循环*/
	do
	{
		i++;
		k += i * i;
	} while (i < 50);
}

/*定义函数Sum3*/
float Sum3()
{
	/*定义变量*/
	float h=1.0;
	int i = 1;
	/*求1/k和的do while循环*/
	do
	{
		i++;
		h += 1.0 / i;
	} while (i < 10);
	return h;//结束函数，并返回结果
}

/*定义函数Sum4*/
float Sum4(int x,int y,float z)
{
	float p;//定义变量
	p = x + y + z;//求和
	return p;//结束函数，并返回结果
}