#define  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", s[5]);//��֤�����Ƿ��ǰ���0123456����˳�����е�
	int i = 0;
	while (i < 10) 
	{
		printf("%d\n", s[i]);//����������
		i++;

	}
	return 0;
}