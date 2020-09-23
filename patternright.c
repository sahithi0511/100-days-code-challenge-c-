#include<stdio.h>
void pattern_right(int n)
{
	int i,k,j;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=(n-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pattern_right(n);
}
