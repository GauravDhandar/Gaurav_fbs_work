/*
//1. WAP Print even and odd numbers in a given range.
//eg. i/p: start= 10, end= 25
//o/p: odd: 11 13 15 17 19 21 23 25
//eg. i/p: start= 1, end= 15
//o/p: even: 2 4 6 8 10 12 14

#include<stdio.h>
int main()
{
	int start,end;
	printf("Enter the start number\n");
	scanf("%d",&start);
	
	printf("Enter the End\n");
	scanf("%d",&end);
	
	printf("Even:");
	for(int i=start;i<=end;i++)
	{
		
		
		if(i%2==0)
		{
			printf(" %d",i);
		}
		
	}
	printf("\nodd: ");
	for(  int j=start;j<end;j++)
	{
		if(j%2!=0)
		{
			printf(" %d ",j);
		}
	}
	
*/

/*		
//2. WAP to add alternate numbers from given range.
//eg. i/p: start= 1, end= 5
//o/p: sum= 9

#include<stdio.h>
void main()
{
	int Start,End,i,sum=0;
	printf("Enter the start and end of range\n");
	scanf("%d%d",&Start,&End);
	for(int i=Start;i<End;i++)
	{
		sum=sum+i;
	}
	printf("Addition of alternate number in given range is %d",sum);
	
	
}
/*
	
