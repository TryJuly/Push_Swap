/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_stack_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:15:24 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 10:05:12 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack, char c)
{
	t_stack	*temp;
	t_stack	*second_lstack;

	if (!*stack)
		return ;
	temp = stack_last(*stack);
	second_lstack = second_last(*stack);
	second_lstack->next = NULL;
	temp->next = *stack;
	*stack = temp;
	if (c == 'a')
		ft_printf("rra\n");
	else if (c == 'b')
		ft_printf("rrb\n");
	return ;
}

void	reverse_rr(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a)
		reverse_rotate(stack_a, 'r');
	if (*stack_b)
		reverse_rotate(stack_b, 'r');
	if (*stack_a || *stack_b)
		ft_printf("rrr\n");
	return ;
}

void	rotate(t_stack **stack, char c)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*stack)
		return ;
	temp = (*stack)->next;
	last = stack_last(*stack);
	(*stack)->next = NULL;
	last->next = (*stack);
	*stack = temp;
	if (c == 'a')
		ft_printf("ra\n");
	if (c == 'b')
		ft_printf("rb\n");
	return ;
}

void	rotate_two(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a)
		rotate(stack_a, 'r');
	if (*stack_b)
		rotate(stack_b, 'r');
	if (*stack_a || *stack_b)
		ft_printf("rr\n");
	return ;
}
