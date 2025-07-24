#include<stdio.h>
int main(){
	int n,temp,num,sum,rem,fact,i;
	printf("Enter the start number: ");
	scanf("%d",&n);
	
	printf("Enter the last digit: ");
	scanf("%d",&n);
	
	for(num=1;num<n;num++){
		temp=num;
		sum=0;
		
		while(temp>0){
			rem=temp%10;
			fact=1;
			
			for(i=2;i<=rem;i++)
			fact=fact*i;
			
			
			sum =sum+fact;
			temp=temp/10;
			
		}
		if(sum==num)
		printf("%d\n",num);
	}
	printf("\n");
	return 0;
}