/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:56:17 by strieste          #+#    #+#             */
/*   Updated: 2025/11/08 10:04:22 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	push_swap(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		length;

	stack_b = NULL;
	stack_a = NULL;
	stack_a = fill_stack(ac, av);
	if (!stack_a)
		return (ft_free_stack(&stack_a, &stack_b));
	set_index(&stack_a);
	if (is_sorted(&stack_a))
		return (ft_free_stack(&stack_a, &stack_b));
	length = stack_size(stack_a);
	if (length < 3)
		two_elements(&stack_a);
	else if (length == 3)
		three_elements(&stack_a);
	else if (length <= 5)
		five_elements(&stack_a, &stack_b);
	else
		full_elements(&stack_a, &stack_b);
	ft_free_stack(&stack_a, &stack_b);
	return (0);
}
