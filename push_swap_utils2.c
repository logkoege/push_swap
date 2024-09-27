/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:24:20 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/28 01:13:25 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_positive(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

t_stack	*ft_min(t_stack *lst)
{
	t_stack	*lst_min;
	int		i;

	lst_min = lst;
	i = lst->data;
	while (lst)
	{
		if (lst->data < i)
		{
			i = lst->data;
			lst_min = lst;
		}
		lst = lst->next;
	}
	return (lst_min);
}

t_stack	*ft_max(t_stack *lst)
{
	t_stack	*lst_max;
	int		i;

	lst_max = lst;
	i = lst->data;
	while (lst)
	{
		if (lst->data > i)
		{
			i = lst->data;
			lst_max = lst;
		}
		lst = lst->next;
	}
	return (lst_max);
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
