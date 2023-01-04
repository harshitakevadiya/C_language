#include<stdio.h>
#include<conio.h>
main()
{
   clrscr();
   int a,b,c;
   printf("Enter the value of A :- ");
   scanf("%d",&a);
   printf("Enter the value of B :- ");
   scanf("%d",&b);
   printf("Enter the value of C :- ");
   scanf("%d",&c);
   if(a==b&&a==c)
   {
	printf("\nAll value are similar");
   }
   else if(a==b)
   {
	printf("\nA,B are similar..");
	if(a<c)
	{
		printf("\nAnd A&B both are minimum..");
	}
	else
	{
		printf("\nAnd C is minimu..");
	}

   }
   else if(a==c)
   {
	printf("\nA,C are similar..");
	if(a<b)
	{
		printf("\nAnd A&C both are minimum..");
	}
	else
	{
		printf("\nAnd B is minimu..");
	}

   }
   else if(b==c)
   {
	printf("\nB,C are similar..");
	if(c<a)
	{
		printf("\nAnd B&C both are minimum..");
	}
	else
	{
		printf("\nAnd A is minimu..");
	}

   }
   else
   {
      if(a<b)
      {
		if(a<c)
		{
			printf("A is Minimum");
		}
		else
		{
			printf("C is minimum");
		}
      }
      else
      {
		if(b<c)
		{
			printf("B is minimum");
		}
		else
		{
			printf("C is minimum");
		}
      }
   }

   getch();

}