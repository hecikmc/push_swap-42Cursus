/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:30:16 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/31 16:51:37 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	if (num[i] == 0)
		ft_msgerror();
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			ft_msgerror();
		i++;
	}
}

void	ft_limits(char *num)
{
	long	n;

	n = ft_atoi(num);
	if (n > INT_MAX || n < INT_MIN)
		ft_msgerror();
}

void	ft_repeat(int *stack, int size)
{
	int	i;
	int	i2;

	i = 0;
	i2 = i + 1;
	while (i < size)
	{
		while (i2 < size)
		{
			if (stack[i] == stack[i2])
			{
				ft_msgerror();
				free(stack);
			}
			i2++;
		}
		i++;
		i2 = i + 1;
	}
}

void	ft_checker(char **num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		ft_isnum(num[i]);
		ft_limits(num[i]);
		i++;
	}
}

void	ft_msgerror(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}
