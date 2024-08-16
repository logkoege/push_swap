/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:25:41 by logkoege          #+#    #+#             */
/*   Updated: 2024/08/16 15:22:49 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *src, t_stack *dest)
{
	if (src->top < 0)
		return ;
	dest->top++;
	dest->pile[dest->top] = src->pile[src->top];
	src->top--;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
