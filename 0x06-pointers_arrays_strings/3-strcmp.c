#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointer to cahr params
 * @s2 : pointer to char
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, R;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	R = s1[i] - s2[i];
	return (R);
}
