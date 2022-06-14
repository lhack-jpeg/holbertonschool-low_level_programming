#include <stdio.h>
#include <string.h>
/**
 * rev_string - revereses the value of the pointer stored in the pointer
 * @s: str pointer
 *Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char *begin_ptr, *end_ptr, ch;

	begin_ptr = s;
	end_ptr = s;

	len = strlen(s);
	/*change position to end of array*/
	for (i = 0; i < len -1; i++)
		end_ptr++;
	/*Iterates over the array and reverses the order*/
	for (i = 0; i < len / 2; i++)
	{
		/*saves the information of the end_ptr*/
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
