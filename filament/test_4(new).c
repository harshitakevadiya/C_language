/*
4. Write C program to remove all repeated characters in a string.
*/
#include<stdio.h>
main()
{
	char a[100];
	int len,i,k,j,c=0,l;
	
	puts("enter the string :=");
	gets(a);
	len=strlen(a);
	printf("\nthe lenghth is := %d",len);
	puts("\n===========================\n");
	for(l=0;l<len;l++)
	{
		for(i=0;i<len-c;i++)
		{
			for(j=i+1;j<len-c;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					k=j;
					for(l=j+1;l<len;l++)
					{
						a[k]=a[l];
						k++;
					}
					a[(len)-c]='\0';
				}
			}	
		
		}
	}	
	puts("\n===========================");
	puts("\nthe string is :=");
	puts(a);	
}