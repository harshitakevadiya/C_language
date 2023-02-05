/*
1. C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.
*/
#include<stdio.h>

void sum(int n[],int len)
{
	int sum=0,i;
	for(i=0;i<len;i++)
	{
		sum=sum+n[i];
	}
	printf("Sum of all array elements  is :=>%d",sum);
}



void main()
{
	int n;
	printf("Enter the array size =>");
	scanf("%d",&n);
	int a[n],i,len=0;
	
	printf("\n\n=================================\n\n");
	
	printf("Enter the Array elements =>\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] =>",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n=================================\n\n");
	printf("The Array elements =>\n\n");
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
		len++;
	}
	printf("\n\n=================================\n\n");
	
	sum(a,len);	
}