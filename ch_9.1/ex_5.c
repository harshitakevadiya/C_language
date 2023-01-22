#include<stdio.h>

main()
{
		int n,m,i,l;
		printf("Enter first array size :");
		scanf("%d",&n);
		
		int a[n];
		
		for(i=0;i<n;i++)
		{
			
			printf("Enter the value of a[%d] :",i);
			scanf("%d",&a[i]);
		}
		
		printf("\n================================\n");
		
		printf("Enter second array size :");
		scanf("%d",&m);
		int b[m];
		
		for(i=0;i<m;i++)
		{
			
			printf("Enter the value of b[%d] :",i);
			scanf("%d",&b[i]);
		}
		
		int c[n+m],k=0;
		
		for(i=0;i<n;i++)
		{
			
			c[k]=a[i];
			k++;
		}
		
		for(i=0;i<m;i++)
		{
			
			c[k]=b[i];
			k++;
		}
		printf("\n================================\n");
		for(i=0;i<n+m;i++)
		{
			
			printf("c[%d] => %d\n",i,c[i]);
		}
	
}