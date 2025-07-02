#include <stdio.h>
int main ()
{
    int a=12,b=13;
    int temp;
    printf("Before swapping:a= %d,b= %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping:a= %d,b= %d\n",a,b);

    
}