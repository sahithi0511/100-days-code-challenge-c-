# include<stdio.h>
void setbit_pos(int n)
{
	int c=0,r;
	while(n)
	{
		r=n%10;
		c=c+1;
		n=n/10;
		if(r==1)
		{
			printf("%d",c);
			break;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	setbit_pos(n);
}
