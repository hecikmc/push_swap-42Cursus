/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:55:55 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:43 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*ft_savemem(int size)
{
	int	*stack;

	stack = malloc(sizeof(int) * size);
	if (!stack)
		exit(1);
	return (stack);
}

int	main(int narg, char **argm)
{
	int		*stack_a;
	char	**split;
	int		sizesplit;

	if (narg > 1)
	{
		argm++;
		if (narg - 1 == 1)
		{
			split = ft_split(argm[0], ' ');
			sizesplit = ft_sizesplit(split);
			ft_sortsplit(stack_a, split, sizesplit);
		}
		ft_checker(argm);
		if (narg - 1 == 2)
			ft_twoarg(stack_a, argm);
		if ((narg - 1) > 2 && (narg - 1) < 6)
			ft_littlearg(stack_a, argm, (narg - 1));
		if ((narg - 1) > 5)
			ft_bigarg(stack_a, argm, (narg - 1));
	}
	return (0);
}
