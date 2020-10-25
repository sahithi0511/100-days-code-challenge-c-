#include<stdio.h>
void line_ch(char *ch)
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=="  ")
		{
			printf(" \n");
		}
		else
		{
			printf("%c",ch[i]);
		}
	}
}
int main()
{
	char ch[100];
	scanf("%[^\n]s",&ch);
	line_ch(ch);
}
