#include "shell.h"

/**
* counting the number of argument with countArgs
* @args: inputing an array to strings
* Return: the total number of strings
*/
int countArgs(char **args)
{
	register int a = 0;

	while (args[a])
		a++;
	return (a);
}

/**
* _atoi - changing the string to integer
* @s: inputing string
* Return: -1 provided it's not a valid number, else the converted number
*/
int _atoi(char *s)
{
	register int a = 0;
	unsigned long num = 0;

	while (s[a])
	{
		if (s[a] >= '0' && s[a] <= '9')
			num = num * 10 + s[a] - '0';
		else
			return (-1);
		a++;
	}
	if (num > INT_MAX)
	{
		return (-1);
	}
	return (num);
}