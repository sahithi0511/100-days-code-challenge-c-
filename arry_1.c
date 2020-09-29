#include<stdio.h>
int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
//Array is a linear datastructure
//Advantages:
//Dont require many variables single variable is sufficient for reading multiple values
//Can return multiple values from a function
