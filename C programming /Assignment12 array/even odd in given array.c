#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the elements of an array\n ",&n);
	scanf("%d",&n);
	int arr [n];
	printf("\nEnter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even ");
	for (int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\nodd ");
	for(int i=0;i<n;i++){
	if(arr[i]%2!=0)
	{
		printf("%d ",arr[i]);
	}
   }
	
}