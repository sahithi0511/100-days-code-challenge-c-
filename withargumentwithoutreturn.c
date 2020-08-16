#include<stdio.h>
void sum_of_two_numbers(int a,int b)//function definition
{
	printf("%d",a+b);//void returns nothing so we have to print here only


}
int main()//Execution starts from main function irrespeccctive of any functions it start with main function
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
    sum_of_two_numbers(a,b);//fun call
	
	return 0;
}
