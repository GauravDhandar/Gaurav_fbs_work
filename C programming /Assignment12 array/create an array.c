#include<stdio.h>
int main()
{
	int  array[10];
	int sume=0,sumo=0;

	printf("Enter  10 elements:\n");
    for(int i=0;i<10;i++)
   	{
	    printf("Element %d: ",i);
	    scanf("%d",&array[i]);
	}
	
	   for(int i=0;i<5;i++)
	{
		if (array[i]%2==0)
		sume=sume+array[i];
		else
		sumo=sumo+array[i];
	}
	
	printf("\nsum of even number: %d",sume);
	printf("\nsum of odd numbers:%d\n",sumo);
}