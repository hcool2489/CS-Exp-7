#include<stdio.h>
void main()
{
	int x,y,a=0;
	printf("Enter x & y for (x X y): ");
	scanf("%d%d",&x,&y);
	for(;y>0;y--)
	{
		a+=x;
	}
	printf("Result = %d\n",a);
}
