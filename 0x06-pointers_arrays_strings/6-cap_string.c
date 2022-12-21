
#include "holberton.h"
/**
 * c_2_upper - fuction capitalize the strings.
 * @letter: is the string to capitalize.
 */
void c_2_upper(char *letter)
{
	if (*letter >= 'a' && *letter <= 'z')
		*letter -= 32;
}
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: is the string to capitalize.
 * Return: str.
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " ,;.!?(){}\"\t\n";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; separators[j] != '\0'; j++)
			if (i == 0)
			{
				c_2_upper(&str[i]);
				break;
			}
			else if (str[i - 1] == separators[j])
			{
				c_2_upper(&str[i]);
				break;
			}
	return (str);
}
