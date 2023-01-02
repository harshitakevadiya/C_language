//Write a c program to check whether a number is divisible by 5 and 11 or not
#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int num;
  printf("Enter the Number := ");
  scanf("\n%d",&num);
  if((num%5)==0)
  {
    printf("%d Number is divisable by 5 ",num);
  }
  else if((num%11)==0)
  {
    printf("%d Number is divisable by 11",num);
  }
  else
  {
   printf("This number is not divisable by 5 and 11");
  }
  getch();

}