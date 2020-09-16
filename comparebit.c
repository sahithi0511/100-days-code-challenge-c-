#include<stdio.h>
void comp_bit(int n,int m)
{
	int c=0;
	while(1)
	{
		if(n!=m)
		{
		//	printf("%d %d",n,m);
			printf("%d",c);
			break;
			
		}
		c=c+1;
		n=n>>1;
		m=m>>1;
	
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	comp_bit(n,m);
}
