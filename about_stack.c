/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   about_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:00:52 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 08:55:18 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	stack_size(t_stack *stack)
{
	size_t	length;

	if (!stack)
		return (-1);
	length = 0;
	while (stack)
	{
		stack = stack->next;
		length++;
	}
	return (length);
}

t_stack	*stack_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*second_last(t_stack *lst)
{
	t_stack	*temp;
	size_t	count;
	size_t	length;

	if (!lst)
		return (NULL);
	temp = lst;
	count = 0;
	length = 0;
	while (lst->next)
	{
		lst = lst->next;
		length++;
	}
	while (count < (length - 1))
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}

t_stack	*new_stack(int nbr, int index)
{
	t_stack	*new;

	index = 0;
	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->index = index;
	new->next = NULL;
	return (new);
}

void	lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
