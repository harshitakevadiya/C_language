#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int x,y,mul;
  printf("Enter the value of X :-");
  scanf("%d",&x);
  printf("\nEnter the value of Y :-");
  scanf("%d",&y);
  mul=(x*x)-(2*x*y)+(y*y);
  printf("\nThe answer of given formula (x-y)2 is := %d",mul);
  getch();

}