# include<stdio.h>
void setbit_pos(int n)
{
	int c=0,r,rem;
	while(n)
	{
	
	
	 if((n&1)==0)
	 {
	 	c=c+1;
	 	printf("%d",c);
	 	break;
	 }
	  
	 n=n>>1;
	 c=c+1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	setbit_pos(n);
}
