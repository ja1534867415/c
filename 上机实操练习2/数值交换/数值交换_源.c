#define _CRT_SECURE_NO_WARNINGS//使代码合理
#include <stdio.h>//声明头文件

/*定义主函数*/
int main()
{
	int a, b,c,d;//定义整型变量
	printf("请输入三个整数：");//输出提示
	scanf("%d%d%d", &a,&b,&c);//读取数值
	/*以下为计算过程*/
	d = a;
	a = c;
	c = b;
	b = d;
	printf("转换结果为：%d，%d，%d\n", a,b,c);//输出结果
	return 0;//结束函数
}