//write a c program to check whether a year is leap year or not
#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int year;
  printf("Enter the year ");
  scanf("%d",&year);
  if(((year%4)==0 && (year%100!=0)) || (year%400)==0)
  {
    printf("This is leap year");
  }
  else
  {
    printf("This is not leap year");
  }
  getch();

}