#include <unistd.h>
/**
 * main - print text to the stderr
 * Return: 1
 */
int main(void)
{
	write(2,
		"and that piece of art useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}
