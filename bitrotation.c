#include<stdio.h>
#include<math.h>
void bit_rotation(unsigned int n,unsigned int d)
{
	unsigned int f,A,B,c;
	c=(int)log2(n)+1;
	f=c-d;
//	printf("%d \n",c);
	A=n<<64-f;
	A=A>>64-f;
	A=A<<d;
	B=n>>f;
	printf("%d",A|B);
	
}
int main()
{
	unsigned int n,d;
	scanf("%u%u",&n,&d);
	bit_rotation(n,d);
}
