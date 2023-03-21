#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

/* Print lowercase alphabet */
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

/* Print uppercase alphabet */
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}

/* Print new line character */
putchar('\n');

return (0);
}

