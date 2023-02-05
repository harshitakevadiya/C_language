/*
6.WAP to convert given string in togglecase.
*/
#include<stdio.h>
main()
{
	char a[200];
	int i;
	
	printf("Enter any string  :=");
	gets(a);
	printf("\n\n=======================\n\n");
	
	for(i=0;i<200;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		
	}
	
	puts(a);
	
}
