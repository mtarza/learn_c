#include <stdlib.h>
#include <stdio.h>

void m(int n , int n1 , int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = n;
	t[1] = n1;
	t[2] = n2;

	sum = t[0] + t[1] + t[2] ;
	printf("%d , %d , %d = %d\n " ,t[0] , t[1], t[2] , sum);
}

int main()
{
	m(98,402,-1024);
	return 0;
}
