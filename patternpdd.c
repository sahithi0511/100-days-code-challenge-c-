#include<stdio.h>
int pattern_rev(int n)
{
	
	int i,j,k,num=1,f=0;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=(n-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=((i*2)-1);j++)
		{
			
			printf("%d",((i*2)-1));

			 
		  
		}
		printf("\n");
	}
}
		
int main()
{
	int n;
	scanf("%d",&n);
	pattern_rev(n);
}
//    1
//   333
//  55555
// 7777777
//999999999
