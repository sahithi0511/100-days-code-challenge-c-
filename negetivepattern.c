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
			
			if(i%2==0)
			{
				if(j==1 || j==((i*2)-1))
				{
				  printf("*");	
				}
				else
				{
					printf("+");
				}
				
			}
			else{
				printf("*");
			}
		     // num=i+2;
			 
		  
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
//   222
//  33333
// 4444444
//555555555
