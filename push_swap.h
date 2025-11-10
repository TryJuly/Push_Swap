/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:56:49 by strieste          #+#    #+#             */
/*   Updated: 2025/11/10 10:04:36 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
}	t_stack;

/*			About_stack.c			*/

ssize_t	stack_size(t_stack *stack);
t_stack	*stack_last(t_stack *lst);
t_stack	*second_last(t_stack *lst);
t_stack	*new_stack(int nbr, int index);
void	lstadd_front(t_stack **lst, t_stack *new);

/*			Fill_stack				*/

t_stack	*fill_stack(int argc, char **argv);
t_stack	*input_one(int ac, char *av, t_stack *stack);

/*			Sort_Stack				*/

void	two_elements(t_stack **stack);
void	three_elements(t_stack **stack);
void	five_elements(t_stack **top_a, t_stack **top_b);
void	full_elements(t_stack **top_a, t_stack **top_b);

/*			Clean stack				*/

int		ft_free_stack(t_stack **top_a, t_stack **top_b, int state);
void	ft_free_one_stack(t_stack **stack);

/*			Tools					*/

int		is_sorted(t_stack **top_a);
void	set_index(t_stack **stack);
int		find_max_nbr(t_stack *stack);
int		check_number(char *str);
long	ft_atol(const char *s);
int		duplicate_nbr(t_stack *stack, int nb);
void	fill_node(t_stack **stack, int nbr);

/*			Moove Stack				*/

void	swap(t_stack *top, char stack);
void	swap_swap(t_stack *top_a, t_stack *top_b);
void	push_b(t_stack **top_a, t_stack **top_b);
void	push_a(t_stack **top_a, t_stack **top_b);
void	reverse_rotate(t_stack **stack, char c);
void	reverse_rr(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **stack, char c);
void	rotate_two(t_stack **stack_a, t_stack **stack_b);

ssize_t	push_swap(int ac, char **av);
int		main(int ac, char **av);

#endif