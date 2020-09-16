#include <stdio.h> 

int count(int n) 

{ 
printf("%d  \n",n);
    if (n <= 1) 

        return n; 

    return count(n - 1) + count(n - 2); 

} 

  

int main() 

{ 

    int n=7;

   printf("%d",count(n+1)); 

    //getchar(); 

    return 0; 

}

 
