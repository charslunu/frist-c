#define  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>//strcpy��Ҫ�����ͷ�ļ�
struct Book
{
	char name[20];
	short price;
};//�ǵ�Ҫ��;
int main()
{
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;
	printf("%s\n", pb->name);//Ҳ����д��printf("%s\n", (*pb).name);
	printf("%d\n", pb->price);
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	b1.price = 15;//price��������һ���������Կ���������
	strcpy(b1.name, "C++");//strcpy-string copy-�ַ�������
	//name��һ������������������һ����ַ���ܺ�priceһ����
	printf("�޸ĺ������:%s\n",b1.name);
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
	//.	�ǽṹ�����.��Ա
	//->�ǽṹ��ָ��->��Ա
	return 0;
}