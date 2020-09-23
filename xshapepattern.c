#include<stdio.h>
void rev(int n)
{
	int i,j,k;
	for(i=2;i<=n;i++)
	{
	
	  for(k=1;k<=(n-i);k++)	
	  {
	  	printf(" ");
	  }
		for(j=1;j<=((i*2)-1);j++)
		{
			
			  if(j==1 || j==((i*2)-1))
			  {
			  		printf("*");
			  }
			  else
			  {
			  	printf(" ");
			  }
			
			
			
		}
		printf("\n");
	}
}
void x_shape_pattern(int n)
{
	int i,j,k;
	for(i=n;i>=1;i--)
	{
	
	  for(k=1;k<=(n-i);k++)	
	  {
	  	printf(" ");
	  }
		for(j=1;j<=((i*2)-1);j++)
		{
			
			  if(j==1 || j==((i*2)-1))
			  {
			  		printf("*");
			  }
			  else
			  {
			  	printf(" ");
			  }
			
			
			
		}
		printf("\n");
		if(i==1)
		{
			rev(n);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	x_shape_pattern(n);
}
