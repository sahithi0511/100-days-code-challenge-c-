#include<stdio.h>
int string_len(char *str)
{
	int len;
	for(len=0;str[len]!='\0';len++);
	return len;
}
int isanagram(char *str1,char *str2)
{
	int len1=string_len(str1),len2=string_len(str2),i,a[26]={0},b[26]={0},ind;
	for(i=0;i<len1;i++)
	{
		ind=str1[i]-97;//'b'-97=1
		a[ind]++;
		printf("%d %d\n",ind,a[ind]);
	}
	printf("\n");
	for(i=0;i<len2;i++)
	{
		ind=str2[i]-97;//'b'-97=1
		b[ind]++;
		printf("%d",b[ind]);
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str1[100],str2[100];
	int n;
	scanf("%[^\n]s",&str1);
	scanf(" %[^\n]s",&str2);
	n=isanagram(str1,str2);
//	printf("%d",n);
	
	return 0;
}
