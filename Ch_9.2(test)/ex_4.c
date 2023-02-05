#include<stdio.h>
main()
{
	
	int r,c;
	
	printf("Enter the raw :=");
	scanf("%d",&r);
	printf("Enter the column :=");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],c1[r][c],i,j;
	printf("\nEnter the First array Elements :=\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter the second array Elements :=\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] :=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n==============================\n\n");
	

	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			c1[i][j]=a[i][j]+b[i][j];
			printf("\nc1[%d][%d] = %d",i,j,c1[i][j]);	
		}
	}
}