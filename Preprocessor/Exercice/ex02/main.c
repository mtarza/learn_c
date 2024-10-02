#include <stdio.h>
#include "3-function_like_macro.h"

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The absolute value of %d is: %d\n", num, ABS(num));

    return 0;
}
