/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:54:27 by strieste          #+#    #+#             */
/*   Updated: 2025/11/10 10:26:57 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
