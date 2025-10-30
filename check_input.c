/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:34:06 by strieste          #+#    #+#             */
/*   Updated: 2025/10/30 12:07:25 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	check_double(char *s1, char *s2)
{
	int	nb_1;
	int	nb_2;

	nb_1 = ft_atoi(s1);
	nb_2 = ft_atoi(s2);
	if (nb_1 == nb_2)
		return (0);
	if (nb_1 > INT_MAX || nb_1 < INT_MIN)
		return (0);
	return (1);
}

size_t	check_digit(char *s1)
{
	size_t	count;

	count = 0;
	if (s1[count] && (s1[count] == '-' || s1[count] == '+'))
		count++;
	while (s1[count])
	{
		if (!ft_isdigit(s1[count]))
			return (0);
		count++;
	}
	return (1);
}

size_t	valid_sign(char *s1)
{
	size_t	count;
	size_t	sign;

	count = 0;
	sign = 0;
	while (s1[count] && (s1[count] == '-' || s1[count] == '+'))
	{
		if (s1[count] && (s1[count] == '-' || s1[count] == '+'))
			sign++;
		count++;
	}
	if (sign > 1)
		return (0);
	return (1);
}

size_t	check_input(char **array)
{
	size_t	count;
	size_t	length;

	count = 0;
	while (array[count])
	{
		if (!valid_sign(array[count]))
			return (0);
		if (!check_digit(array[count]))
			return (0);
		count++;
	}
	count = 0;
	while(array[count] != 0)
	{
		length = count + 1;
		while (array[count] != 0 && array[count + length] != 0)
		{
			if (!check_double(array[count], array[count + length]))
				return (0);
			length++;
		}
		count++;
	}
	return (1);
}
