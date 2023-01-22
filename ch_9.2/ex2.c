#include<stdio.h>

main()
{
	int m,n,i,j;
	
	printf("Enter the size of first array =");
	scanf("%d",&m);
	
	int a[m];
		for(i=0;i<m;i++)
		{
			
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	
	printf("Enter the size of second array =");
	scanf("%d",&n);
	
	int b[n];
		
		for(i=0;i<n;i++)
		{
			
			printf("b[%d] = ",i);
			scanf("%d",&b[i]);
		}
	int c[m+n];
	
	printf("\n\n\n============================================\n\n\n");
	for(i=0;i<m;i++)
	{	
		c[i]=a[i];
		printf("c[%d] = %d\n",i,c[i]);
	}
	
	for(i=m,j=0;i<m+n,j<n;i++,j++)
	{
		
		c[i]=b[j];
		printf("c[%d] = %d\n",i,c[i]);
	}	
	printf("\n");
	
	
}
	
	
	
