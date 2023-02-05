#include<stdio.h>
/*
3.WAP to convert given string in lowercase.
*/
main()
{
	char a[200];
	int i;
	
	printf("Enter any string in Upprecase :=");
	gets(a);
	printf("\n\n=======================\n\n");
	
	for(i=0;i<200;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	
	puts(a);
	
}