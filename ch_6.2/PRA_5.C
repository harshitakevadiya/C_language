#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   clrscr();
   printf("\nEnter the value of A :- ");
   scanf("%d",&a);
   printf("\nEnter the value of B :- ");
   scanf("%d",&b);
   printf("\nEnter the value of C :- ");
   scanf("%d",&c);

   (a==b && a==c)

	  ? printf("\n All values are same...")
	  : (a>b && a>c)
	       ?printf("\n A is maximum...")
	       :(b>c && b>a )
		       ?printf("\n B is maximum...")
		       :(c>a && c>b)
				?printf("\n C is maximum")
				:printf("\nInvalid value...");

   getch();

}