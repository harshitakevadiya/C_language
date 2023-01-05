#include<stdio.h>
#include<conio.h>
main()
{
   clrscr();
   int a,b,c,d,e;
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
	if(d==e)
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
	if(B==C)
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
  
  
    
      

   
   

   getch();

}