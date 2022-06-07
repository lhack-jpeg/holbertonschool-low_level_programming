#include "main.h"
/**
 * times_table - prints out the 9 times tables
 *
 *Retuns nothing
 */
void times_table(void)
{
	int num;
	int multi;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			prod = num * multi;
			if (multi != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod < 10 && multi != 0)
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
