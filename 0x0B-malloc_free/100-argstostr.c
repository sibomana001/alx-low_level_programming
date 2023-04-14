#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: Input string variable
 * Return: NULL if str = NULL, On success, the function returns a pointer to
 * duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
