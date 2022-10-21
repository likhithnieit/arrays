#include<stdio.h>

void main()
{
	int a[20],n,i;
	
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	
	printf("Enter the array elements\n");

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("Entered array elements are\n");

	for(i=0;i<n;i++)
	printf("%d ",a[i]);

}