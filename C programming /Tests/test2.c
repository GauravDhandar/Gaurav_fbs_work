/*
//Que 1. WAP to calculate electricity bill.
//For 1-50 units – 30 rs/unit , For 51-150 units – 40 rs/unit, For 151and above units –
//50 rs/unit.

#include<stdio.h>
int main()
{
	int unit;
	printf("Enter the numberof unit: ");
	scanf("%d",&unit);
	
	int price;
	
	if(unit<=50)
	{
		price=unit*30;
	}
	else if(unit>50 && unit<=150)
	{
		price=unit*40;
	}
	else if(unit>=150)
	{
		price=unit*50;
	}
	
	printf("price per unit %d",price);
	
}
*/




/*
//Que 2. WAP to check if number is positive, negative or neutral (0).
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number you want to check positive,negative,zero\n");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Number is positive");
		
	}
	else if(num==0)
	{
		printf("Number is neutral");
	}
	else if(num<0)
	{
		printf("Number is negative");
	}
}
/*
