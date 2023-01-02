#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int num1,num2,num3;
  printf("Enter the First number := ");
  scanf("%d",&num1);
  printf("\nEnter the Second number := ");
  scanf("%d",&num2);
  printf("\nEnter the Third number := ");
  scanf("%d",&num3);
  if(num1>num2 && num1>num3)
  {
    printf("\n%d is maximum number ",num1 );
  }
  else if(num2>num1 && num2>num3)
  {
    printf("\n%d is maximum number ",num2);
  }

  else
  {
    printf("\n%d is maximum number",num3);
  }

  getch();

}