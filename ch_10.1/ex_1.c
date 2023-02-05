/*
1.WAP to convert given character in lowercase.
*/
#include<stdio.h>

main()
{
	char a;
	
	printf("Enter any character in capital :=");
	scanf("%c",&a);
	printf("\n\n=======================\n\n");
	
	if(a>='A' && a<='Z')
	{
		printf("the character converted  in to lowercase := %c",a+32);
	}
	else
	{
		printf("Invalid Values...");
	}
}