#include<stdio.h>
void line_line(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=="")
		{
			printf("\n is n");
		}
		else
		{
			printf("%c",str[i]);
		}
		
	}
}
int main()
{
	char str[100];
	scanf("%[^\n]s",&str);
	line_line(str);
}
