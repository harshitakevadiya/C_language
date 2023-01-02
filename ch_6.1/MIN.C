#include<stdio.h>
#include<conio.h>
main()
{
   clrscr();
   int num1,num2;
   printf("Enter fist number :-");
   scanf("%d",&num1);
   printf("\nEnter second numbe :-");
   scanf("%d",&num2);
   if(num1 > num2)
   {
      printf("\n%d is minimun number",num2);
   }
   else
   {
       printf("\n%d is minimum number ",num1);
   }
   getch();

}