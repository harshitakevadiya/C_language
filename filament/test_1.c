/*
1. Write C program to count frequency of each character in a string.
*/
#include<stdio.h>
main()
{
	char a[100];
	int len,i,k,j,count=0,check=0;
	
	puts("enter the string :=");
	gets(a);
	len=strlen(a);
	
	puts("===========================");
	
	for(i=0;i<len;i++)
	{
		count=0;
		check=0;
		for(k=0;k<i;k++)
		{
			if(a[i]==a[k])
				check=1;
		}
		
		if(check==0)
		{
			for(j=i;j<len;j++)
			{
				if(a[i]==a[j])
				{
					count++;
				}
			}
			
			printf("\nThe frequency of %c is => %d ",a[i],count);
		}
	}
	
	puts("\n===========================");
	
	
}