#define  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", s[5]);//验证数组是否是按照0123456这样顺序排列的
	int i = 0;
	while (i < 10) 
	{
		printf("%d\n", s[i]);//如何输出数组
		i++;

	}
	return 0;
}