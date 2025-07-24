#include<stdio.h>
int main()
{
	int num,n,temp,remainder,digits;
	printf("Enter the upper limit(n): ");
	scanf("%d",&n);
	
	printf("Armstrong numbers between 1 and %d are:\n",n);
	
	for (num=1;num<n;num++){
		temp=num;
		digits=0;
		
		while(temp!=0){
			digits++;
			temp/=10;
			
		}
		temp=num;
		int sum= 0;
		
		while (temp!=0){
			remainder=temp%10;
			sum+=pow(remainder,digits);
			temp/=10;
		}
		if(sum == num){
			printf("%d\n",num);
			
		}
		
		}
	}
