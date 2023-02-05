#include<stdio.h>

void cube(int n)
{
	printf("\nThe cube of %d is => %d",n,n*n*n);
}

void main()
{
	int n;
	puts("Enter the number :");
	scanf("%d",&n);
	cube(n);
}