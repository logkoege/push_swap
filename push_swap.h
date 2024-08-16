/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 05:55:07 by logkoege          #+#    #+#             */
/*   Updated: 2024/08/16 15:22:59 by logkoege         ###   ########.fr       */
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

typedef struct s_push
{
	int	next;
	int	max;
	int	mid;
	int	flag;
}	t_push;

typedef struct s_swap
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		asize;
	int		bsize;
}		t_swap;
typedef struct s_stack
{
	int	top;
	int	size;
	int	pile[1024];
}		t_stack;

void	push(t_stack *src, t_stack *dest);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);

#endif