/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_elemts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:56:58 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 08:54:18 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_elements(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = (*stack)->next;
	if ((*stack)->index > temp->index)
		swap(*stack, 'a');
	return ;
}

void	three_elements(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	if (!*stack || !(*stack)->next || !(*stack)->next->next)
		return ;
	a = (*stack)->index;
	b = (*stack)->next->index;
	c = (*stack)->next->next->index;
	if (a > b && b > c)
	{
		swap(*stack, 'a');
		reverse_rotate(stack, 'a');
	}
	else if (a < b && b > c && a < c)
	{
		reverse_rotate(stack, 'a');
		swap(*stack, 'a');
	}
	else if (a < b && a > c && b > c)
		reverse_rotate(stack, 'a');
	else if (a > b && a < c && b < c)
		swap(*stack, 'a');
	else if (a > b && a > c && b < c)
		rotate(stack, 'a');
}
