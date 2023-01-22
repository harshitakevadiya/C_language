#include<stdio.h>

main()
{
		int n;
		printf("Enter the array size :");
		scanf("%d",&n);
		
		int a[n],i;
		
		for(i=0;i<n;i++)
		{
			
			printf("Enter the value of a[%d] :",i);
			scanf("%d",&a[i]);
		}
		printf("\n\n-------------------------------------\n\n");
		for(i=0;i<n;i++)
		{
			printf("a[%d] => %d\n",i,a[i]);
		}
	
}