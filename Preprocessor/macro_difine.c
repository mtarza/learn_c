#include <stdio.h>
#define SUM(x) ((x) + (x))

int main()
{
    int i = 2 ;
    int j = 5;
    int n = SUM(i) * SUM(j);
        printf("this is sum of number %d",n);

}