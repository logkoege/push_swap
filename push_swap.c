/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:47:18 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/28 22:21:19 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if ((argc < 2) || (argc >= 2 && ft_strlen(argv[1]) == 0))
		return (1);
	stack_b = NULL;
	stack_a = fill_stack_a(argv);
	if (sorted(stack_a))
	{
		if (stack_size(stack_a) == 2)
			sa(stack_a, 0);
		else if (stack_size(stack_a) == 3)
			sort3(&stack_a);
		else
			sort(&stack_a, &stack_b);
	}
	free_lst(&stack_a);
	free_lst(&stack_b);
	return (0);
}
