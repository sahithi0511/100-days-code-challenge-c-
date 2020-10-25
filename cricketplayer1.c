#include<stdio.h>
void cricket_player(int *arr,int n)
{
	int i=1,j=2,k,player=i;
	for(k=0;k<n;k++)
	{ 
	if(arr[k]==-1 && player==i)
		{
			if((i+1)==j)
			{
				i=i+j;
				player=i;
			}
			else
			{
				i=i+1;
				player=i;
			}
			continue;
		}
		else if(arr[k]==-1 && player==j)
		{
			if((j+1)==i)
			{
				j=i+j;
				player=j;
			}
			else
			{
			j=j+1;
			player=j;	
			}
			
		
			continue;
		} 
	  if(k==5)
		{
//			printf("%d is palyer when ball=6",player);
			if(player==i)
			{
				player=j;
			}
			else if(player==j)
			{
				player=i;
			}
			continue;
		} 
	   else if((arr[k]%2)!=0)
		{
			if(player==i)
			{
				player=j;
			}
			else if(player==j)
			{
				player=i;
			}
		} 	
	}
	printf("%d",player);
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	cricket_player(arr,n);
}
