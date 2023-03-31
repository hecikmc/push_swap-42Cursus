/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:26:00 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:53 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_moveup(int	*stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = -1;
}

static void	ft_movedown(int *stack, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = -1;
}

void	ft_pb(int *stack_a, int *stack_b, int size, int pb)
{
	if (stack_b[0] != -1)
		ft_movedown(stack_b, size);
	stack_b[0] = stack_a[0];
	stack_a[0] = -1;
	ft_moveup(stack_a, size);
	if (pb == 0)
		ft_printf("pb\n");
}

void	ft_pa(int *stack_a, int *stack_b, int size)
{
	ft_pb(stack_b, stack_a, size, 1);
	ft_printf("pa\n");
}
