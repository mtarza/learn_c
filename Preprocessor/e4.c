#include <stdio.h>
#define min(x,y) ((x) < (y) ? (x) : (y) )
int main()
{
    int a = 4 , b = 10;
    int x = min(a,b);
    printf("%d",x);
}