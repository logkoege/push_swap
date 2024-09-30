/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:04:36 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 18:01:19 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_double(t_stack *lst, int n, char **tab)
{
	t_stack	*temp;

	temp = lst;
	while (temp)
	{
		if (temp->data == n)
			if_error(&lst, tab);
		temp = temp->next;
	}
}

int	ft_atoi(char *str, t_stack **lst, char **args)
{
	int		i;
	long	result;
	int		negative;

	i = 0;
	negative = 1;
	result = 0;
	if (str[i] == '-')
	{
		negative = -negative;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		if (!((str[i] >= '0' && str[i] <= '9')
				|| str[i] == ' ' || str[i] == '\0'))
			if_error(lst, args);
		i++;
	}
	if ((result * negative) > INT_MAX || (result * negative) < INT_MIN)
		if_error(lst, args);
	return (result * negative);
}

t_stack	*fill_stack_a(char **argv)
{
	char	**tab;
	int		i;
	t_stack	*lst;
	int		j;

	i = 1;
	lst = NULL;
	j = 0;
	while (argv[i])
	{
		tab = ft_split(argv[i], ' ');
		j = 0;
		while (tab[j])
		{
			if_double(lst, ft_atoi(tab[j], &lst, tab), tab);
			ft_lstadd_back(&lst, new_stack(ft_atoi(tab[j], &lst, tab)));
			j++;
		}
		ft_free(tab);
		i++;
	}
	return (lst);
}

void	if_error(t_stack **lst, char **tab)
{
	t_stack	*temp;

	ft_free(tab);
	if (lst)
	{
		while ((*lst))
		{
			temp = (*lst)->next;
			free(*lst);
			(*lst) = temp;
		}
	}
	write(1, "Error\n", 6);
	exit(1);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	else
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
}
