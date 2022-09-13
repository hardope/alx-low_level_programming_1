#include "main.h"
/**
*  _islower - Print
* @c: Description for c
*/
int _islower(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
