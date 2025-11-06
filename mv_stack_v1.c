/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_stack_v1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:08:25 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 10:04:42 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *top, char stack)
{
	t_stack	*temp;
	int		content_f;
	int		content_s;
	int		index_f;
	int		index_s;

	if (!top->next || !top)
		return ;
	temp = top->next;
	content_f = top->nbr;
	index_f = top->index;
	content_s = temp->nbr;
	index_s = temp->index;
	top->nbr = content_s;
	top->index = index_s;
	temp->nbr = content_f;
	temp->index = index_f;
	if (stack == 'a')
		ft_printf("sa\n");
	else if (stack == 'b')
		ft_printf("sb\n");
	return ;
}

void	swap_swap(t_stack *top_a, t_stack *top_b)
{
	if (top_a)
		swap(top_a, 's');
	if (top_b)
		swap(top_b, 's');
	if (top_a || top_b)
		ft_printf("ss\n");
	return ;
}

void	push_b(t_stack **top_a, t_stack **top_b)
{
	t_stack	*temp;

	if (!*top_a)
		return ;
	temp = *top_a;
	if ((*top_a)->next)
		*top_a = (*top_a)->next;
	else if (!(*top_a)->next)
		*top_a = NULL;
	if (*top_b)
	{
		temp->next = *top_b;
		*top_b = temp;
	}
	else if (!*top_b)
	{
		temp->next = NULL;
		*top_b = temp;
	}
	ft_printf("pb\n");
	return ;
}

void	push_a(t_stack **top_a, t_stack **top_b)
{
	t_stack	*temp;

	if (!*top_b)
		return ;
	temp = *top_b;
	if ((*top_b)->next)
		*top_b = (*top_b)->next;
	else if (!(*top_b)->next)
		*top_b = NULL;
	if (*top_a)
	{
		temp->next = *top_a;
		*top_a = temp;
	}
	else if (!*top_a)
	{
		temp->next = NULL;
		*top_a = temp;
	}
	ft_printf("pa\n");
	return ;
}
