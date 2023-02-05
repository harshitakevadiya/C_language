#include<stdio.h>
main()
{
	
	int sum=0;	
	int a[5][5],i,j;
	
	printf("\nEnter the array Elements :=\n");
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d] :=",i,j);
			scanf("%d",&a[i][j]);
			
			
		}
	}
	
	printf("\n\n==============================\n\n");
	
	
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<5;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n==============================\n\n");
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<5;j++)
		{
			
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf(" %d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("   "); 
			}
		}
		printf("\n");
		
	}
	
	printf("\n\n====================================\n\n");
	
	
	printf("The sum is = %d",sum);
	
	
}