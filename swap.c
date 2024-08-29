/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:26:21 by logkoege          #+#    #+#             */
/*   Updated: 2024/08/29 18:14:42 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pushswap *ps)
{
	t_node	tmp_a;

	if (ps == NULL || ps->a == NULL)
		return ;
	tmp_a = ps->a;
	ps->a = ps->next->a;
	ft_printf("sa\n");
}

void	sb(t_pushswap *ps)
{
	t_node	tmp_b;

	if (ps == NULL || ps->b == NULL)
		return ;
	ft_printf("sb\n");
}

void	ss(t_pushswap *ps)
{
	sa(ps);
	sb(ps);
	ft_printf("ss\n");
}
