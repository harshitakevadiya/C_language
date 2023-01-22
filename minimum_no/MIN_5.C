#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d,e,v1;
   clrscr();
   printf("Enter the value of A :- ");
   scanf("%d",&a);
   printf("Enter the value of B :- ");
   scanf("%d",&b);
   printf("Enter the value of C :- ");
   scanf("%d",&c);
   printf("Enter the value of D :- ");
   scanf("%d",&d);
   printf("Enter the value of E :- ");
   scanf("%d",&e);
   if(a==b&&a==c&&a==d&&a==e)
   {
	printf("\nAll value are similar");
   }
   else if(a==b&&a==c&&a==d)
   {
	printf("\nA,B,C,D are similar..");
	if(a<e)
	{
		printf("\nAnd A,B,C&D are minimum..");
	}
	else
	{
		printf("\nAnd E is minimu..");
	}

   }
   else if(a==b&&a==c&&a==e)
   {
	printf("\nA,B,C,e are similar..");
	if(a<d)
	{
		printf("\nAnd A,B,c,e are minimum..");
	}
	else
	{
		
		printf("\nAnd D is Minimum..");
		
	
	}

   }
   else if(a==b&&a==d&&a==e)
   {
	printf("\nA,B,d,e are similar..");
	if(a<d)
	{
		printf("\nAnd A,B,d,e are minimum..");
	}
	else
	{
		
		printf("\nAnd C is Minimum..");
		
	
	}

   }
   else if(a==c&&a==d&&a==e)
   {
	printf("\nA,C,D,E are similar..");
	if(a<d)
	{
		printf("\nAnd A,c,D,E are minimum..");
	}
	else
	{
		
		printf("\nAnd B is Minimum..");
		
	
	}

   }
   else if(b==c&&b==d&&b==e)
   {
	printf("\nB,C,D,E are similar..");
	if(a<d)
	{
		printf("\nAnd B,C,D,E are minimum..");
	}
	else
	{
		
		printf("\nAnd A is Minimum..");
		
	
	}

   }
   else if(a==b&&a==c)
   {
	printf("A,B,C are similer");
	if(d==e)
	{
		printf("D,E are similar");
		if(a<d)
		{
			printf("A,B,C are minimum..");
		}
		else
		{
			printf("D,E are minimum...");
		}
	}
	else
	{
		if(a<d&&a<e)
		{
			printf("A,B,C is minimum");
		}
		else
		{
			if(d<e)
			{
				printf("D is minimum..");
			}
			else
			{
				printf("E is minimum");
			}
		}
	}
   }
   else if(a==b&&a==d)
   {
	printf("A,B,D are similer");
	if(c==e)
	{
		printf("C,E are similar");
		if(a<c)
		{
			printf("A,B,D are minimum..");
		}
		else
		{
			printf("C,E are minimum...");
		}
	}
	else
	{
		if(a<c&&a<e)
		{
			printf("A,B,D is minimum");
		}
		else
		{
			if(c<e)
			{
				printf("C is minimum..");
			}
			else
			{
				printf("E is minimum");
			}
		}
	}
   }
   else if(a==b&&a==e)
   {
	printf("A,B,E are similer");
	if(c==d)
	{
		printf("C,D are similar");
		if(a<c)
		{
			printf("A,B,E are minimum..");
		}
		else
		{
			printf("C,D are minimum...");
		}
	}
	else
	{
		if(a<c&&a<d)
		{
			printf("A,B,E is minimum");
		}
		else
		{
			if(c<d)
			{
				printf("C is minimum..");
			}
			else
			{
				printf("D is minimum");
			}
		}
	}
   }
   else if(a==c&&a==d)
   {
	printf("A,C,D are similer");
	if(b==e)
	{
		printf("B,E are similar");
		if(a<d)
		{
			printf("A,C,D are minimum..");
		}
		else
		{
			printf("B,E are minimum...");
		}
	}
	else
	{
		if(a<b&&a<e)
		{
			printf("A,C,D is minimum");
		}
		else
		{
			if(b<e)
			{
				printf("D is minimum..");
			}
			else
			{
				printf("E is minimum");
			}
		}
	}
   }
   else if(a==c&&a==e)
   {
	printf("A,C,E are similer");
	if(b==d)
	{
		printf("B,D are similar");
		if(a<d)
		{
			printf("A,C,E are minimum..");
		}
		else
		{
			printf(" B,D are minimum...");
		}
	}
	else
	{
		if(a<d&&a<b)
		{
			printf("A,C,e is minimum");
		}
		else
		{
			if(b<d)
			{
				printf("B is minimum..");
			}
			else
			{
				printf("D is minimum");
			}
		}
	}
   }
   else if(a==d&&a==e)
   {
	printf("A,D,E are similer");
	if(b==c)
	{
		printf("B,C are similar");
		if(a<b)
		{
			printf("A,D,E are minimum..");
		}
		else
		{
			printf("B,C are minimum...");
		}
	}
	else
	{
		if(a<b&&a<c)
		{
			printf("A,D,E is minimum");
		}
		else
		{
			if(b<c)
			{
				printf("B is minimum..");
			}
			else
			{
				printf("C is minimum");
			}
		}
	}
   }
   else if(b==c&&b==d)
   {
	printf("B,C,D are similer");
	if(a==e)
	{
		printf("A,E are similar");
		if(b<a)
		{
			printf("B,C,D are minimum..");
		}
		else
		{
			printf("A,E are minimum...");
		}
	}
	else
	{
		if(b<a&&b<e)
		{
			printf("B,C,D is minimum");
		}
		else
		{
			if(a<e)
			{
				printf("A is minimum..");
			}
			else
			{
				printf("E is minimum");
			}
		}
	}
   }
   else if(a==d&&a==e)
   {
	printf("A,D,E are similer");
	if(b==c)
	{
		printf("b,c are similar");
		if(a<c)
		{
			printf("A,D,E are minimum..");
		}
		else
		{
			printf("B,C are minimum...");
		}
	}
	else
	{
		if(a<b&&a<c)
		{
			printf("A,D,E is minimum");
		}
		else
		{
			if(b<c)
			{
				printf("B is minimum..");
			}
			else
			{
				printf("c is minimum");
			}
		}
	}
   }
   else if(b==c&&b==e)
   {
	printf("B,C,E are similer");
	if(a==d)
	{
		printf("A,D are similar");
		if(b<a)
		{
			printf("B,C,E are minimum..");
		}
		else
		{
			printf("A,D are minimum...");
		}
	}
	else
	{
		if(b<a&&b<d)
		{
			printf("B,C,E is minimum");
		}
		else
		{
			if(a<d)
			{
				printf("A is minimum..");
			}
			else
			{
				printf("D is minimum");
			}
		}
	}
   }
   else if(b==d&&b==e)
   {
	printf("B,D,E are similer");
	if(a==c)
	{
		printf("A,C are similar");
		if(b<a)
		{
			printf("B,D,E are minimum..");
		}
		else
		{
			printf("A,C are minimum...");
		}
	}
	else
	{
		if(b<a&&b<c)
		{
			printf("B,D,E is minimum");
		}
		else
		{
			if(a<c)
			{
				printf("A is minimum..");
			}
			else
			{
				printf("C is minimum");
			}
		}
	}
   }
   else if(c==d&&c==e)
   {
	printf("C,D,E are similer");
	if(a==b)
	{
		printf("A,B are similar");
		if(c<a)
		{
			printf("C,D,E are minimum..");
		}
		else
		{
			printf("A,B are minimum...");
		}
	}
	else
	{
		if(c<a&&c<b)
		{
			printf("C,D,E is minimum");
		}
		else
		{
			if(a<b)
			{
				printf("A is minimum..");
			}
			else
			{
				printf("B is minimum");
			}
		}
	}
   }
   else if(a==b && d==c)
   {
	printf("\nA&B are similar \nAnd D&C are similar");
	if(a<d && a<e)
	{
		printf("\nA,B are minimum..");
	}
	else
	{
		if(d<e)
		{
			 printf("\nD,C are minimum....");
		}
		else
		{
			 printf("\nE is minimum...");
		}
	}
   }
   else if(a==b && c==e)
   {
	printf("\nA&B are similar \nAnd C&E are similar");
	if(a<c && a<d)
	{
		printf("\nA,B are minimum..");
	}
	else
	{
		if(c<d)
		{
			 printf("\nC,E are minimum....");
		}
		else
		{
			 printf("\nD is minimum...");
		}
	}
   }
    else if(a==b && d==e)
   {
	printf("\nA&B are similar \nAnd D&E are similar");
	if(a<d && a<c)
	{
		printf("\nA,B are minimum..");
	}
	else
	{
		if(d<c)
		{
			 printf("\nD,E are minimum....");
		}
		else
		{
			 printf("\nC is minimum...");
		}
	}
   }
   else if(a==d && b==c)
   {
	printf("\nA&D are similar \nAnd B&C are similar");
	if(a<b && a<e)
	{
		printf("\nA,D are minimum..");
	}
	else
	{
		if(b<e)
		{
			 printf("\nB,C are minimum....");
		}
		else
		{
			 printf("\nE is minimum...");
		}
	}
   }
  else if(a==d && b==e)
   {
	printf("\nA&D are similar \nAnd B&E are similar");
	if(a<b && a<c)
	{
		printf("\nA,D are minimum..");
	}
	else
	{
		if(b<e)
		{
			 printf("\nB,E are minimum....");
		}
		else
		{
			 printf("\nC is minimum...");
		}
	}
   }
   else if(a==d && c==e)
   {
	printf("\nA&D are similar \nAnd C&E are similar");
	if(a<c && a<b)
	{
		printf("\nA,D are minimum..");
	}
	else
	{
		if(c<b)
		{
			 printf("\nC&E are minimum....");
		}
		else
		{
			 printf("\nB is minimum...");
		}
	}
   }
  else if(a==e && b==c)
   {
	printf("\nA&E are similar \nAnd B&C are similar");
	if(a<b && a<d)
	{
		printf("\nA,E are minimum..");
	}
	else
	{
		if(b<d)
		{
			 printf("\nB,C are minimum....");
		}
		else
		{
			 printf("\nD is minimum...");
		}
	}
   }
   else if(a==e && b==d)
   {
	printf("\nA&E are similar \nAnd B&D are similar");
	if(a<b && a<c)
	{
		printf("\nA,E are minimum..");
	}
	else
	{
		if(b<c)
		{
			 printf("\nB,D are minimum....");
		}
		else
		{
			 printf("\nC is minimum...");
		}
	}
   }
   else if(a==e && c==d)
   {
	printf("\nA&E are similar \nAnd C&D are similar");
	if(a<c && a<b)
	{
		printf("\nA,E are minimum..");
	}
	else
	{
		if(c<b)
		{
			 printf("\nC,D are minimum....");
		}
		else
		{
			 printf("\nB is minimum...");
		}
	}
   
   }

  else if(b==c && d==e)
   {
	printf("\nB&C are similar \nAnd D&E are similar");
	if(b<d && b<a)
	{
		printf("\nB&C are minimum..");
	}
	else
	{
		if(d<a)
		{
			 printf("\nD&E are minimum....");
		}
		else
		{
			 printf("\nA is minimum...");
		}
	}
   }
   else if(b==d && c==e)
   {
	printf("\nB&D are similar \nAnd C&E are similar");
	if(b<c && b<a)
	{
		printf("\nB&D are minimum..");
	}
	else
	{
		if(c<a)
		{
			 printf("\nc&E are minimum....");
		}
		else
		{
			 printf("\nA is minimum...");
		}
	}
   }
   else if(b==e && c==d)
   {
	printf("\nB&E are similar \nAnd C&D are similar");
	if(b<c && b<a)
	{
		printf("\nB&E are minimum..");
	}
	else
	{
		if(c<a)
		{
			 printf("\nC&D are minimum....");
		}
		else
		{
			 printf("\nA is minimum...");
		}
	}
   }
  else if(a==c && b==e)
   {
	printf("\nA&C are similar \nAnd B&E are similar");
	if(a<b && a<d)
	{
		printf("\nA&C are minimum..");
	}
	else
	{
		if(b<d)
		{
			 printf("\nB&E are minimum....");
		}
		else
		{
			 printf("\nD is minimum...");
		}
	}
   }
  else if(a==c && b==d)
   {
	printf("\nA&C are similar \nAnd B&D are similar");
	if(a<b && a<e)
	{
		printf("\nA&C are minimum..");
	}
	else
	{
		if(b<e)
		{
			 printf("\nB&D are minimum....");
		}
		else
		{
			 printf("\nE is minimum...");
		}
	}
   }
   else if(a==c && d==e)
   {
	printf("\nA&C are similar \nAnd D&E are similar");
	if(a<d && a<b)
	{
		printf("\nA&C are minimum..");
	}
	else
	{
		if(d<b)
		{
			 printf("\nD&E are minimum....");
		}
		else
		{
			 printf("\nB is minimum...");
		}
	}
   }
   else if(a==b)
   {
	printf("\nA & B are similar");
	if(a<c&&a<d&&a<e)
	{
		printf("\nA & B is minimum");
	}
	else
	{
		if(c<d && c<e)
		{
			printf("\nC is minimum...");
		}
		else
		{
			if(d<e)
			{
				printf("\nD is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }

   else if(a==d)
   {
	printf("\nA & D are similar");
	if(a<c&&a<b&&a<e)
	{
		printf("\nA & D is minimum");
	}
	else
	{
		if(c<b && c<e)
		{
			printf("\nC is minimum...");
		}
		else
		{
			if(b<e)
			{
				printf("\nb is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }
   else if(a==e)
   {
	printf("\nA & E are similar");
	if(a<c&&a<b&&a<d)
	{
		printf("\nA & E is minimum");
	}
	else
	{
		if(c<b && c<d)
		{
			printf("\nC is minimum...");
		}
		else
		{
			if(b<d)
			{
				printf("\nB is minimum...");
			}
			else
			{
				printf("\nD is minimum...");
			}
		}
	}
   }
   else if(a==c)
   {
	printf("\nA & C are similar");
	if(a<b&&a<d&&a<e)
	{
		printf("\nA & C is minimum");
	}
	else
	{
		if(b<d && b<e)
		{
			printf("\nB is minimum...");
		}
		else
		{
			if(d<e)
			{
				printf("\nD is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }
   else if(b==c)
   {
	printf("\nB & C are similar");
	if(b<a&&b<d&&b<e)
	{
		printf("\nB & C is minimum");
	}
	else
	{
		if(a<d && a<e)
		{
			printf("\nA is minimum...");
		}
		else
		{
			if(d<e)
			{
				printf("\nD is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }
   else if(b==d)
   {
	printf("\nB & D are similar");
	if(b<a&&b<c&&b<e)
	{
		printf("\nB & D is minimum");
	}
	else
	{
		if(a<c && a<e)
		{
			printf("\nA is minimum...");
		}
		else
		{
			if(c<e)
			{
				printf("\nC is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }
  else if(b==e)
   {
	printf("\nB & E are similar");
	if(b<a&&b<d&&b<c)
	{
		printf("\nB & E is minimum");
	}
	else
	{
		if(a<d && a<c)
		{
			printf("\nA is minimum...");
		}
		else
		{
			if(d<c)
			{
				printf("\nD is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }
   else if(c==d)
   {
	printf("\nC & D are similar");
	if(c<a&&c<b&&c<e)
	{
		printf("\n C & D is minimum");
	}
	else
	{
		if(a<b && a<e)
		{
			printf("\nA is minimum...");
		}
		else
		{
			if(b<e)
			{
				printf("\nB is minimum...");
			}
			else
			{
				printf("\nE is minimum...");
			}
		}
	}
   }
   else if(c==e)
   {
	printf("\nC & E are similar");
	if(c<a&&c<b&&c<d)
	{
		printf("\nC & E is minimum");
	}
	else
	{
		if(a<b && a<d)
		{
			printf("\nA is minimum...");
		}
		else
		{
			if(b<d)
			{
				printf("\nB is minimum...");
			}
			else
			{
				printf("\nD is minimum...");
			}
		}
	}
   }
  else if(d==e)
   {
	printf("\nD & E are similar");
	if(d<a&&d<b&&d<c)
	{
		printf("\nD & B is minimum");
	}
	else
	{
		if(a<b && a<c)
		{
			printf("\nA is minimum...");
		}
		else
		{
			if(b<c)
			{
				printf("\nB is minimum...");
			}
			else
			{
				printf("\nC is minimum...");
			}
		}
	}
   }
   
  else
   {
     
     	if(a<b&&a<c&&a<d&&a<e)
	{
		printf("\nA is minimum");
	}
	else
	{
		if(b<c&&b<d&&b<e)
		{
			printf("\nB is minimum");
		}
		else
		{
			if(c<d&&c<e)
			{
				printf("\nC is minimum number");
			}
			else
			{
				if(d<e)
				{
					printf("\nD is minimum number");
				}
				else
				{
					printf("\nE is minimum number");
				}
			}
		}

	}

   }





   getch();

}