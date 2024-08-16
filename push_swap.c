/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 05:54:07 by logkoege          #+#    #+#             */
/*   Updated: 2024/08/16 12:52:33 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_log	*a;
	t_log	*b;
	char	**args;

	if (argc < 2)
		return (0);
	if (argc == 2)
		args = split(argv[1], ' ');
	else
		args = argv + 1;
}
