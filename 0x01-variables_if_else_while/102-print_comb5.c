#include <stdio.h>

/**
 * main - entry point, print two numbers of two digits
 * 
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c;
int d; 
int e;
int f;

for (a = 0; a < 100; a++)
{
b = a / 10;
c = a % 10;
for (d = 0; d < 100; d++)
{
e = d / 10;
f = d % 10;
if (b < e || (b == e && c < f))
{
putchar(b + 48);
putchar(c + 48);
putchar(32);
putchar(e + 48);
putchar(f + 48);
if (!(b == 9 && c == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
