#include<stdio.h>
int main()
{
	int i, j, rows, value;
	printf("enter the no. of rows");
	scanf("%d", &rows);
	for(i=0; i<rows; i++)
	{
		for (j=0; j<rows-i; j++)
		printf("  ");
		value = 1;
		for(j=0; j<=i; j++)
		{
			printf("   *",value);
		
		}
		printf("\n");
	}
}
