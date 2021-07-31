#include<stdio.h>
int main()
{
	char a;
	printf("输入第一个字母\n");
	a=getchar();
	switch(a)
	{
		case 'M':
			printf("星期一");
			break;
		case 'T':
			printf("输入第二个字母\n");
			if((a=getchar())=='u')
			{
				printf("星期二");
				break; 
			}
			else if((a=getchar())=='h')
			{
				printf("星期四");
				break;
			}
			else
			{
				printf("输入错误，请重新输入");
				break; 
			}
		case 'W':
			printf("星期三");
			break;
		case 'F':
			printf("星期五");
			break;
		case 'S':
			printf("输入第二个字母\n");
			if((a=getchar())=='a')
			{
				printf("星期六");
				break; 
			}
			else if((a=getchar())=='u')
			{
				printf("星期日");
				break;
			}
			else
			{
				printf("输入错误，请重新输入");
				break; 
			}
		default:
			printf("输入错误，请重新输入");
			break;
	}
	return 0;
}
