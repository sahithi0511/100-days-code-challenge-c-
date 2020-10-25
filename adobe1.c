#include<stdio.h>
int len(char * ch)
{
	int i;
 for(i=0;ch[i]!='\0';i++);
	return i;	
}
void rev_str(char *ch)
{
	int l=len(ch);
	//printf("%d is l",l);
	int i,j;
	char a[100];
	for(i=0,j=l-1;i<l;i++,j--)
	{
	    a[i]=ch[j];	
	    //printf("%c",a[i]);
	}
	for(i=0;i<l;i++)
	{
		ch[i]=a[i];
	}
}
int main()
{
	int ch[100],i;
	scanf("%[^\n]s",&ch);
	rev_str(ch);
	printf("%s",ch);
}	


