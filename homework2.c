#include<stdio.h>
void main()
{
	char cLetter;
	char cLetter2;
	char cLetter3;
	printf("Please enter one Letter:");
	scanf("%c",&cLetter);
	printf("Error,please enter one more letter:");
	switch(cLetter)
	{
	case'm':
		printf("Monday\n");
		break;
	case'f':
		printf("Friday\n");
		break;
	case'w':
		printf("Wednesday\n");
		break;
	case't':
		getchar();
		scanf("%c",&cLetter2);
		printf("Letter means day is:");
		if(cLetter2='u')
		{
			printf("Tuesday\n");
		}
		else if(cLetter2='h')
		{
			printf("Thursday\n");
		}
		else
		{	
			printf("You enter the char is wrong!\n");
		}
		break;
	case's':
		getchar();
		scanf("%c",&cLetter3);
		if(cLetter3='a')
		{
			printf("Saturday\n");
		}
		else if(cLetter3='u')
			printf("Sunday\n");
		else
			printf("You enter the char is worng!\n");
		break;
	default:
		printf("You enter the char is wrong!\n");		
		break;
	}

}
