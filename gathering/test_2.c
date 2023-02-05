/*
2. C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.
*/
#include<stdio.h>
#include<string.h>

void Lenghth(char a[])
{
	int len,i;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("The lenghth of string is :=> %d ",len);
}

void main()
{
	char str[200];
	
	puts("Enter the string :=>");
	gets(str);
	
	puts("\n====================================\n");
	puts(str);
	
	puts("\n====================================\n");
	
	Lenghth(str);
}