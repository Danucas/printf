#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *_put - putchar
 *@c: character
 *Return: anything
 */
int _put(char c)
{
	setbuf(stdout, NULL);
	return (write(1, &c, 1));
}
