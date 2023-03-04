#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - tests a char to see if its a digit between 0 and 9.
 * @c: a char
 *
 * Return: 1 if true 0 if false
 */

int _isdigit(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * skip_it -baltantly copied from Jonathan's live coding becuase my/
 * "first_num" function wasn't working
 * @str: takes parameter pointer to a char
 *
 * Return: pointer to a char
 */

char *skip_it(char *str)
{
	while (*str != '\0')
	{
		if (_isdigit(*str))
		{
			return (str);
		}
		str = str + 1;
	}
	return (str);
}

/**
 * first_num - find first number in a string
 * @str: takes parameter pointer to a char
 *
 * Return: pointer to a char
 */

char *first_num(char *str)
{
	int i;
	char *num;

	num = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (_isdigit(str[i]) == 1 && _isdigit(str[i + 1]) == 0)
		{
			num[0] = str[i];
			break;
		}
		i = i + 1;
	}
	return (num);
}

/**
 * minus_counter - count the number of minus signs in a string
 * @str: takes parameter pointer to a char
 *
 * Return: integer
 */

int minus_counter(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
			count = count + 1;
		else if (_isdigit(str[i]) == 1)
			break;
		i = i + 1;
	}
	return (count);
}

/**
 * _atoi - convert string to an integer
 * @s: takes parameter pointer to a string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	unsigned int ans;
	int minus = minus_counter(s);
	char *start = skip_it(s);

	i = 0;
	ans = 0;
	while (start[i] != '\0')
	{
		if (_isdigit(start[i]) == 1)
		{
		ans = (ans * 10) + (start[i] - '0');
		}
		else if (_isdigit(start[i]) == 0 && _isdigit(start[i - 1]) == 1)
		{
			break;
		}
			i = i + 1;
	}
	if ((minus % 2) != 0)
	{
		return (-1 * ans);
	}
	else
	{
		return (ans);
	}
}
