#include<stdio.h>
#include<conio.h>
main()
{
	char choice;
	clrscr();
	printf("Press 'M' for Monday");
	printf("\nPress 'T' for Tuseday");
	printf("\nPress 'W' for Wednesday");
	printf("\nPress 't' for Thursday");
	printf("\nPress 'F' for Friday");
	printf("\nPress 'S' for Saturday");
	printf("\nPress 's' for Sunday");
	printf("\nEnter your Choice :=");
	scanf("\n%c",&choice);

	switch(choice)
	{
		case 'M':
			printf("Today is 'Monday'");
			break;
		case 'T':
			printf("Today is 'Tuesday'");
			break;
		case 'W':
			printf("Today is 'Wednesday'");
			break;
		case 't':
			printf("Today is 'Thursday'");
			break;
		case 'F':
			printf("Today is 'Friday'");
			break;
		case 'S':
			printf("Today is 'Saturday'");
			break;
		case 's':
			printf("Today is 'Sunday'");
			break;
		default:
			printf("Invalid Choice");
			break;

	}

	getch();
}