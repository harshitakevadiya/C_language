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
  sum=(x*x)+(2*x*y)+(2*x*z)+(y*y)+(2*y*z)+(z*z);
  printf("\nThe answer of the given formula (x+y+z)2 is :- %d",sum);
  getch();

}