/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:08:25 by strieste          #+#    #+#             */
/*   Updated: 2025/10/30 15:49:24 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*swap_a(t_stack *top_a)
{
	t_stack	*temp;
	
	temp = top_a;
	top_a = top_a->next;
	temp->next = top_a->next;
	top_a->next = temp;
	printf("sa\n");
	return (top_a);
}

t_stack	*swap_b(t_stack *top_b)
{
	t_stack	*temp;
	
	temp = top_b;
	top_b = temp->next;
	temp->next = top_b->next;
	top_b->next = temp;
	printf("sb\n");
	return (top_b);
}

void	swap_swap(t_stack *top_a, t_stack *top_b)
{
	swap_a(top_a);
	swap_b(top_b);
	printf("ss\n");
}

void	push_a(t_stack *top_a, t_stack *top_b)
{
	t_stack	*temp_b;
	t_stack	*temp_a;
	
	temp_b = top_b->next;
	temp_a = top_a;
	top_a = top_b;
	top_a->next = temp_a;
	top_b = temp_b;
	printf("pa\n");
}

void	push_b(t_stack *top_a, t_stack *top_b)
{
	t_stack	*temp_b;
	t_stack	*temp_a;
	
	temp_b = top_b;
	temp_a = top_a->next;
	top_b = top_a;
	top_b->next = temp_b;
	top_a = temp_a;
	printf("pa\n");
}