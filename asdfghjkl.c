/* write a c program to read and display the sum of two integer numbers and two real numbers*/

#include <stdio.h>
int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	printf("enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	diff=num1-num2;
	printf("integer addition is %d\n",add);
	printf("integer subtraction is %d\n",diff);
	
	printf("\nenter any two real numbers");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("real numbers addition is %f\n",sum);
	printf("real numbers subtraction is %f\n",sub);
}
