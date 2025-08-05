/*
//Que 1. Convert the time entered in hh,min and sec into total seconds.

#include<stdio.h>
void main()
{
	int hour,min,sec;
	printf("Enter the number of hours: ");
	scanf("%d",&hour);
	
	printf("Enter the number of min: ");
	scanf("%d",&min);
	
	printf("enter the numberr of sec: ");
	scanf ("%d",&sec);
	
	int totalsec= sec+min*60+hour*60*60;
	printf("total seconds are %d",totalsec);
	
}
*/


/*
//Que 2. WAP to check if the year is leap or not.

#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year you want to check leap or not: ");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0||year%400==0)
	{
		printf("This year is leap");
	}
	else
	{
		printf("year not leap");
		
	}
}

*/


/*
//Que 3. Print last 2 digit of number.
//Eg. i/p: 223410
//o/p: 10

#include<stdio.h>
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("last two digit of number is %d ",n%100);
}
*/



