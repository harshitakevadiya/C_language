#include<stdio.h>
#include<conio.h>
main()
{
   int choice;
   clrscr();
   printf("\nPress 1 for january");
   printf("\nPress 2 for february");
   printf("\nPress 3 for march");
   printf("\nPress 4 for april");
   printf("\nPress 5 for may");
   printf("\nPress 6 for june");
   printf("\nPress 7 for july");
   printf("\nPress 8 for august");
   printf("\nPress 9 for september");
   printf("\nPress 10 for october");
   printf("\nPress 11 for november");
   printf("\nPress 12 for december");

   printf("\nEnter ypur choice :- ");
   scanf("%d",&choice);
   switch(choice)
   {
	case 1:
		printf("\nRunning month is january");
		break;
	case 2:
		printf("\nRunning month is february");
		break;
	case 3:
		printf("\nRunning month is march");
		break;
	case 4:
		printf("\nRunning month is april");
		break;
	case 5:
		printf("\nRunning month is may");
		break;
	case 6:
		printf("\nRunning month is june");
		break;
	case 7:
		printf("\nRunning month is july");
		break;
	case 8:
		printf("\nRunning month is august");
		break;
	case 9:
		printf("\nRunning month is september");
		break;
	case 10:
		printf("\nRunning month is october");
		break;
	case 11:
		printf("\nRunning month is November");
		break;
	case 12:
		printf("\nRunning month is December");
		break;
	default:
		printf("\nInvalid choice");
		break;
   }

   getch();
}