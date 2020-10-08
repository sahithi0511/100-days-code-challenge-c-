#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
	int i,p,s,heron,max=100000,a[100];
	for(i=0;i<n;i++)
	{
	 // printf("%d %d %d\n",tr[i].a,tr[i].b,tr[i].c);
	  p=((tr[i].a)+(tr[i].b)+(tr[i].c))/2;
	 // printf("%d\n",p);
	  s=(p*((p-(tr[i].a))*(p-(tr[i].b))*(p-(tr[i].c))));	 
	  heron=sqrt(s);
	 // printf("%d\n",heron); 
	  if(heron<max)
	  {
	  	 max=heron;
	  	 triangle *tr;
	  	 
	  }
	  	
	}
	//printf("%d is min square",max);
    
}

int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for ( i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (i = 0; i < n; i++) {
		//printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
