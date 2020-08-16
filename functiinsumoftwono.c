#include<stdio.h>
int sum_of_two_numbers(int a,int b)//function definition
{
	return a+b;
}
int main()//Execution starts from main function irrespeccctive of any functions it start with main function
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
    sum = sum_of_two_numbers(a,b);//fun call
	printf("%d",sum);
	return 0;
}
