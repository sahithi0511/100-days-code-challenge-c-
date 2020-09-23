#include<stdio.h>
void v_pattern_rev(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
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
int main()
{
	int n;
	scanf("%d",&n);
	v_pattern_rev(n);
}
