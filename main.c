/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:54:27 by strieste          #+#    #+#             */
/*   Updated: 2025/10/30 15:47:13 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*p_last;

	if (!new)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	p_last = ((void *)0);
	p_last = lstlast(*lst);
	p_last->next = new;
}

t_stack	*stacknew(int nbr, int index)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->index = index;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_stack	*new;
	t_stack	*stack_a;
	t_stack	*tmp;
	// t_stack	*stack_b;
	int		nbr;
	int		index;
	
	stack_a = stacknew(10, 0);
	nbr = 9;
	index = 1;
	while (nbr > 0)
	{
		new = stacknew(nbr, index);
		nbr--;
		index++;
		lstadd_back(&stack_a, new);
	}
	tmp = stack_a;
	while (tmp)
	{
		printf("nbr: %d, index: %d\n", tmp->nbr, tmp->index);
		tmp = tmp->next;
	}
	stack_a = swap_a(stack_a);
	while (stack_a)
	{
		printf("nbr: %d, index: %d\n", stack_a->nbr, stack_a->index);
		stack_a = stack_a->next;
	}
	return (0);
}
