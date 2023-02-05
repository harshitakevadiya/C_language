#include<stdio.h>
main()
{
	
	int r,c;
	
	printf("Enter the raw :=");
	scanf("%d",&r);
	printf("Enter the column :=");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	float avg,sum=0,len=0;
	
	printf("\nEnter the array Elements :=\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n==============================\n\n");
	

	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
			len++;
			
		}
		printf("\n");
	}
	
	printf("\n\n===============================\n\n");
	avg=sum/len;
	printf("Average of array is := %f",avg);
}