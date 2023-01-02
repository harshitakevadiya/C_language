#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int num;
  printf("Enter the number := ");
  scanf("%d",&num);
  if((num%2)==0)
  {
    printf("This is even number ");
  }
  else
  {
    printf("This is odd number");
  }
  getch();

}