/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:29 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 17:59:31 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	int				index;
	int				prix;
	struct s_stack	*target;
	struct s_stack	*next;
}					t_stack;

//push_swaps_utils
int		count_words(char *str, char c);
int		word_length(char *str, char c);
int		ft_strlen(char *str);
char	*next_word_start(char *str, char c);
char	**ft_split(char *str, char c);

//push_swap_utils2
t_stack	*ft_max(t_stack *lst);
t_stack	*ft_min(t_stack *lst);
void	setup_lst(t_stack **stack_a, t_stack **stack_b, int n);
int		ft_positive(int n);

//instructions
t_stack	*sa(t_stack *lst, int n);
t_stack	*sb(t_stack *lst, int n);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);

//instructions2
void	rb(t_stack **stack_b, int n);
void	ra(t_stack **stack_a, int n);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a, int n);
void	rrb(t_stack **stack_b, int n);

//instructions3
void	rrr(t_stack **stack_a, t_stack **stack_b);

//parsing
t_stack	*fill_stack_a(char **argv);
void	if_double(t_stack *lst, int n, char **args);
void	ft_free(char **args);
void	if_error(t_stack **lst, char **args);
int		ft_atoi(char *str, t_stack **lst, char **args);

//sort
void	sort3(t_stack **stack_a);
void	sort(t_stack **stack_a, t_stack **stack_b);
void	setup_index(t_stack *lst);
void	setup_target_a(t_stack *stack_a, t_stack *stack_b);
void	setup_target_b(t_stack *stack_b, t_stack *stack_a);

//sort_utils
t_stack	*reduc(t_stack *lst);
void	min(t_stack **stack_a);
void	prix(t_stack *lst);
void	push_back(t_stack **stack_a, t_stack **stack_b);
void	push(t_stack **stack_a, t_stack **stack_b);

//list
t_stack	*new_stack(int n);
t_stack	*ft_lstlast2(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		sorted(t_stack *lst);

//list_utils
void	free_lst(t_stack **lst);
int		stack_size(t_stack *lst);

#endif