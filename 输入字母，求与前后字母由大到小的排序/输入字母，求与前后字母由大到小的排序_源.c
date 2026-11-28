#define _CRT_SECURE_NO_WARNINGS//使函数合理
#include<stdio.h>//声明头文件

char Sort(char n);//声明函数

/*主函数*/
int main()
{
	char a, b, c;//定义变量
	printf("输入一个小写字母（a和z除外）：");//输出提示
	scanf("%c", &a);//读取输入
	b = Sort(a);//引用函数
	c = Sort(a);
	printf("排序顺序为：%c,%c,%c", b, a, c);//输出结果
	return 0;//结束函数
}

/*Sort函数*/
char Sort(char n)
{
	static int i = 1;//定义变量
	/*计算过程*/
	if (i)
		n--;
	else
		n++;
	i--;
	return n;//结束函数，返回结果
}