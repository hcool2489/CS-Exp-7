#include<stdio.h>
void main()
{
	int d;
	printf("Enter Decimal no: ");
	scanf("%d",&d);
	printf("Binary of %d is: ",d);
	for(;d>0;d/=2)
	{
		printf("%d",d%2);
	}
	printf("\n");
}
