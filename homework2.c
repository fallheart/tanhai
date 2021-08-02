#include<stdio.h>

int main()
{
	char cLetter;
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
		printf("Error,please enter one more letter\n");
		scanf("%c",&cLetter);
		printf("Letter means day is:");
		switch(cLetter)
		{
		case'u':
			printf("Tuesday\n");
			break;
		case'h':
			printf("Thursday\n");
			break;
		}
		break;
	default:
		printf("You enter the char is wrong!\n");		
		break;
	}
}
