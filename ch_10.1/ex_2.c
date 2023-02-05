#include<stdio.h>

main()
{
	char a;
	
	printf("Enter any character in lowercase :=");
	scanf("%c",&a);
	printf("\n\n=======================\n\n");
	
	if(a>='a' && a<='z')
	{
		printf("the character converted  in to uppercase := %c",a-32);
	}
	else
	{
		printf("Invalid Values...");
	}
}