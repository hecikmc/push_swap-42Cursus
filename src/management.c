/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   management.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:10:38 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:47 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_emptystack(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack[i] = -1;
		i++;
	}
}

void	ft_fillstack(int *stack, int size, char **num)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack[i] = ft_atoi(num[i]);
		i++;
	}
}

void	ft_sortstack(int *sort, int size)
{
	int	i;
	int	i2;
	int	aux;

	i = 0;
	while (i < size)
	{
		i2 = i + 1;
		while (i2 < size)
		{
			if (sort[i] > sort[i2])
			{
				aux = sort[i];
				sort[i] = sort[i2];
				sort[i2] = aux;
			}
			i2++;
		}
		i++;
	}
}

int	*ft_indexstack(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	i2;
	int	*index;

	i = 0;
	i2 = 0;
	ft_sortstack(stack_b, size);
	index = ft_savemem(size);
	while (i < size)
	{
		while (i2 < size)
		{
			if (stack_a[i] == stack_b[i2])
			{
				index[i] = i2;
				break ;
			}
			i2++;
		}
		i2 = 0;
		i++;
	}
	free(stack_a);
	return (index);
}

int	ft_sizesplit(char **nums)
{
	int	size;

	size = 0;
	ft_checker(nums);
	while (nums[size] != 0)
		size++;
	return (size);
}
