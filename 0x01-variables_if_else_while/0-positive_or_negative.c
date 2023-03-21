#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

/* Get the current time in seconds */
time_t t;

time(&t);

/* Use the last two digits of the current time as the random seed */
int seed = t % 100;

/* Generate a random number between -50 and 50 using the seed */
n = ((seed * 1103515245 + 12345) / 65536) % 101 - 50;

printf("%d ", n);

if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else if
printf("is negative\n");

return (0);
}

