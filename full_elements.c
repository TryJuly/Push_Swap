/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:58:45 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 09:14:03 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	length_bits(t_stack **top_a);
void			sort(t_stack **top_a, t_stack **top_b, int count, int len);
unsigned int	find_max_index(t_stack *top_a);

void	full_elements(t_stack **top_a, t_stack **top_b)
{
	unsigned int	max_bit;
	unsigned int	count;
	int				len_s;

	max_bit = length_bits(top_a);
	count = 0;
	len_s = stack_size(*top_a);
	while (count < max_bit)
	{
		sort(top_a, top_b, (unsigned int) count, len_s);
		if (is_sorted(top_a))
			return ;
		count++;
	}
	return ;
}

void	sort(t_stack **top_a, t_stack **top_b, int count, int len)
{
	int	max_index;

	max_index = find_max_index(*top_a);
	while (len)
	{
		if ((*top_a)->index == max_index)
		{
			if (is_sorted(&(*top_a)->next))
			{
				rotate(top_a, 'a');
				while (*top_b)
					push_a(top_a, top_b);
				if (is_sorted(top_a))
					return ;
			}
		}
		if ((((*top_a)->index >> count) & 1) == 1)
			rotate(top_a, 'a');
		else
			push_b(top_a, top_b);
		len--;
	}
	while (*top_b)
		push_a(top_a, top_b);
	return ;
}

unsigned int	length_bits(t_stack **top_a)
{
	unsigned int	max_bits;
	int				count;

	max_bits = find_max_index(*top_a);
	count = 0;
	while (max_bits >> count)
		count++;
	return (count);
}

unsigned int	find_max_index(t_stack *top_a)
{
	int		max_nbr;
	t_stack	*temp;

	max_nbr = find_max_nbr(top_a);
	temp = top_a;
	while (temp->nbr != max_nbr)
		temp = temp->next;
	return (temp->index);
}
