#include<stdio.h>
int main ()
{
	int year=2003;
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("year is leap year");
	}	
	else 
		{
			printf("this year not leap year");
			}	
	
}