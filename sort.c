/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:00 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 17:54:38 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack **stack_a)
{
	t_stack	*big;

	big = ft_max(*stack_a);
	if ((*stack_a) == big)
		ra(stack_a, 0);
	else if ((*stack_a)->next == big)
		rra(stack_a, 0);
	if (sorted(*stack_a) == 2)
		sa(*stack_a, 0);
}

void	setup_index(t_stack *lst)
{
	long	mid;
	int		i;
	int		negative;

	i = 0;
	mid = (stack_size(lst) / 2);
	while (lst)
	{
		if (i <= mid)
			lst->index = i++;
		else
		{
			negative = -stack_size(lst);
			lst->index = negative++;
		}
		lst = lst->next;
	}
}

void	setup_target_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*target;
	t_stack	*temp;
	long	min;

	temp = stack_b;
	while (stack_a)
	{
		min = LONG_MIN;
		target = NULL;
		while (stack_b)
		{
			if (stack_a->data > stack_b->data && stack_b->data > min)
			{
				target = stack_b;
				min = stack_b->data;
			}
			stack_b = stack_b->next;
		}
		stack_b = temp;
		if (min == LONG_MIN)
			stack_a->target = ft_max(stack_b);
		else
			stack_a->target = target;
		stack_a = stack_a->next;
	}
}

void	setup_target_b(t_stack *stack_b, t_stack *stack_a)
{
	t_stack	*target;
	t_stack	*temp;
	long	min;

	temp = stack_a;
	while (stack_b)
	{
		min = LONG_MAX;
		target = NULL;
		while (stack_a)
		{
			if (stack_b->data < stack_a->data && stack_a->data < min)
			{
				target = stack_a;
				min = stack_a->data;
			}
			stack_a = stack_a->next;
		}
		stack_a = temp;
		if (min == LONG_MAX)
			stack_b->target = ft_min(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	count;

	count = stack_size(*stack_a);
	if (count-- > 3)
		pb(stack_b, stack_a);
	if (count-- > 3)
		pb(stack_b, stack_a);
	while (count-- > 3)
	{
		setup_lst(stack_a, stack_b, 0);
		push(stack_a, stack_b);
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
