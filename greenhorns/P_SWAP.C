#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int a,b;
  printf("Enter the value of 'a' :-");
  scanf("%d",&a);
  printf("\nEnter the value of 'b' :-");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n a :=%d",a);
  printf("\n b :=%d",b);

  getch();

}