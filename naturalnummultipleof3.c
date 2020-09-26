#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=101;i<=999;i++)
	{
		if(i%3==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
}
