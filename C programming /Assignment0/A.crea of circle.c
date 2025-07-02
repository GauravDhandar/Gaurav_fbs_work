#include<stdio.h>
int main()
{ 
int radius;
float PI=3.14,area;
printf("enter the radius of circle");
scanf("%d",&radius);
area= PI * radius * radius;
printf("area of cirle:%f",area);
}