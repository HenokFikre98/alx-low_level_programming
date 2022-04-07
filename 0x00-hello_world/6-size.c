#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;
	if (n > 0)
	{
		for (i=0;i<n;i++)
		{
			_putchar (95);
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}

}
