#include<stdio.h>
void pattern(int n)
{
	int i,j,num;
	for(i=n;i>=1;i--)
	{
		//num=3;
		for(j=n;j>=1;j--)
		{
			
			if(j<3)
			{  
			   num=num+1;
			   num=n-(j-1);
				printf("%d",num);
				
				
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pattern(n);
}
