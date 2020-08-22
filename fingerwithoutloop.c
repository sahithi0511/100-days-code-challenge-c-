#include<stdio.h>
void number(int n)
{
      int r;
      r=n%8;
     

      if(r==1)
      {
      	printf("It is thumb finger");
	  }
	  else if(r==2 || r==0)
	  {
	  	printf("It is point finger");
	  }
	  else if(r==3 || r==7)
	  {
	  	printf("It is middle finger");
	  }
	  else if(r==4 || r==6)
	  {
	  	printf("It is ring finger");
	  }
	  else if(r==5)
	  {
	  	printf("It is little finger");
	  }
}
int main()
{
	int n;
	scanf("%d",&n);
	number(n);
}
