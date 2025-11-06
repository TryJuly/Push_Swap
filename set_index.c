/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:30:18 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 09:42:56 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_lower_index(t_stack *stack, int max);
void	set_lower(t_stack **stack, int nbr, int count);

void	set_index(t_stack **stack)
{
	t_stack	*temp;
	int		lower;
	int		count;
	int		length;
	int		max;

	temp = *stack;
	count = 1;
	length = 0;
	while (temp)
	{
		length++;
		temp = temp->next;
	}
	temp = *stack;
	max = find_max_nbr(temp);
	while (count <= length)
	{
		lower = find_lower_index(temp, max);
		set_lower(&temp, lower, count);
		count++;
	}
}

int	find_lower_index(t_stack *stack, int max)
{
	int		lower;
	t_stack	*temp;

	temp = stack;
	lower = max;
	while (temp)
	{
		if (temp->nbr < lower && temp->index == 0)
			lower = temp->nbr;
		temp = temp->next;
	}
	return (lower);
}

void	set_lower(t_stack **stack, int nbr, int count)
{
	t_stack	*temp;

	temp = *stack;
	while (temp)
	{
		if (temp->nbr == nbr)
		{
			temp->index = count;
			return ;
		}
		temp = temp->next;
	}
}
