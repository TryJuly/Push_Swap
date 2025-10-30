/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:56:49 by strieste          #+#    #+#             */
/*   Updated: 2025/10/30 15:46:43 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
} t_stack;

t_stack	*swap_a(t_stack *top_a);
void	swap_b(t_stack *top_b);
void	swap_swap(t_stack *top_a, t_stack *top_b);
void	push_a(t_stack *top_a, t_stack *top_b);
void	push_b(t_stack *top_a, t_stack *top_b);
int		main(void);

#endif