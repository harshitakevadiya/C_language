/*
4.WAP to convert given string in uppercase.
*/
#include<stdio.h>
main()
{
	char a[200];
	int i;
	
	printf("Enter any string in lowercase :=");
	gets(a);
	printf("\n\n=======================\n\n");
	
	for(i=0;i<200;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}
	
	puts(a);
	
}
