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
//�����������ĺ����ȴ�С���������������ú궨��
#define MAX(x,y) (x>y?x:y)
int main()
{
	int a = 20;
	int b = 30;
    int max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}

