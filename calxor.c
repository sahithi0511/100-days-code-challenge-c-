#include<stdio.h>
void cal_xor(int n,int s)
{
	int i,a[100],d=0,j,k=0;
	for(i=0;i<n;i++)
	{
		a[d]=(s+(2*i));
		d++;
	}
	for(j=0;j<n;j++)
	{
	//	printf("%d ",a[j]);
		k^=a[j];
	}
	printf("%d",k);
}
int main()
{
	int n,s;
	scanf("%d%d",&n,&s);
	cal_xor(n,s);
}
