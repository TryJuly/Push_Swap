/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_v2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:42:34 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 10:36:27 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_nbr(t_stack *stack)
{
	int		max;
	t_stack	*temp;

	max = 0;
	temp = stack;
	while (temp)
	{
		if (temp->nbr > max)
			max = temp->nbr;
		temp = temp->next;
	}
	return (max);
}
