#include<stdio.h>
void main()
{
	int x,y,c=0,s=0;
	printf("Enter Range x,y: ");
	scanf("%d%d",&x,&y);
	for(;x<=y;x++)
	{
		if(x%2!=0)
		{
			s+=x;
			c++;
		}
	}
	printf("Avg of odd nos : %d\n",s/c);
}
