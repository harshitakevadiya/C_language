#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int num;
  printf("Enter the Number:= ");
  scanf("%d",&num);
  if(num==0)
  {
    printf("\nThis number is neutral");
  }
  else if(num > 0)
  {
    printf("\nThis number is positive ");
  }
  else
  {
    printf("\nThis number is negetive ");
  }
  getch();
}