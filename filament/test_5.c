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
	
	puts("\n\nEnter the string :");	
		for(i=0;i<n;i++)
		{
			fflush(stdin);
			
			gets(s1);
			len=strlen(s1);
			
			for(j=0;j<len;j++)
			{
				s[i][j]=s1[j];
				
			}
			s[i][len]='\0';
		}
	printf("\n\n========================\n\n");
			
	for(i=0;i<n;i++)
	{
		for(j=0;s[i][j]!='\0';j++)
		{
				printf("%c",s[i][j]);
		}
		printf("\n");
		
		count++;
	}
	
	printf("\n\nTotal lenghth is := %d",count);
	printf("\n\n========================\n\n");
}