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
  sum=(x*x)+(2*x*y)+(y*y);
  printf("\nThe answer of the given formula (x+y)2 is :- %d",sum);
  getch();

}