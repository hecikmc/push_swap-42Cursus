/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:33:16 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:56 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_nbits(int num)
{
	int	nbits;

	nbits = 0;
	while (num > 0)
	{
		nbits++;
		num = num / 2;
	}
	return (nbits);
}

int	ft_checksize(int *stack, int size)
{
	int	i;

	i = 0;
	while (stack[i] != -1 && i < size)
		i++;
	return (i);
}

void	ft_radix(int *stack_a, int *stack_b, int size)
{
	int	nbits;
	int	i;
	int	currentsize;

	nbits = ft_nbits(size);
	i = 0;
	while (i < nbits)
	{
		currentsize = ft_checksize(stack_a, size);
		if (ft_sortfinish(stack_a, size) == 1)
			break ;
		if (ft_issort(stack_a, currentsize) == 0)
			ft_movetob(stack_a, stack_b, i, size);
		ft_movetoa(stack_a, stack_b, size, i);
		i++;
	}
}

void	ft_movetob(int *stack_a, int *stack_b, int ibits, int size)
{
	int	i;
	int	currentsize;

	i = 0;
	currentsize = ft_checksize(stack_a, size);
	while (i < currentsize)
	{
		if (ft_issort(stack_a, ft_checksize(stack_a, size)) == 1)
			break ;
		if (((stack_a[0] >> ibits) & 1) == 0)
			ft_pb(stack_a, stack_b, currentsize, 0);
		else
			ft_ra(stack_a, currentsize, 1);
		i++;
	}
}

void	ft_movetoa(int *stack_a, int *stack_b, int size, int ibits)
{
	int	i;
	int	currentsize;
	int	max_bits;

	i = 0;
	currentsize = ft_checksize(stack_b, size);
	max_bits = ft_nbits(size);
	while (i < currentsize)
	{
		if (ibits < (max_bits - 1))
		{
			if (((stack_b[0] >> (ibits + 1)) & 1) == 0)
				ft_rb(stack_b, currentsize);
			else
				ft_pa(stack_a, stack_b, size);
		}	
		else
			ft_pa(stack_a, stack_b, size);
		i++;
	}
}
