#include <stdio.h>

 #define DEBUG

int main()
{
#ifdef DEBUG
    printf("debug mod is one \n");
#else
    printf("debug is off \n");
#endif

#ifndef PI
#define PI 132
#endif
    printf("%d",PI);

    }