/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:54:27 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 10:28:48 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack, char c)
{
	t_stack	*temp;

	temp = stack;
	if (!stack)
	{
		ft_printf("Stack %c: ((	NULL	))\n", c);
		return ;
	}
	while (temp)
	{
		ft_printf("Stack %c nbr: %d Index: %d\n", c, temp->nbr, temp->index);
		temp = temp->next;
	}
}

int	main(int ac, char **av)
{
	int	states;

	if (ac <= 1)
		return (0);
	states = push_swap(ac, av);
	if (states)
		return (ft_printf("Error\n"));
	return (0);
}
