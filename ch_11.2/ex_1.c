/*
1.WAP to create infinite calc using UDF, switch case
and Loop.
*/
#include<stdio.h>
#include<string.h>

void Addition(float x,float y)
{
	printf("\n\nThe Addition of %f and %f is :=> %f ",x,y,x+y);
}
void Substraction(float x,float y)
{
	printf("\n\nThe Substraction of %f and %f is :=> %f ",x,y,x-y);
}
void Multiplication(float x,float y)
{
	printf("\n\nThe Multiplication of %f and %f is :=> %f ",x,y,x*y);
}
void Division(float x,float y)
{
	printf("\n\nThe Division of %f and %f is :=> %f ",x,y,x/y);
}
void Modulus(float x,float y)
{
	int a=(int)x%(int)y;
	printf("\n\nThe Modulus of %f and %f is :=> %d ",x,y,a);
}



void main()
{
	float a,b;
	int x,y;
	char ch;
	
	printf("\nEnter the First value :=");
	scanf("%f",&a);
	printf("\nEnter the second values :=");
	scanf("%f",&b);
	
	
	do
	{
		printf("\n\n==============================\n");
		printf("\nPress '+' for Addition");
		printf("\nPress '-' for Substraction");
		printf("\nPress '*' for Multiplication");
		printf("\nPress '/' for Division");
		printf("\nPress '%%' for Modulus");
		printf("\nPress '0' for exit :");
	

		printf("\n\nEnter your choice :=>");
		fflush(stdin);
		scanf("%c",&ch);
	
		switch(ch)
		{
			case '+':
				Addition(a,b);
				break;
			case '-':
				Substraction(a,b);
				break;
			case '*':
				Multiplication(a,b);
				break;
			case '/':
				Division(a,b);
				break;
			case '%':
				x=a;
				y=b;
				Modulus(a,b);
				break;
			defalut :
				printf("\nInvalid choice :");
				break;
			
		}
	}while(ch !='0');
	
}