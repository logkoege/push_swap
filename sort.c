/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:00 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/26 18:39:30 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack **stack_a)
{
	if ((*stack_a) == ft_max(*stack_a))
	{
		ra(stack_a, 0);
	}
	else if ((*stack_a)->next == ft_max(*stack_a))
	{
		rra(stack_a, 0);
	}
	if (sorted(*stack_a) == 2)
		sa(*stack_a, 0);
}

void	setup_index(t_stack *lst)
{
	long	i;
	long	neg;
	long	mid;

	i = 0;
	mid = (stack_size(lst) / 2);
	while (lst)
	{
		if (i <= mid)
		{
			lst->index = i;
			i++;
		}
		else
		{
			neg = stack_size(lst);
			lst->index = neg;
			neg++;
		}
		lst = lst->next;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size-- > 3)
		pb(stack_b, stack_a);
	if (size > 3)
	{
		pb(stack_b, stack_a);
		size--;
	}
	while (size > 3)
	{
		setup_lst(stack_a, stack_b, 0);
		push_back(stack_a, stack_b);
		size--;
	}
	sort3(stack_a);
	while (*stack_b)
	{
		setup_lst(stack_a, stack_b, 1);
		push_back(stack_a, stack_b);
	}
	setup_lst(stack_a, stack_b, 2);
	min(stack_a);
}

void	setup_target_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*target;
	t_stack	*lst_temp;
	long	long_min;

	lst_temp = stack_b;
	while (stack_a)
	{
		target = NULL;
		long_min = LONG_MIN;
		while (stack_b)
		{
			if (stack_b->data > long_min && stack_a->data > stack_b->data)
			{
				target = stack_b;
				long_min = stack_b->data;
			}
			stack_b = stack_b->next;
		}
		stack_b = lst_temp;
		if (long_min == LONG_MIN)
			stack_a->target = ft_max(stack_b);
		else
			stack_a->target = target;
		stack_a = stack_a->next;
	}
}

void	setup_target_b(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*target;
	t_stack	*lst_temp;
	long	long_max;

	lst_temp = stack_a;
	while (stack_b)
	{
		target = NULL;
		long_max = LONG_MAX;
		while (stack_a)
		{
			if (stack_a->data < long_max && stack_a->data > stack_b->data)
			{
				target = stack_a;
				long_max = stack_a->data;
			}
			stack_a = stack_a->next;
		}
		stack_a = lst_temp;
		if (long_max == LONG_MAX)
			stack_b->target = ft_min(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}
