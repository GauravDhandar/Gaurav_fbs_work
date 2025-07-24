#include<stdio.h>
int main()
{
	int start,end;
	printf("Enter the start of range of prime number \n ");
	scanf("%d",&start);
	
	printf("Enter the range of prime numbers\n");
	scanf("%d",&end);
	
	int i,j;
	for(i=start;i<=end;i++)
	{
		int flag=0;
		
		if(i==1)
		{
			flag=1;
		}
		else
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
		}
		}
		}

		if(flag==0)
		{
			printf("%d ",i);
		}
	}
}