/* write a c program to find the area of a triangle*/

#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base");
	scanf("%f",&base);
	printf("enter height");
	scanf("%f",&height);
	area = 0.5*base*height;
	printf("area of rectangle is %f",area);
	
}
