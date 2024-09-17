/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:26:21 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/17 17:38:02 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pushswap *ps)
{
	t_node	*tmp;

	if (ps == NULL || ps->a == NULL)
		return ;
	tmp = ps->a;
	ps->a = ps->a->next;
	ps->a->next = tmp;
	ft_printf("sa\n");
}

void	sb(t_pushswap *ps)
{
	t_node	*tmp;

	if (ps == NULL || ps->b == NULL)
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

long	ft_atol(char *str)
{
	long	i;
	long	nombre;
	long	signe;

	signe = 1;
	nombre = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
	{
		nombre = nombre * 10 + (str[i] - '0');
		i++;
	}
	if (nombre < -2147483648 || nombre > 2147483647)
		return (21474836480);
	return (nombre * signe);
}
