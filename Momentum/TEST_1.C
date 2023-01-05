#include<stdio.h>
#include<conio.h>
main()
{
	char value;
	clrscr();
	printf("Enter any Character :=");
	scanf("\n%c",&value);
	if((value>='a' && value<='z')||(value>='A' && value<='b'))
	{
		printf("\nThis is Alphabet");
	}
	else if(value >='0' && value <='9')
	{
		printf("\nThis is Number");
	}
	else
	{
		printf("\nThis is special character");
	}



	getch();

}