#include<stdio.h>
void binadd_sub(int n,int m)
{
	
	int temp=1,resn,resm,sum=0;
	while(n!=0 || m!=0)
	{
	  resn=n&1;
	  resm=m&1;
	  if(resn==1 && resm==1)
	  {
	  	    sum=sum+0*temp;
	  	    temp=temp*10;
	  	    n=n>>1;
	  	    m=m>>1;
			 } 
			 else if((resn==1 && resm==0)||(resn==0 && resm==1))
			 {
			 	sum=sum+1*temp;
			 	temp=temp*10;
			 	n=n>>1;
			 	m=m>>1;
			 	
			 	
				   }  	
				   else if(resn==0 && resm==0)
				   {
				   	sum=sum+0*temp;
				   	temp=temp*10;
				   	n=n>>1;
				   	m=m>>1;
				   }
	}
	printf("%d",sum);
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	binadd_sub(n,m);
}
//1011
//1111
//------
// 11010


//1010
//0101
//-----
//1111


//101
//011
//---
//1000
