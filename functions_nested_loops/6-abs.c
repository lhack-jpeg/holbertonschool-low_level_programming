#include <stdlib.h>
/**
 *_abs - Calculates the absolute value of the integer
 *@j: is the integer being converted to absolute value
 *Return: returns the absolute value of the int
 */

int _abs(int j)
{
	if (j < 0)
		j = j * -1;
	
	return (j);
}
