/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:31:21 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 09:41:41 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char *str)
{
	size_t	count;

	count = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	if (str[count] == '+' || str[count] == '-')
		count++;
	if (!str[count])
		return (0);
	while (str[count])
	{
		if (str[count] < '0' || str[count] > '9')
			return (0);
		count++;
	}
	return (1);
}

long	ft_atol(const char *s)
{
	long	res;
	int		sign;
	size_t	count;

	res = 0;
	sign = 1;
	count = 0;
	while ((s[count] >= 9 && s[count] <= 13) || s[count] == 32)
		count++;
	if (s[count] == '-' || s[count] == '+')
		count++;
	if (s[count - 1] == '-')
		sign *= -1;
	while (s[count] >= '0' && s[count] <= '9')
	{
		res = (res * 10) + (s[count] - 48);
		count++;
	}
	return (res * sign);
}

int	duplicate_nbr(t_stack *stack, int nb)
{
	while (stack)
	{
		if (stack->nbr == nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	fill_node(t_stack **stack, int nbr)
{
	t_stack	*new;

	if (!*stack)
	{
		*stack = new_stack(nbr, 0);
		if (!*stack)
			return ;
		return ;
	}
	new = new_stack(nbr, 0);
	if (!new)
		return ;
	lstadd_front(stack, new);
}

int	is_sorted(t_stack **top_a)
{
	t_stack	*temp;

	temp = *top_a;
	if (*top_a)
	{
		while (temp)
		{
			if (temp->next && temp->index > temp->next->index)
				return (0);
			temp = temp->next;
		}
		return (1);
	}
	return (0);
}
