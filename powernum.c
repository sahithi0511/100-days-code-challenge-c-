#include<stdio.h>
#include<math.h>
void power_num(int n)
{
	int i=0,p;
	while(1)
	{
		p=pow(2,i);
		if(p==n)
		{
			printf("power of 2");
			break;
		}
		else if(p>n)
		{
			printf("not possible");
			break;
		}
	    i=i+1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	power_num(n);
}
