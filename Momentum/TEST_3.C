#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("\nEnter the value of A :=");
	scanf("\n%d",&a);
	printf("\nEnter the value of B :=");
	scanf("\n%d",&b);
	printf("\nEnter the value of C :=");
	scanf("\n%d",&c);
	printf("\nEnter the value of D :=");
	scanf("\n%d",&d);
	if(a==b&&a==c&&a==d)
	{
		printf("\nAll values are same");
		
	}
	else
	{
		if(a==b&&a==c)
		{
			if(a>d)
			{

				printf("\nA,B,C are same...");
				printf("\nA,B,C are maximum...");
			}
			else
			{
				printf("\nD is maximum...");
			}
		}
		else if(a==b&&a==d)
		{
			if(a>c)
			{

				printf("\nA,B,D are SAME...");
				printf("\nA,B,D are maximum...");
			}
			else
			{
				printf("\nC is maximum...");
			}
		}
		else if(a==c&&a==d)
		{
			if(a>b)
			{

				printf("\nA,C,D are same....");
				printf("\nA,C,D are maximum...");
			}
			else
			{
				printf("\nB is maximum...");
			}
		}

		else if(b==c&&b==d)
		{
			if(b>a)
			{
				printf("\nB,C,D are same...");

				printf("\nB,C,D are maximum...");
			}
			else
			{
				printf("\nA is maximum...");
			}
		}


		else if(a==b)
		{
			printf("\nA,B are same...");
			if(c==d)
			{
				printf("\nC,D are same...");
				if(a>c)
				{
					printf("\nA,B are maximum");
				}
				else
				{
					printf("\nC,D are maximum..");
				}
			}
			else
			{
				if(a>c&&a>d)
				{
					printf("\nA,B are maximum...");
				}
				else
				{
					if(c>d)
					{
						printf("\nC is maximum...");
					}
					else
					{
						printf("\nD is maximum...");
					}
				}
			}
		}
		else if(a==c)
		{
			printf("\nA,C are same...");
			if(b==d)
			{
				printf("\nB,D are same...");
				if(a>b)
				{
					printf("\nA,C are maximum");
				}
				else
				{
					printf("\nB,D are maximum...");
				}
			}
			else
			{
				if(a>b&&a>d)
				{
					printf("\nA,C are maximum...");
				}
				else
				{
					if(b>d)
					{
						printf("\nB is maximum...");
					}
					else
					{
						printf("\nD is maximum...");
					}
				}
			}
		}
		else if(a==d)
		{
			printf("\nA,D are same...");
			if(b==c)
			{
				printf("\nB,C are same...");
				if(a>b)
				{
					printf("\nA,D are maximum");
				}
				else
				{
					printf("\nB,C are maximum..");
				}
			}
			else
			{
				if(a>b&&a>c)
				{
					printf("\nA,D are maximum...");
				}
				else
				{
					if(b>c)
					{
						printf("\nB is maximum...");
					}
					else
					{
						printf("\nC is maximum...");
					}
				}
			}
		}
		else if(b==c)
		{
			printf("\nB,C are same...");
			if(a==d)
			{
				printf("\nA,D are same...");
				if(b>a)
				{
					printf("\nB,C are maximum...");
				}
				else
				{
					printf("\nA,D are maximum...");
				}
			}
			else
			{
				if(b>a&&b>d)
				{
					printf("\nB,C are maximum...");
				}
				else
				{
					if(a>d)
					{
						printf("\nA is maximum...");
					}
					else
					{
						printf("\nD is maximum...");
					}
				}
			}
		}
		else if(b==d)
		{
			printf("\nB,D are same...");
			if(a==c)
			{
				printf("\nA,C are same...");
				if(b>a)
				{
					printf("\nB,D are maximum...");
				}
				else
				{
					printf("\nA,C are maximum...");
				}
			}
			else
			{
				if(b>a&&b>c)
				{
					printf("\nB,D are maximum...");
				}
				else
				{
					if(a>c)
					{
						printf("\nA is maximum...");
					}
					else
					{
						printf("\nC is maximum...");
					}
				}
			}
		}
		else if(c==d)
		{
			printf("\nC,D are same...");
			if(a==b)
			{
				printf("\nA,B are same...");
				if(c>a)
				{
					printf("\nC,D are maximum...");
				}
				else
				{
					printf("\nA,B are maximum...");
				}
			}
			else
			{
				if(c>a&&c>b)
				{
					printf("\nC,D are maximum...");
				}
				else
				{
					if(a>b)
					{
						printf("\nA is maximum...");
					}
					else
					{
						printf("\nB is maximum...");
					}
				}
			}
		}
		else
		{
			if(a>b&&a>c&&a>d)
			{
				printf("\nA is maximum...");
			}
			else
			{
				if(b>c&&b>d)
				{
					printf("\nB is maximum...");
				}
				else
				{
					if(c>d)
					{
						printf("\nC is maximum...");
					}
					else
					{
						printf("\nD is maximum");
					}
				}
			}
		}
			
		
	}

	getch();
}