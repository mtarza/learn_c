#include <stdio.h>
int main() {
printf("Current file name: %s\n", __FILE__);
printf("Current line number: %d\n", __LINE__);
printf("Current date: %s\n", __DATE__);
printf("Current time: %s\n", __TIME__);
printf("Standard compliance: %d\n", __STDC__);
return 0;
}