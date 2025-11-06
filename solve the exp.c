/*write a c program to evaluate the following expressions a/b*c-b+a*d/3 
and j=(i++)+(++i)*/

#include<stdio.h>
int main()
{
	float a,b,c,d,result,j,i;
	printf("enter value of a,b,c,d");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	result = a/b*c-b+a*d/3;
	printf("the result is %f",result);
	
	
	printf("enter i value");
	scanf("%f",&i);
	j=(i++)+(++i);
	printf("the value of j is %f",j);	
	
}
