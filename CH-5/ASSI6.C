#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int x,y,z,sum;
  printf("Enter the value of X :-");
  scanf("%d",&x);
  printf("\nEnter the value of y :-");
  scanf("%d",&y);
  printf("\nEnter the value of Z :-");
  scanf("%d",&z);
  sum=(x*x*x)-(3*(x*x)*y)-(3*(x*x)*z)+(3*x*(y*y))+(6*x*y*z)+(3*x*(z*z))-(y*y*y)-(3*(y*y)*z)-(3*y*(z*z))-(z*z*z);
  printf("\nThe answer of the given formula (x-x-z)3 is :- %d",sum);
  getch();

}