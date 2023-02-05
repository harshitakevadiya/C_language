#include<stdio.h>
#include<conio.h>
//wap to find square of each element using pointer.
main()
{
	int n,a[200],i;
	int *p;
	clrscr();
	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("\n\n==========================\n\n");
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=>",i);
		scanf("%d",&a[i]);
	}
	p=&a;
	printf("\n\n==========================\n\n");
	for(i=0;i<n;i++)
	{
		printf("%u => %d\n",p+i,*(p+i));
	}
	printf("\n\n==========================\n\n");
	printf("The squre of all elemets is:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=> %d\n",i,(*(p+i))*(*(p+i)));
	}

      getch();

}