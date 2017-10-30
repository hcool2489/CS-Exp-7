#include<stdio.h>
#include<math.h>
void main()
{
	int x,y,d;
	printf("Enter Range (num1 and num2): ");
	scanf("%d%d",&x,&y);
	for(;x<=y;x++)
	{
		d=0;
		int n=x,a,s=0;
		for(;n>0;n/=10)
			d++;
		a=d;
		n=x;
		for(;a>0;a--)
		{
			s+=pow(n%10,d);
			n/=10;
		}
		if(x==s)
			printf("%d\n",x);
	}
}
