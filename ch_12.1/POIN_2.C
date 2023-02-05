#include<stdio.h>
#include<conio.h>
//wap to swap two variables using pointer.
main()
{
	int a,b;
	int *p,*p1;
	clrscr();
	printf("Enter the value of A:=\n");
	scanf("%d",&a);
	printf("Enter the value of B:=\n");
	scanf("%d",&b);
	printf("\n\n==========================\n\n");
	p=&a;
	p1=&b;

	*p=*p+*p1;
	*p1=*p-*p1;
	*p=*p-*p1;
	printf("The value of A => %d\n",*p);
	printf("The value of B => %d\n",*p1);

      getch();

}