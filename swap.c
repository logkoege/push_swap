/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:26:21 by logkoege          #+#    #+#             */
/*   Updated: 2024/08/16 15:22:50 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->top < 1)
		return ;
	tmp = stack->pile[stack->top];
	stack->pile[stack->top] = stack->pile[stack->top - 1];
	stack->pile[stack->top - 1] = tmp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}
