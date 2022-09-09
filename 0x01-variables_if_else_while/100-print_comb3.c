#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - program that prints the numbers from 00 to 99
* Numbers must be separated by ,followed by a space
* Numbers should be printed in ascending order with 2 digits
* You can only use the putchar function
*
* Return: Always 0 (Success)
*/
int main(void)
{
int d;

for (d = 0; d < 100; d++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
