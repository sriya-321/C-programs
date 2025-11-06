/* write a c program to calculate simple intrest and compound interest */

#include <stdio.h>
#include<math.h>
int main()
{
	int pa,rate,time,years;
	float si,ci;
	printf("enter principal amount ");
	scanf("%d",&pa);
	
	printf("\nenter rate of interest ");
	scanf("%d",&rate);
	
	printf("\nenter time ");
	scanf("%d",&time);
	
	printf("\nenter no.of years ");
	scanf("%d",&years);
	
	si = (pa*rate*time)/100.0;
	ci = pa*pow((1+rate/100.0),years)-pa;
	
	printf("simple interest is %f", si);
	printf("compound interest is %f", ci);
}
