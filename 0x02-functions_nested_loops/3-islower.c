#include "main.h"
#include <cytype.h>

/**
 * _islower - Entry point
 *
 * _islower - checking which characters are in lowercase and returns 1
 *
 * Return: 1 if true otherwise 0 if false
 */

int _islower(int c)
{
	return (c >= 97 && c <= 123) ? 1 : 0;
}
