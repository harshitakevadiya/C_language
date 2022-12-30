#include<stdio.h>
#include<conio.h>
main()
{
   clrscr();
   int salary,hra,da,ta,total;
   printf("Enter your base salary  :");
   scanf("%d",&salary);
   hra=(10*salary)/100;
   da=(5*salary)/100;
   ta=(8*salary)/100;
   total=salary+hra+da+ta;
   printf("\nYour gross salary is  :=%d",total);
   getch();
}