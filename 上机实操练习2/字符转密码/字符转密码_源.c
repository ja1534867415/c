#define _CRT_SECURE_NO_WARNINGS//使代码合理
#include <stdio.h>//声明头文件

char Transition(char x);//声明函数

/*定义主函数*/
int main()
{
	char a, b;//定义字符型变量
	printf("请输入一个小写字母：");//输出提示
	scanf("%c", &a);//读取数值
	b = Transition(a);//引用函数
	printf("转换结果为：%c\n", b);//输出结果
	return 0;//结束函数
}

/*定义函数*/
char Transition(char x)
{
	char l;//定义变量
	l = x - (x - 90 + x - 97);//计算结果
	return l;//结束函数，并返回结果
}