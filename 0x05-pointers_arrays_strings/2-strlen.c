#include "main.h"

/**
* _strlen -> function to get the lenght of a string
* @s: string pointer
* Return: returns length of the string
*/

int _strlen(char *s)
{
int i = 0;

while (*(s + 1))

i++;

return (i);
}
