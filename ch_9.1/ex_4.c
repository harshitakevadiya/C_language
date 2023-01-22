#include<stdio.h>

main()
{
		int n;
		printf("Enter the array size :");
		scanf("%d",&n);
		
		int a[n],i,b[n],c[n];
		
		for(i=0;i<n;i++)
		{
			
			printf("Enter the value of a[%d] :",i);
			scanf("%d",&a[i]);
		}
		printf("\n\n\=================================\n\n");
		for(i=0;i<n;i++)
		{
			
			printf("Enter the value of b[%d] :",i);
			scanf("%d",&b[i]);
		}
		printf("\n\n-------------------------------------\n\n");
		for(i=0;i<n;i++)
		{
			c[i]=a[i]+b[i];
			printf("c[%d] =>%d\n",i,c[i]);
		}
	
}