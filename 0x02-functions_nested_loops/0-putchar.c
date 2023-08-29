#include <stdio.h>

/**
 * main - print putchar
 * Return: 0 for success
*/

int main(void)
{
    char c[] = "_putchar";
    int i = 0;

    while (i < 8)
    {
        putchar(c[i]);
        i++;
    }
    putchar('\n');
    return (0);
}
