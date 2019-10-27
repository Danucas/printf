#include <unistd.h>
/**
 *_put - putchar
 *@c: character
 *Return: anything
 */
int _put(char c)
{
	return (write(1, &c, 1));
}
