/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:32:20 by strieste          #+#    #+#             */
/*   Updated: 2025/11/06 10:31:02 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free_stack(t_stack **top_a, t_stack **top_b)
{
	t_stack	*temp;

	if (*top_a)
	{
		while (*top_a)
		{
			temp = (*top_a)->next;
			free(*top_a);
			*top_a = temp;
		}
	}
	if (*top_b)
	{
		while (*top_b)
		{
			temp = (*top_b)->next;
			free(*top_b);
			*top_b = temp;
		}
	}
	return (1);
}
