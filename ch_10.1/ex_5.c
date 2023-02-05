#include<stdio.h>
/*
5.WAP to convert given string in titlecase.
*/
main()
{
	char a[200];
	int i,count=0;
	
	printf("Enter any string :=");
	gets(a);
	printf("\n\n=======================\n\n");
		
	for(i=0;i<200;i++)
	{
		if((a[i]>='a' && a[i]<='z')||(a[i]==32))
		{
			if(a[i]==32)
			{
				
				if(a[i+1]>='a' && a[i+1]<='z')
				{
					a[i+1]=a[i+1]-32;
				}
					
			}
			else if(i==0)
			{
			
				a[0]=a[0]-32;
			}
		}
		else
		{
			if(a[i]>='A' && a[i]<='Z')
			{
				
				if(((a[i-1])==32) || (i == 0))
				{
						
				}
				else
				{
				
						a[i]=a[i]+32;
				}
				
			}
			
		}
		
	}
	
	puts(a);
	
}