#include<stdio.h>
int main()
{
	int n=5;
	int arr[5]={22,32,65,54,54};
	int brr[5]={47,36,47,54,33};
	int crr[5];
	
	for(int i=0;i<n;i++)
	{
	 crr[i]=arr[i]+brr[i];
	}
	printf("Third array sum(): ");
	for(int i=0;i<n;i++){
		printf(" %d",crr[i]);
	}
	printf("\n");
	return 0;
}