/* write a c program to calculate distance travelled by an object*/

#include <stdio.h>
int main()
{
	float acc,vel,dist;
	int time;
	
    printf("Enter value for acceleratio ");
    scanf("%f", &acc);

    printf("Enter value for velocity ");
    scanf("%f", &vel);

    printf("Enter value for time ");
    scanf("%d", &time);
    
    dist = (vel * time) + (acc * time * time)/2;
    printf("\nthe distance is %f",dist);
    
}
