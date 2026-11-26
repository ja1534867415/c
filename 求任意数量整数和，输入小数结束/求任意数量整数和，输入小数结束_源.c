#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//声明头文件

float Sum(float x, float y);//声明函数Sum

/*以下为主函数的定义*/
int main()
{
	float h=0, x;//
	printf("请输入,任意数量正数：\n");//输入提示
	/*累加循环*/
	while (1)
	{
		scanf("%f", &x);//读取数值
		/*计算判定*/
		if (x < 0)
			break;//结束循环
		else
			h = Sum(x,h);//调用函数Sum
	}
	printf("结果为%.2f\n", h);//输出计算结果
	return 0;//结束函数
}
/*以下为函数Sum的定义*/
float Sum(float x, float y)
{
	float b;//定义变量b
	b = x + y;//计算过程
	return b;//结束函数，并返回结果
}