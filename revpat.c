#include<stdio.h>
void rev(int n)
{
	int i,j;
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void rev_pat(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		
		}
		printf("\n");
		if(i==n)
		{
		   rev(n);
		//printf("\n");	
		}
		
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	rev_pat(n);
}
