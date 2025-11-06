/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:04:20 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 09:20:55 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	lower_to_top(t_stack **top_a);
static int	find_lower(t_stack *stack);

void	five_elements(t_stack **top_a, t_stack **top_b)
{
	while (stack_size(*top_a) > 3)
	{
		lower_to_top(top_a);
		push_b(top_a, top_b);
	}
	three_elements(top_a);
	push_a(top_a, top_b);
	push_a(top_a, top_b);
}

static void	lower_to_top(t_stack **top_a)
{
	int		lower;
	int		len;
	int		len_stack;
	t_stack	*temp;

	temp = *top_a;
	len = 0;
	lower = find_lower(temp);
	len_stack = stack_size(temp);
	if (temp->index != lower)
	{
		while (temp->index != lower)
		{
			len++;
			temp = temp->next;
		}
		if ((len / len_stack) >= (len_stack / 2))
			swap(*top_a, 'a');
		if ((len / len_stack) < (len_stack / 2))
		{
			while ((*top_a)->index != lower)
				reverse_rotate(top_a, 'a');
		}
	}
	return ;
}

int	find_lower(t_stack *stack)
{
	int		max;
	int		lower;
	t_stack	*temp;

	temp = stack;
	max = 0;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	lower = max;
	temp = stack;
	while (temp)
	{
		if (temp->index < lower)
			lower = temp->index;
		temp = temp->next;
	}
	return (lower);
}
