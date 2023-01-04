#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d,e;
   clrscr();
   printf("\nEnter the value of A :- ");
   scanf("%d",&a);
   printf("\nEnter the value of B :- ");
   scanf("%d",&b);
   printf("\nEnter the value of C :- ");
   scanf("%d",&c);
   printf("\nEnter the value of D :- ");
   scanf("%d",&d);
   printf("\nEnter the value of E :- ");
   scanf("%d",&e);
   (a==b && a==c && a==d && a==e)

	  ? printf("\n All values are same...")
	  : (a>b && a>c && a>d && a==e)
	       ?printf("\n A is maximum...")
	       :(b>c && b>a && b>d && b>e)
		       ?printf("\n B is maximum...")
		       :(c>a && c>b && c>d && c>e)
				?printf("\n C is maximum")
				:(d>a && d>b && d>c && d>e)
					?printf("\nD is maximum...")
					:(e>a && e>b && e>c && e>d)
						?printf("\nE is maximum...")
						:printf("\nInvalid value...");

   getch();

}