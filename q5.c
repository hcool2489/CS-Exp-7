#include<stdio.h>
void main()
{
	int i,n,x=0,y=1,z;
	printf("Enter a limit: ");
	scanf("%d",&n);
	printf("%d %d ",x,y);
	for(i=2;i<n;i++)
	{
		z=x+y;
		printf("%d ",z);
		x=y;
		y=z;
	}
	printf("\n");
}
