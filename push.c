/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:25:41 by logkoege          #+#    #+#             */
/*   Updated: 2024/08/16 15:27:44 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	pa(t_pushswap *ps)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_pushswap *ps)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
