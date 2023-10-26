#include <stdio.h>
#include <string.h>
#include"main.h"

/**
 * is_palindrome -if a string is a palindrome
 * Description: returns 1 if a string is a palindrome and 0 if not
 * Return: int
 */
/* Creating the function*/

int is_palindrome(char *s)
{
	int index, comp = 0, len;

	len = strlen(s);

	for (index = 0; index < len / 2; index++)
	{
		if (s[index] == s[len - index - 1])
			comp++;
	}
	if (comp == index)
		return (1);
	else
		return (0);
}
