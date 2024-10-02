#include <stdio.h>

#define NUMBER 1,\
                2,\
                3 

int main()
{
    int x[] = {NUMBER};
            for(int i = 0 ; i < sizeof(x) / sizeof(x[0]) ; i++)
            {
                printf("%d" ,x[i]);
            } 
}

