/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:03:32 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 09:32:22 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_stack(int argc, char **argv)
{
	long	nbr;
	t_stack	*stack;

	argc--;
	stack = NULL;
	if (argc < 1 || argv[1][0] == 0)
		return (NULL);
	if (argc == 1)
		return (input_one(argc, argv[1], stack));
	while (argc >= 1)
	{
		if (!check_number(argv[argc]))
			return (NULL);
		nbr = ft_atol(argv[argc]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			return (NULL);
		if (!duplicate_nbr(stack, (int)nbr))
			return (NULL);
		fill_node(&stack, (int)nbr);
		argc--;
	}
	return (stack);
}
