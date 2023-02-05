/*
Find length of number of given string in 2D character array.
*/
#include<stdio.h>
#include<string.h>
main()
{
	int n,count=0,len;
	puts("Enter the raw := ");
	scanf("%d",&n);
	
	char s[n][200],s1[100];
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(s[i]);
	}
	printf("\n\n========================\n\n");
	for(i=0;i<n;i++)
	{
		//fflush(stdin);
		puts(s[i]);
	}
	
	printf("\n\n\===\n\n %c",s[2][3]);
	
	
	//printf("\n\nTotal lenghth is := %d",count);
	printf("\n\n========================\n\n");
}