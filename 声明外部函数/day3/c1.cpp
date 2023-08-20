#define  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	extern int g_val;
	printf("%d", g_val);
	return 0;
}