/*
3. Write C program to remove spaces, blanks from a string.
*/
#include<stdio.h>
main()
{
	char a[100];
	int len,i,k,j,c=0,l;
	
	puts("enter the string :=");
	gets(a);
	len=strlen(a);
	
	puts("\n===========================\n");
	for(l=0;l<len;l++)
	{
		for(i=0;i<len-c;i++)
		{
			if(a[i]==32)
			{
				c++;
				k=i;
				for(j=i+1;j<len;j++)
				{
					a[k]=a[j];
					k++;
			
				}
				a[(len)-c]='\0';
			}
		}
	}
	
	puts("\n===========================");
	puts("\nthe string is :=");
	puts(a);	
}