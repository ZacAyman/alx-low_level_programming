#include <stdio.h>
/*
* main - Print the size of the vriables types
*Return:0(hello)
*
*/
int main(void)
{
char d = 1;
int a = 4;
long int b = 4;
long long int c = 8;
float f = 4;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
