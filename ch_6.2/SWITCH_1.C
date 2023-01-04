#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	char ch;
	clrscr();
	printf("Hello this is telecom call service..");
	printf("\n If you want to comunicate in 'GUJARATI' than press : 1 ");
	printf("\n If you want to comunicate in 'HINDI' than press : 2 ");
	printf("\n If you want to comunicate in 'ENGLISH' than press : 3 ");
	scanf("\n%d",&choice);

	switch(choice)
	{
		case 1:
			printf("\nTelecom call service ma tamaru swagat chhe..!");
			printf("\n press 'A' for good morning..");
			printf("\n press 'B' for good after-noon..");
			printf("\n press 'C' for good evening..");

			printf("\nEnter your choice...");
			scanf("\n%c",&ch);
			switch(ch)
			{
				case 'A':
					 printf("\nGood Morning..");
					 break;
				case 'B':
					 printf("\nGood Afternoon..");
					 break;
				case 'C':
					 printf("\nGood Evening..");
					 break;
				default:
					printf("\n Invalid choice...");
					break;

			}
			break;
		case 2:
			printf("\ntelecom call service par apaka swagat haiii ..!");
			printf("\n press 'A' for good morning..");
			printf("\n press 'B' for good after-noon..");
			printf("\n press 'C' for good evening..");

			printf("\nEnter your choice...");
			scanf("\n%c",&ch);
			switch(ch)
			{
				case 'A':
					 printf("\nGood Morning..");
					 break;
				case 'B':
					 printf("\nGood Afternoon..");
					 break;
				case 'C':
					 printf("\nGood Evening..");
					 break;
				default:
					printf("\n Invalid choice...");
					break;

			}
			break;
		case 3:
			printf("\nWlcome to our Telecom call service..!");
			printf("\n press 'A' for good morning..");
			printf("\n press 'B' for good after-noon..");
			printf("\n press 'C' for good evening..");

			printf("\nEnter your choice...");
			scanf("\n%c",&ch);
			switch(ch)
			{
				case 'A':
					 printf("\nGood Morning..");
					 break;
				case 'B':
					 printf("\nGood Afternoon..");
					 break;
				case 'C':
					 printf("\nGood Evening..");
					 break;
				default:
					printf("\n Invalid choice...");
					break;

			}
			break;
		default:
			printf("\nInvalid Choice");
			break;

	}
	getch();
}