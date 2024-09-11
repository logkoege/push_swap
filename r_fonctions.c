/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_fonctions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:37:52 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/07 20:55:18 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_pushswap *ps)
{
	t_node	*tmp;
	t_node	*last;

	if (ps->a == NULL || ps == NULL)
		return ;
	tmp = ps->a;
	last = ft_lstlast(ps->a);
	last->next = tmp;
	ps->a = tmp->next;
	tmp->next = NULL;
	ft_printf("ra/n");
}

void	rb(t_pushswap *ps)
{
	t_node	*tmp;
	t_node	*last;

	if (ps->b == NULL || ps == NULL)
		return ;
	tmp = ps->b;
	last = ft_lstlast(ps->b);
	last->next = tmp;
	ps->b = tmp->next;
	tmp->next = NULL;
	ft_printf("rb/n");
}

void	rr(t_pushswap *ps)
{
	ra(ps);
	rb(ps);
	ft_printf("rr/n");
}

void	rra(t_pushswap *ps)
{
	t_node	*tmp;
	t_node	*last;

	if (ps->a == NULL || ps == NULL)
		return ;
	last = lst_last(ps->a);
	tmp = before_last(ps->a);
	last->next = ps->a;
	ps->a = last;
	tmp->next = NULL;
	ft_printf("rra/n");
}

void	rrb(t_pushswap *ps)
{
	t_node	*tmp;
	t_node	*last;

	if (ps->b == NULL || ps == NULL)
		return ;
	last = lst_last(ps->b);
	tmp = before_last(ps->b);
	last->next = ps->b;
	ps->b = last;
	tmp->next = NULL;
	ft_printf("rrb/n");
}
