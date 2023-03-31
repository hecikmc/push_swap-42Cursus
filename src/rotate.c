/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:30:54 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:59 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ra(int *stack_a, int size, int print)
{
	int	i;
	int	aux;

	i = 0;
	aux = stack_a[0];
	while (i < size && stack_a[i] != -1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = aux;
	if (print != 0)
		ft_printf("ra\n");
}

void	ft_rra(int *stack_a, int size)
{
	int	i;
	int	aux;

	i = size - 1;
	aux = stack_a[i];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = aux;
	ft_printf("rra\n");
}

void	ft_rb(int *stack_b, int size)
{
	ft_ra(stack_b, size, 0);
	ft_printf("rb\n");
}
