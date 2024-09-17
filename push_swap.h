/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 05:55:07 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/17 18:26:31 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "./printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct s_node
{
	int				index;
	int				data;
	struct s_node	*next;
}		t_node;

typedef struct s_pushswap
{
	t_node	*a;
	t_node	*b;
}		t_pushswap;

void	pa(t_pushswap *ps);
void	pb(t_pushswap *ps);
void	ss(t_pushswap *ps);
void	sa(t_pushswap *ps);
void	sb(t_pushswap *ps);
void	ra(t_pushswap *ps);
void	rb(t_pushswap *ps);
void	rr(t_pushswap *ps);
void	rra(t_pushswap *ps);
void	rrb(t_pushswap *ps);
void	rrr(t_pushswap *ps);
int		if_doubles(char **argv);
int		nbr_cmp(char *s1, char *s2);
int		enlv_argifzero(char *argv);
int		argv_nb(char *argv);
int		pars_arg(char **argv);
t_node	*before_last(t_node *lst);
int		ft_minmaxcheck(char **args);
long	ft_atol(char *str);
t_node	*ft_lstlast2(t_node *tmp);
void	sort5(t_pushswap *ps);
void	sort4(t_pushswap *ps);
void	sort3(t_pushswap *ps);
int		sort3d(t_node *lst);
int		ft_max(t_node *lst);
int		ft_min(t_node *lst);
void	stack_add(t_node **stack, t_node *new);
t_node	*new_stack(int data);
t_node	*fill_stack(int argc, char **argv);

#endif
