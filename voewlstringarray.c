#include<stdio.h>
void vowel_array(char * str)
{
	char a[100];
	int i,d=0,j;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117)
		{
			if(d==0)
			{
				a[d]=str[i];
				d++;
			}
		   for(j=0;j<d;j++)
		   {
		   	int k,l;
		   	k=str[i];
		   	l=a[j];
		   	printf("%d %d\n",k,l);
		   	if(k==l)
		   	{
		   		printf("%d is break\n",k);
		   	  break;
			   }
			   else
			   {
			   	a[d]=str[i];
			   	d++;
			   }
		   }
		}
	}
	for(i=0;i<d;i++)
	{
		printf("%c",a[i]);
	}
}
int main()
{
	char str[100];
	scanf("%[^\n]s",&str);
	vowel_array(str);
}
