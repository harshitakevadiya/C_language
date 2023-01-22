#include<stdio.h>

main()
{
		int n;
		printf("Enter the array size :");
		scanf("%d",&n);
		
		int a[n],i,j=0;
		
		for(i=0;i<n;i++)
		{
			
			printf("Enter the value of a[%d] :",i);
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++)
		{
			
				j++;
		}
		printf("\n\nThe length of array is := %d",j);
	
	
}