/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:53:17 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:52:01 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_sortfinish(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i] != i)
			return (0);
		i++;
	}
	return (1);
}

void	ft_sorttwo(int *stack)
{
	if (stack[0] > stack[1])
		ft_sa(stack);
}

void	ft_sort3(int *stack_a, int size)
{
	if (ft_sortfinish(stack_a, size))
		exit(0);
	if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2])
		ft_ra(stack_a, size, 1);
	if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2])
		ft_sa(stack_a);
	if (stack_a[0] < stack_a[1] && stack_a[0] > stack_a[2])
		ft_rra(stack_a, size);
	if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2])
	{
		ft_rra(stack_a, size);
		ft_sa(stack_a);
	}
}

void	ft_sort4(int *stack_a, int *stack_b, int size, int min)
{
	int	pos;

	pos = 0;
	if (ft_sortfinish(stack_a, size))
		exit(0);
	while (pos < size)
	{
		if (stack_a[pos] == min)
			break ;
		pos++;
	}
	if (pos == 2)
	{
		ft_rra(stack_a, size);
		pos++;
	}
	if (pos == 3)
		ft_rra(stack_a, size);
	if (pos == 1)
		ft_sa(stack_a);
	ft_pb(stack_a, stack_b, size, 0);
	ft_sort3(stack_a, size - 1);
	while (stack_b[0] != -1)
		ft_pa(stack_a, stack_b, size);
}

void	ft_sort5(int *stack_a, int *stack_b, int size)
{
	int	pos;

	pos = 0;
	if (ft_sortfinish(stack_a, size))
		exit(0);
	while (pos < size)
	{
		if (stack_a[pos] == 0)
			break ;
		pos++;
	}
	while (pos >= 2 && pos <= 3)
	{
		ft_rra(stack_a, size);
		pos++;
	}
	if (pos == 4)
		ft_rra(stack_a, size);
	if (pos == 1)
		ft_sa(stack_a);
	ft_pb(stack_a, stack_b, size, 0);
	ft_sort4(stack_a, stack_b, size - 1, 1);
}
