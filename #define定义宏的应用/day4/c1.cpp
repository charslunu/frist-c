#define  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
/*int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 20;
	int b = 30;
	int max = MAX(a, b);
	printf("max=%d\n", max);

	return 0;
*/
//上面是正常的函数比大小，接下来我们利用宏定义
#define MAX(x,y) (x>y?x:y)
int main()
{
	int a = 20;
	int b = 30;
    int max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}

