/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:04:36 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/19 18:59:43 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_double(t_stack *lst, int n, char **args)
{
	while (lst)
	{
		if (lst->data == n)
			ft_error(&lst, args);
		lst = lst->next;
	}
}

void	ft_free(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	else
	{
		while (args[i])
		{
			free(args[i]);
			i++;
		}
		free(args);
	}
}

void	if_error(t_stack **lst, char **args)
{
	t_stack	*lst_temp;

	ft_free(args);
	if (lst)
	{
		while ((*lst))
		{
			lst_temp = (*lst)->next;
			free(*lst);
			(*lst) = lst_temp;
		}
	}
	write(1, "Error\n", 6);
	exit(1);
}

long	ft_atol(char *str, t_stack **lst, char **args)
{
	long	i;
	long	nombre;
	long	signe;

	signe = 1;
	nombre = 0;
	i = 0;
	if (str[i] == '-')
	{
		signe = -signe;
		i++;
	}
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
	{
		nombre = nombre * 10 + (str[i] - '0');
		i++;
	}
	if (!((s1[i] >= '0' && s1[i] <= '9') || s1[i] == ' ' || s1[i] == '\0'))
		if_error(lst, args);
	if (nombre < -2147483648 || nombre > 2147483647)
		if_error(lst, args);
	return (nombre * signe);
}

t_stack	*fill_stack_a(char **argv)
{
	t_stack	*lst;
	int		i;
	int		j;
	char	**args;

	lst = NULL;
	i = 1;
	j = 0;
	while (argv[i])
	{
		args = ft_split(argv[i], ' ');
		j = 0;
		while (args[j])
		{
			if_double(lst, ft_atol(args[j], &lst, args), args);
			ft_lstadd_back(&lst, new_stack(ft_atoi(args[j], &lst, args)));
			j++;
		}
		ft_free(args);
		i++;
	}
	return (lst);
}
