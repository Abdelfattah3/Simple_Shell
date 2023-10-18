#include "main.h"
/**
* _strchr - searches for a character in a string
* @des : pointer to a string we'll search in it
* @src : pointer to the character we'll search for
* Return: pointer to the character in the des string
*/
char *_strchr(const char *des, const char *src)
{
	while (*des)
	{
		if (*des == *src)
		{
			return ((char *)des);
		}
		des++;
	}
	return (NULL);
	/* It is used in many different applications,*/
       /*such as parsing strings, validating user input,*/
       /*and searching for substrings in a text file.*/
}
