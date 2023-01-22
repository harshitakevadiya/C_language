#include<stdio.h>

main()
{
		int n;
		printf("Enter the array size :");
		scanf("%d",&n);
		
		int a[n],i,avg=0,sum=0;
		
		for(i=0;i<n;i++)
		{
			
			printf("Enter the value of a[%d] :",i);
			scanf("%d",&a[i]);
		}
		printf("\n\n-------------------------------------\n\n");
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		avg=sum/n;
		
		printf("\nThe average is := %d",avg);
	
}