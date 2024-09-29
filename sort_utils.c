/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:04:49 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 17:54:25 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prix(t_stack *stack_a)
{
	while (stack_a)
	{
		if ((stack_a->index < 0 && stack_a->target->index < 0)
			|| (stack_a->index > 0 && stack_a->target->index > 0))
		{
			if (ft_positive(stack_a->index)
				> ft_positive(stack_a->target->index))
				stack_a->prix = ft_positive(stack_a->index);
			else
				stack_a->prix = ft_positive(stack_a->target->index);
		}
		else
			stack_a->prix = ft_positive(stack_a->index)
				+ ft_positive(stack_a->target->index);
		stack_a = stack_a->next;
	}
}

t_stack	*reduc(t_stack *lst)
{
	long	max;
	t_stack	*cheap;

	max = LONG_MAX;
	while (lst)
	{
		if (lst->prix < max)
		{
			max = lst->prix;
			cheap = lst;
		}
		lst = lst->next;
	}
	return (cheap);
}

void	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheap;
	int		i;

	i = 0;
	cheap = reduc(*stack_a);
	while (i != 1)
	{
		setup_index(*stack_a);
		setup_index(*stack_b);
		if ((*stack_a)->data == cheap->data
			&& (*stack_b)->data == cheap->target->data && i++ == 0)
			pb(stack_b, stack_a);
		else if (cheap->target->index > 0 && cheap->index > 0 && i == 0)
			rr(stack_a, stack_b);
		else if (cheap->target->index < 0 && cheap->index < 0 && i == 0)
			rrr(stack_a, stack_b);
		else if (cheap->index > 0 && i == 0)
			ra(stack_a, 0);
		else if (cheap->index < 0 && i == 0)
			rra(stack_a, 0);
		else if (cheap->target->index > 0 && i == 0)
			rb(stack_b, 0);
		else if (cheap->target->index < 0 && i == 0)
			rrb(stack_b, 0);
	}
}

void	push_back(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheap;
	int		i;

	i = 0;
	cheap = reduc(*stack_b);
	while (i != 1)
	{
		setup_index(*stack_a);
		setup_index(*stack_b);
		if (cheap->target->index > 0 && cheap->index > 0)
			rr(stack_a, stack_b);
		else if (cheap->target->index < 0 && cheap->index < 0)
			rrr(stack_a, stack_b);
		else if (cheap->index > 0)
			rb(stack_b, 0);
		else if (cheap->index < 0)
			rrb(stack_b, 0);
		else if (cheap->target->index > 0)
			ra(stack_a, 0);
		else if (cheap->target->index < 0)
			rra(stack_a, 0);
		if ((*stack_a)->data == cheap->target->data
			&& (*stack_b)->data == cheap->data && i++ == 0)
			pa(stack_a, stack_b);
	}
}

void	min(t_stack **stack_a)
{
	t_stack	*low;

	low = ft_min(*stack_a);
	while ((*stack_a) != low)
	{
		if (low->index < 0)
			rra(stack_a, 0);
		else
			ra(stack_a, 0);
	}
}
