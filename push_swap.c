/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 05:54:07 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/16 00:59:24 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	stack_a;
	t_node	stack_b;
	char	**args;

	(void)stack_b;
	(void)stack_a;
	if (argc < 2)
		return (0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	if (!(pars_arg(argv)))
	{
		ft_printf("Error");
		return (0);
	}
	(void)args;
	return (0);
}
