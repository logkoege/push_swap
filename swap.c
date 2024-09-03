/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:26:21 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/04 00:30:18 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pushswap *ps)
{
	t_node	*tmp;

	if (ps->a == NULL || ps == NULL)
		return ;
	tmp = ps->a;
	ps->a = ps->a->next;
	ps->a->next = tmp;
	ft_printf("sa\n");
}

void	sb(t_pushswap *ps)
{
	t_node	*tmp;

	if (ps->b == NULL || ps == NULL)
		return ;
	tmp = ps->b;
	ps->b = ps->b->next;
	ps->b->next = tmp;
	ft_printf("sb\n");
}

void	ss(t_pushswap *ps)
{
	sa(ps);
	sb(ps);
	ft_printf("ss\n");
}
