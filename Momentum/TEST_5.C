#include<stdio.h>
#include<conio.h>
main()
{
   float unit,unit1,total,v1,s1;
   clrscr();
   printf("Enter the Units...:= ");
   scanf("\n%f",&unit);
   if(unit>50)
   {
	total=25;
	unit1=unit-50;

	if(unit1>=100)
	{
		total=total+75;
		unit1=unit1-100;

		if(unit1>=100)
		{
			total=total+(100*1.20);
			unit1=unit1-100;
			if(unit1>0)
			{
			   total=total+(unit1*1.50);
			   s1=total*20/100;
			   total=total+s1;
			   printf("\nTotal bill is := %f",total);



			}
			else
			{
				s1=total*20/100;
				total=total+s1;
				printf("\n Total bill is :=%f",total);

			}


		}
		else
		{
		      v1=unit1*1.20;
		      total=total+v1;
		      s1=total*20/100;
		      total=total+s1;
		      printf("\nTotal bill is := %f",total);
		}

	}
	else
	{
	  v1=unit*0.5;
	  total=total+v1;
	  s1=total*20/100;
	  total=total+20;
	  printf("\nTotal bill is := %f",total);

	}
   }
   else
   {
	total=unit*0.50;
	s1=total*20/100;
	total=total+s1;
	printf("\nTotal bill is :=%f",total);
   }
   getch();

}