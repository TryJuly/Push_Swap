/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:55:39 by strieste          #+#    #+#             */
/*   Updated: 2025/11/10 11:03:19 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_node(t_stack **stack, int nbr);
t_stack	*check_input(char **array, t_stack *stack);
void	free_tab(char **array);

t_stack	*input_one(int ac, char *av, t_stack *stack)
{
	char	**array;

	if (ac < 1)
		return (NULL);
	array = ft_split(av, ' ');
	if (!array)
		return (NULL);
	stack = check_input(array, stack);
	if (!stack)
		return (NULL);
	free_tab(array);
	return (stack);
}

t_stack	*check_input(char **array, t_stack *stack)
{
	size_t	count;
	long	nbr;

	count = 0;
	while (array[count] != 0)
		count++;
	while ((count--) > 0)
	{
		if (!check_number(array[count]))
			return (ft_free_one_stack(&stack), free_tab(array), NULL);
		nbr = ft_atol(array[count]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			return (ft_free_one_stack(&stack), free_tab(array), NULL);
		if (!duplicate_nbr(stack, (int)nbr))
			return (ft_free_one_stack(&stack), free_tab(array), NULL);
		fill_node(&stack, (int)nbr);
	}
	return (stack);
}

void	free_tab(char **array)
{
	size_t	count;

	count = 0;
	while (array[count] != 0)
	{
		free(array[count]);
		count++;
	}
	free(array[count]);
	free(array);
}
