#include<stdio.h>
void digital_root(int n)
{
	int sum=0,r,rem,s=0;
	while(n)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	printf("%d \n",sum);
	while(sum)
	{
		rem=sum%10;
		s=s+rem;
		sum=sum/10;
	}
	printf("%d",s);
}
int main()
{
	int n;
	scanf("%d",&n);
	digital_root(n);
}
