#include<stdio.h>
int digital(int sum, int s)
{
	int r;
	if(sum==0)
	{
		//printf("%d",s);
		return s;
	}

	r=sum%10;
	s=s+r;
	sum=sum/10;
	return digital(sum,s);
}
int digital_root(int n,int sum,int s)
{
	int r,res;
	   if(n==0)
	   {
	   //	printf("%d",sum);
	   	res=digital(sum,s);
	   	printf("%d",res);
	   	return;
	   	  //return sum ;
	   }
		r=n%10;
		sum=sum+r;
		n=n/10;
		
//	printf("%d \n",sum);
	return digital_root(n,sum,s);
}
int main()
{
	int n,sum=0,s=0;
	scanf("%d",&n);
	digital_root(n,sum,s);
}
