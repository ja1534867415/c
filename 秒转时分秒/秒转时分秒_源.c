#define _CRT_SECURE_NO_WARNINGS//使函数合理
#include<stdio.h>//声明头文件

int Transition(int n, int o);//声明函数

/*主函数*/
int main()
{
	int a, b, c;//定义变量
	int d = 3600, e = 60;//定义变量
	printf("请输入一个不超过5位数的秒的数量：");//输出提示
	scanf("%d", &a);//读取输入
	printf("时，分，秒分别为：\n");//输出说明
	/*引用函数*/
	b = Transition(a, d);
	c = Transition(b, e);
	printf("%d\n", c);//输出秒的数量
	return 0;//结束函数
}

/*Sort函数*/
int Transition(int n, int o)
{
	int i = 0;//定义变量
	/*计算过程*/
	while (n >= o)
	{
		n -= o;
		i++;
	}
	printf("%d\n", i);//输出结果
	return n;//结束函数，返回数值
}