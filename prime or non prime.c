/* write a c program to find whether the given num is prime or not*/

#include<stdio.h>
int main()
{
	int i, num, count = 0;
	printf("enter any integer number");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		if(num % i ==0)
		count ++;
	}
	if(count ==2)
	printf("the given number is prime", num);
	else
	printf("the given number is not prime", num);
	
}
