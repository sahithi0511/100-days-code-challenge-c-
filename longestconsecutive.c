#include<stdio.h>
void longest_consecutive(int n)
{
	int r,sum=0,big=0;
	while(n)
	{
		r=n&1;
		if(r==1)
		{
			sum=sum+1;
			n=n>>1;
			if(n&1==1)
			{
			  sum=sum+1;
			 // printf(" sum is %d \n",sum);
			  n=n>>1;
			if(big<sum)
			{ 
			
			  big=sum;
			  printf("%d \n",big);
				
			}	
			}
			else
			{
				//big=sum;
				printf(" big is %d \n",big+1);
				sum=0;
				continue;
			}
		
			
		}
		else{
			n=n>>1;
			
		}
		}
	//	printf("%d",big);
	}
//Longest consecutive
int main()
{
	int n;
	scanf("%d",&n);
	longest_consecutive(n);
}
