#include "main.h"

/*
 * main - prints _putcher
 *
 * Description: prints _putcher
 *
 * Return: 0 (success)
 */

int main(void)
{
	char text[9] = "_putchar";

	int i = 0;

        for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putcher('\n');

	return (0);
}
