#include<stdio.h>
void main()
{
	char cLetter;
	char cLetter2;
	printf("Please enter one Letter\n");
	scanf("%c",&cLetter);
	printf("Letter means day is:");
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
		if(cLetter2='u')
		{
			printf("Tuesday\n");
		}
		else if(cLetter2='h')
			printf("Thursday\n");
		else
			printf("You enter the char is wrong!\n");
	default:
		printf("You enter the char is wrong!\n");		
		break;
	}
}
