#include<stdio.h>
int len_arr(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
void low_upparr(char *str)
{
	int i,len,k;
	len=len_arr(str);
	//printf("%d",len);
	for(i=0;i<len;i++)
	{
		k=str[i];
	//	printf("%d\n",k);
		if(k>=65 && k<97)
		{
			str[i]=str[i]+32;
		}
		else if(k>=97 && k<123)
		{
			str[i]=str[i]-32;
		}
	}
	
}
int main()
{
	char str[100];
	scanf("%[^\n]s",&str);
	low_upparr(str);
	printf("%s",str);
	
}
