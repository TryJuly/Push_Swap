/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:55:39 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 09:31:47 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_number(char *str);
long	ft_atol(const char *s);
int		duplicate_nbr(t_stack *stack, int nb);
void	fill_node(t_stack **stack, int nbr);

t_stack	*input_one(int ac, char *av, t_stack *stack)
{
	long	nbr;
	char	**array;
	size_t	count;

	if (ac < 1)
		return (NULL);
	array = ft_split(av, ' ');
	if (!array)
		return (NULL);
	count = 0;
	while (array[count] != 0)
		count++;
	while ((count--) > 0)
	{
		if (!check_number(array[count]))
			return (NULL);
		nbr = ft_atol(array[count]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			return (NULL);
		if (!duplicate_nbr(stack, (int)nbr))
			return (NULL);
		fill_node(&stack, (int)nbr);
	}
	return (stack);
}
