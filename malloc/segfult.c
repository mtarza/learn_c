#include <stdio.h>


void segfult(void)
{
	char *str; 
	
	str = "holberthon";
	str[0] = 's';
}
int main()
{
	segfult();
	return 0;
}
