#include<stdio.h>
void count_digits(int n)//function definition
{
    int r,ed=0,od=0;
    while(n!=0)
    {
    	r=n%10;
    	n=n/10;
    	if(r%2==0){
    		ed++;
    		
		}
		else{
			od++;
		}
	}
		printf("%d%d",ed,od);


}
int main()//Execution starts from main function irrespeccctive of any functions it start with main function
{
	int n;
	scanf("%d",&n);
    count_digits(n);//fun call
	return 0;
}
