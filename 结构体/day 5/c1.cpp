#define  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>//strcpy需要用这个头文件
struct Book
{
	char name[20];
	short price;
};//记得要打;
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;
	printf("%s\n", pb->name);//也可以写成printf("%s\n", (*pb).name);
	printf("%d\n", pb->price);
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 15;//price本质上是一个变量所以可以这样改
	strcpy(b1.name, "C++");//strcpy-string copy-字符串拷贝
	//name是一个数组名，本质上是一个地址不能和price一样改
	printf("修改后的名字:%s\n",b1.name);
	printf("修改后的价格：%d\n", b1.price);
	//.	是结构体变量.成员
	//->是结构体指正->成员
	return 0;
}