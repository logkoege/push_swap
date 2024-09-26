/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:04:49 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/24 23:45:39 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min(t_stack **stack_a)
{
	t_stack	*low;

	low = loweststack(*stack_a);
	while ((*stack_a) != low)
	{
		if (low->index < 0)
			reverse_rotate_a(stack_a, 0);
		else
			rotate_a(stack_a, 0);
	}
}
