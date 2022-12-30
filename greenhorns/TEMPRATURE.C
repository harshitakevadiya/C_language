#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  float c,fh;
  printf("Enter the current temprature into celsius degree :=");
  scanf("%f",&c);
  fh=((c*9/5)+32);
  printf("\nThe temprature in fahrenheit is :- %f",fh);
  getch();

}