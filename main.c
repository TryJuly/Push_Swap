/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:54:27 by strieste          #+#    #+#             */
/*   Updated: 2025/10/29 17:27:30 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	// t_stack	stack_a;
	char	**array;
	size_t	count;

	if (ac != 2)
		return (2);
	array = ft_split(av[1], ' ');
	count = 0;
	while (array[count] != 0)
		printf("%s\n", array[count++]);
}
