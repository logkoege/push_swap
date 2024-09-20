/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:00 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/20 21:21:19 by logkoege         ###   ########.fr       */
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
