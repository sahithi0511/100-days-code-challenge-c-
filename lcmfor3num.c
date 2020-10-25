
#include<stdio.h>
int lcm(int a,int b){

int temp = a;

while(1){

if(temp % b == 0 && temp % a == 0)
{
printf("%d",temp);
break;
}
temp++;

}

return temp;
}
int main(){
int a,b,c,l,k;
scanf("%d%d%d",&a,&b,&c);
if(a<b) 
{
 l = lcm(a,b); 	
}else 
{
l = lcm(b,a); 
}
if(l>c)
{
  k= lcm(l,c);	
}
else
{
k= lcm(c,l);	
}


printf("%d",k);

return 0;

}


