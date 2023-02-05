#include<stdio.h>
main()
{
	
	int r,c;
	
	printf("Enter the raw & colum:=");
	scanf("%d",&r);
/*	printf("Enter the column :=");
	scanf("%d",&c);*/
	
	int a[r][r],i,j;
	
	printf("\nEnter the array Elements :=\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d] :=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n==============================\n\n");
	

	for(i=0;i<r;i++)
	{
		
		for(j=0;j<r;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n=============================\n\n");
	
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<r;j++)
		{
			if(i+j==r-1 || i==j)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	
}