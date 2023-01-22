#include<stdio.h>

main()
{
	int m,n;
	
	printf("Enter the raw of ARRAY =");
	scanf("%d",&n);
	
	printf("Enter the colum of array =");
	scanf("%d",&m);
	
	int b[n][m],i,j;
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n\n============================================\n\n\n");
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			
			printf("  b[%d][%d] = %d",i,j,b[i][j]);
		}
		printf("\n");
	}
	
}
	
	
	
