/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 05:55:07 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/03 19:48:13 by logkoege         ###   ########.fr       */
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
int		if_doubles(char **argv);
int		nbr_cmp(char *s1, char *s2);
int		enlv_argifzero(char *argv);
int		argv_nb(char *argv);
void	pars_arg(char **argv);

#endif
