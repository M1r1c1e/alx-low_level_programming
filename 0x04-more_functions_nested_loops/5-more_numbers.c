#include "main.h"

/**
 * more_numbers - print more numbers
 */


void more_numbers(void)

{

	int g, j;


	for (g = 1; g <= 10; g++)

	{

		for (j = 0; j <= 14; j++)

		{

			if (j >= 10)

				_putchar('1');

			_putchar (j % 10 + '0');

		}

		_putchar('\n');

	}

}
