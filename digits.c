#include<stdio.h>
int main(){
   int n,r,t,i=0;
   scanf("%d",&n);
   t=n;
   while(n!=0){
   	r=n%10;
   	n=n/10;
   	i=i+1;
   	printf("%d",r);
   	
   }
   printf("\n %d",i);
	return 0;
}
