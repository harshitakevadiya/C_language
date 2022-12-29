#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int x,y,sum;
  printf("Enter the value of X :-");
  scanf("%d",&x);
  printf("\nEnter the value of y :-");
  scanf("%d",&y);
  sum=(x*x*x)-(3*(x*x)*y)+(3*x*(y*y))-(y*y*y);
  printf("\nThe answer of the given formula (x-y)3 is :- %d",sum);
  getch();

}