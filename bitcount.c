#include<stdio.h>
void bit_count(int n)
{
	int count=0;
	while(n)
	{
		n=n>>1;
	count=count+1;
	}

	printf("%d",count);
}
int main()
{
	int n;
	scanf("%d",&n);
	bit_count(n);
}
