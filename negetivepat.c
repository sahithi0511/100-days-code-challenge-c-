#include<stdio.h>
#include<math.h>
int pattern_rev(int n)
{
	
	int i,j,k,num=n-1,f=0;
	for(i=0;i>-n;i--)
	{
		for(k=1;k<=(n-i);k++)
		{
			printf(" ");
		}
		for(j=0;j>((i*2)-1);j--)
		{
			
			
			printf("%d",j);
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
