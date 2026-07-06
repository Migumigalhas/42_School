/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:20:24 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 16:01:53 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
	int				size;
}					t_stack;

typedef struct s_count
{
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
	int				total;
}					t_count;

float				compute_disorder(t_stack *a);
void				adaptive(t_stack *a, t_stack *b);
int					ft_strcmp(char *s1, char *s2);
void				flag_parsing(char **argv, t_stack *a, t_stack *b);
int					find_min(t_stack *a);
void				min_to_top(t_stack *a);
void				sort_five(t_stack *a, t_stack *b);
void				sort_three(t_stack *a);
void				sort_two(t_stack *a);
int					find_min_pos(t_stack *a);
void				min_to_top_new(t_stack *a);
void				restore_values(t_stack *a, int *original, int size);
void				selection_sort(t_stack *a, t_stack *b);
void				sort_array(int *array, int size);
int					*get_values(t_stack *a);
int					find_rank(int *sorted, int size, int value);
void				assign_ranks(t_stack *a);
void				pull_back(t_stack *a, t_stack *b);
int					find_max(t_stack *a);
int					find_max_pos(t_stack *a);
void				max_to_top(t_stack *a);
void				chunk_sort(t_stack *a, t_stack *b);
void				radix_sort(t_stack *a, t_stack *b);
int					ft_matoi(char *str);
long				ft_matol(char *str);
void				free_stack(t_stack *a);
void				error_exit(t_stack *a, t_stack *b);
void				validate(char **argv, int i, t_stack *a, t_stack *b);
int					ft_duplicate(t_stack *a, int value);
int					sort_check(t_stack *a);
void				init_stack(t_stack *s);
void				push(t_stack *stack, int value);
int					pop(t_stack *stack);
void				s_helper(t_stack *s);
void				r_helper(t_stack *r);
void				rr_helper(t_stack *rr);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

#endif