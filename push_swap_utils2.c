/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:24:20 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 17:56:06 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *stack_a)
{
	int	a;
	int	i;

	i = 1;
	while (stack_a->next != NULL)
	{
		a = stack_a->data;
		stack_a = stack_a->next;
		i++;
		if (stack_a->data < a)
			return (i);
	}
	return (0);
}

t_stack	*ft_max(t_stack *lst)
{
	long	litle;
	t_stack	*bigstack;

	litle = LONG_MIN;
	while (lst)
	{
		if (lst->data > litle)
		{
			litle = lst->data;
			bigstack = lst;
		}
		lst = lst->next;
	}
	return (bigstack);
}

t_stack	*ft_min(t_stack *lst)
{
	long	big;
	t_stack	*lowstack;

	big = LONG_MAX;
	while (lst)
	{
		if (lst->data < big)
		{
			big = lst->data;
			lowstack = lst;
		}
		lst = lst->next;
	}
	return (lowstack);
}

int	ft_positive(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

void	setup_lst(t_stack **stack_a, t_stack **stack_b, int n)
{
	setup_index(*stack_a);
	setup_index(*stack_b);
	setup_target_a(*stack_a, *stack_b);
	setup_target_b(*stack_b, *stack_a);
	if (n == 0)
		prix(*stack_a);
	else if (n == 1)
		prix(*stack_b);
}
