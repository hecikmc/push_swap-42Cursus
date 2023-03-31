/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:19:22 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:51 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issort(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack[i + 1] - stack[i] != 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_sortsplit(int *stack_a, char **argm, int size)
{
	ft_checker(argm);
	if (size == 0)
		ft_msgerror();
	if (size == 1)
		exit (0);
	if (size == 2)
		ft_twoarg(stack_a, argm);
	if ((size) > 2 && (size) < 6)
		ft_littlearg(stack_a, argm, (size));
	if ((size) > 5)
		ft_bigarg(stack_a, argm, (size));
	free (stack_a);
	free (argm);
	exit (0);
}

void	ft_twoarg(int *stack, char **num)
{
	stack = ft_savemem(2);
	ft_fillstack(stack, 2, num);
	ft_repeat(stack, 2);
	ft_sorttwo(stack);
	free(stack);
	exit (0);
}

void	ft_littlearg(int *stack_a, char **num, int size)
{
	int	*stack_b;

	stack_a = ft_savemem(size);
	ft_fillstack(stack_a, size, num);
	ft_repeat(stack_a, size);
	stack_b = ft_savemem(size);
	ft_fillstack(stack_b, size, num);
	stack_a = ft_indexstack(stack_a, stack_b, size);
	ft_emptystack(stack_b, size);
	if (size == 3)
		ft_sort3(stack_a, size);
	if (size == 4)
		ft_sort4(stack_a, stack_b, size, 0);
	if (size == 5)
		ft_sort5(stack_a, stack_b, size);
	free(stack_a);
	free(stack_b);
	exit (0);
}

void	ft_bigarg(int *stack_a, char **num, int size)
{
	int	*stack_b;

	stack_a = ft_savemem(size);
	ft_fillstack(stack_a, size, num);
	ft_repeat(stack_a, size);
	stack_b = ft_savemem(size);
	ft_fillstack(stack_b, size, num);
	stack_a = ft_indexstack(stack_a, stack_b, size);
	ft_emptystack(stack_b, size);
	ft_radix(stack_a, stack_b, size);
	free(stack_a);
	free(stack_b);
	exit (0);
}
