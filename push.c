/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:25:41 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/16 04:01:28 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_pushswap *ps)
{
	t_node	*tmp;

	if (ps->b == NULL || ps == NULL)
		return ;
	tmp = ps->b;
	ps->b = ps->b->next;
	tmp->next = ps->a;
	ps->a = tmp;
	ft_printf("pa\n");
}

void	pb(t_pushswap *ps)
{
	t_node	*tmp;

	if (ps->a == NULL || ps == NULL)
		return ;
	tmp = ps->a;
	ps->a = ps->a->next;
	tmp->next = ps->b;
	ps->b = tmp;
	ft_printf("pb\n");
}

t_node	*before_last(t_node *lst)
{
	t_node	*tmp;

	while (lst)
	{
		tmp = lst;
		if (lst->next != NULL)
		{
			lst = lst->next;
			if (lst->next == NULL)
			{
				return (tmp);
			}
		}
	}
	return (tmp);
}

void	rrr(t_pushswap *ps)
{
	rra(ps);
	rrb(ps);
	printf("rrr\n");
}
