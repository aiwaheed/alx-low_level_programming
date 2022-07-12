#include "main.h"

/**
* _strlen -> function to get the lenght of a string
* @s: string pointer
* Return: returns length of the string
*/

int _strlen(char *s)
{
int len;

for (; *s != '\0'; s++)
{
	len += 1;
}
return (len);
}
