/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:08:25 by strieste          #+#    #+#             */
/*   Updated: 2025/10/30 15:56:44 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *top_a)
{
	t_stack	*temp_f;
	t_stack	*temp_s;
	
	temp_f = top_a;
	temp_s = top_a->next;
	top_a = temp_s;
	temp_f = top_a->next;
	top_a->next = temp_f;
	printf("sa\n");
}

void	swap_b(t_stack *top_b)
{
	t_stack	*temp_f;
	t_stack	*temp_s;
	
	temp_f = top_b;
	temp_s = top_b->next;
	top_b = temp_s;
	temp_f = top_b->next;
	top_b->next = temp_f;
	printf("sb\n");
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