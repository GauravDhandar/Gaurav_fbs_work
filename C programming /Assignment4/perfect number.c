#include<stdio.h>
int main()
{
	int start,end;
	printf("Enter the start of the range\n");
	scanf("%d",&start);
	
	printf("enter the end of range\n");
	scanf("%d",&end);
	
	int num;
	for(num=start;num<=end;num++)
	{
		int j=1,sumOfDivisor=0;
		while(j<num)
	 {
		if(num%j==0)
		{
			sumOfDivisor=sumOfDivisor+j;
		}
		j++;
	 } 
	if(num==sumOfDivisor)
	{
		printf("%d\n",num);
	}	
	}
}