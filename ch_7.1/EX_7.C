#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int year,i;
  i=2000;


  while(i<=3000)
  {
	if(((i%4)==0 && (i%100!=0)) || (i%400)==0)
	{
		printf("\n%d",i);
	}
	i++;

  }
  getch();

}