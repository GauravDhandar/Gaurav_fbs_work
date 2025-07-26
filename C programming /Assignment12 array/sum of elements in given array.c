#include<stdio.h>
int main()
{
	int n;
	printf("Enter the elements of an array\n ",&n);
	scanf("%d",&n);
	int arr [n];
	printf("Enter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of given array is %d",sum);
	
}