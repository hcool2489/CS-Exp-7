#include<stdio.h>
void main()
{
	int a=0,b=0,c=0,age,i;
	for(i=0;i<15;i++)
	{
		printf("\nAge of person %d: ",i+1);
		scanf("%d",&age);
		if(age<=5)
		{
			a++;
		}
		else if(age<=17)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	printf("Still a Baby: %d\nAttending School: %d\n Adult Life: %d\n",a,b,c);
}
