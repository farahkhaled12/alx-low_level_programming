#include <stdio.h>

/**
* main - Prints numbers between 0 to 9 and letters between a to f.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar( i);
}
char alp[6] = "abcdef";
for (i = 0; i < 6; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
