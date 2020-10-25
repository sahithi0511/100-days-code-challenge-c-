#include<stdio.h>
int len_str(char *ch)
{
   int l;
   for(l=0;ch[l]!='\0';l++);
   return l;
}
void rev_array(char * ch)
{
	int i,j,len,temp;
	len=len_str(ch);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
	}
}
int main()
{
	char ch[100],i;
	scanf("%[^\n]s",&ch);
	rev_array(ch);
	printf("%s",ch);
}
