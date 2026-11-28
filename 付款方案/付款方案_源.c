#define _CRT_SECURE_NO_WARNINGS//使函数合理
#include<stdio.h>//声明头文件

int Amount(int n,int o);//声明函数

/*主函数*/
int main()
{
	int a, b, c, d, e;//定义变量
	int f = 20, g = 10, h = 5, i = 1;
	printf("请输入付款金额：");//输出提示
	scanf("%d", &a);//读取输入
	printf("应付款：\n");//输出说明
	/*引用函数*/
	b = Amount(a, f);
	c = Amount(b, g);
	d = Amount(c, h);
	e = Amount(d, i);
	return 0;//结束函数
}

/*Sort函数*/
int Amount(int n,int o)
{
	int i = 0;//定义变量
	/*计算过程*/
	while (n >= o)
	{
		n -= o;
		i++;
	}
	printf("%d个%d元\n", i,o);//输出结果
	return n;//结束函数，返回数值
}