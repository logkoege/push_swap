/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:07:26 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/11 06:45:12 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pars_arg(char **argv)
{
	int	i;
	int	nb_zero;

	i = 1;
	nb_zero = 0;
	while (argv[i])
	{
		if (!(argv_nb(argv[i])))
			return (0);
		nb_zero = nb_zero + enlv_argifzero(argv[i]);
		i++;
	}
	if (nb_zero > 1)
		return (0);
	if (if_doubles(argv))
		return (0);
	return (1);
}

int	argv_nb(char *argv)
{
	int	i;

	i = i;
	if ((argv[i] == '-' || argv[i] == '+') && argv[i + 1] != '\0')
		i++;
	while (argv[i] && (argv[i] >= 0 && argv[i] <= 9))
		i++;
	if (argv[i] != '\0' && (argv[i] < 0 || argv[i] > 9))
		return (0);
	return (1);
}

int	enlv_argifzero(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

int	nbr_cmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	if_doubles(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (j != i && nbr_cmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
