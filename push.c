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
	t_node	first_b;

	if (ps->b == NULL || ps == NULL)
		return;
	first_b = ps->b;
	ps->b = ps->b->next;
	first_b->next = ps->a;
	ps->a = first_b;
	ft_printf("pa\n");
}

void	pb(t_pushswap *ps)
{
	t_node	first_a;

	if (ps->a == NULL || ps == NULL)
		return;
	first_a = ps->a;
	ps->b = ps->a->next;
	first_a->next = ps->b;
	ps->b = first_a;
	ft_printf("pb\n");
}
