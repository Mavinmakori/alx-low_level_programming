#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 402, 198, 298, 2048};
int *p;

p = &a[2];
*(p) = 98; /* added line */
printf("a[2] = %d\n", *(p));
return (0);
}
