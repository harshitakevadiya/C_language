#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d;
   clrscr();
   printf("\nEnter the value of A :- ");
   scanf("%d",&a);
   printf("\nEnter the value of B :- ");
   scanf("%d",&b);
   printf("\nEnter the value of C :- ");
   scanf("%d",&c);
   printf("\nEnter the value of D :- ");
   scanf("%d",&d);
   if(a==b && a==c && a==d)
   {
	   printf("\n All values are same...");
   }
   else
   {
     if(a>b && a>c && a>d)
     {
	printf("\n A is maximum...");
     }
     else
     {
	if(b>c && b>a && b>d)
	{
		printf("\n B is maximum...");
	}
	else
	{
		if(c>a && c>b && c>d)
		{
			printf("\n C is maximum");
		}
		else
		{
			if(d>a && d>b && d>c)
			{
				printf("\nD is maximum...");
			}
			else
			{
				Printf("\nInvalid value...");
			}
		}
	}
     }
   }
   getch();

}