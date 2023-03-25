#include "main.h"
/*
 * _isdifit - checks if digit between 0 - 9
 * @c : input
 * Return :1 if it is digin or 0 if not
 *
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
