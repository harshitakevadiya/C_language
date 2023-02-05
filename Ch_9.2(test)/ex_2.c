#include<stdio.h>
main()
{
	
	int r,c;
	
	printf("Enter the raw :=");
	scanf("%d",&r);
	printf("Enter the column :=");
	scanf("%d",&c);
	
	int a[r][c],i,j,len=0;
	
	printf("\nEnter the array Elements :=\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :=",i,j);
			scanf("%d",&a[i][j]);
			len++;
		}
	}
	
	printf("\n\n==============================\n\n");
	
	printf("Lenghth of array is := %d",len);
	
}