/*
2. Write C program to check whether a string is palindrome or not.
*/
#include<stdio.h>
main()
{
	char a[100];
	int len,i,k,j,check=0;
	
	puts("enter the string :=");
	gets(a);
	len=strlen(a);
	
	puts("===========================");
	
	for(i=0,j=len-1;i<len,j>=0;i++,j--)
	{
			if(a[i]!=a[j])
				check=1;	
	}
	
	if(check==0)
	{
		puts("\nThis string is palindrom..");
	}
	else
	{
		puts("This string is not palindrom..");
	}
	puts("\n===========================");
	
	
}