#include<stdio.h>
int main()
{
	char a;
	printf("�����һ����ĸ\n");
	a=getchar();
	switch(a)
	{
		case 'M':
			printf("����һ");
			break;
		case 'T':
			printf("����ڶ�����ĸ\n");
			if((a=getchar())=='u')
			{
				printf("���ڶ�");
				break; 
			}
			else if((a=getchar())=='h')
			{
				printf("������");
				break;
			}
			else
			{
				printf("�����������������");
				break; 
			}
		case 'W':
			printf("������");
			break;
		case 'F':
			printf("������");
			break;
		case 'S':
			printf("����ڶ�����ĸ\n");
			if((a=getchar())=='a')
			{
				printf("������");
				break; 
			}
			else if((a=getchar())=='u')
			{
				printf("������");
				break;
			}
			else
			{
				printf("�����������������");
				break; 
			}
		default:
			printf("�����������������");
			break;
	}
	return 0;
}
