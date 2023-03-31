/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:26:27 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/30 13:25:13 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

void	ft_twoarg(int *stack, char **num);
void	ft_littlearg(int *stack, char **num, int size);
void	ft_bigarg(int *stack_a, char **num, int size);
void	ft_checker(char **num);
void	ft_isnum(char *num);
void	ft_limits(char *num);
int		*ft_savemem(int size);
int		*ft_indexstack(int *stack_a, int *stack_b, int size);
void	ft_emptystack(int *stack, int size);
void	ft_fillstack(int *stack, int size, char **num);
int		ft_sizesplit(char **nums);
void	ft_sortsplit(int *stack_a, char **argm, int size);
void	ft_repeat(int *stack, int size);
void	ft_msgerror(void);
int		ft_issort(int *stack, int size);
int		ft_sortfinish(int *stack, int size);
void	ft_sorttwo(int *stack);
void	ft_sort3(int *stack_a, int size);
void	ft_sort4(int *stack_a, int *stack_b, int size, int min);
void	ft_sort5(int *stack_a, int *stack_b, int size);
void	ft_radix(int *stack_a, int *stack_b, int size);
void	ft_pa(int *stack_a, int *stack_b, int size);
void	ft_pb(int *stack_a, int *stack_b, int size, int pb);
void	ft_sa(int *stack_a);
void	ft_ra(int *stack_a, int size, int print);
void	ft_rra(int *stack_a, int size);
void	ft_rb(int *stack_b, int size);

int		ft_nbits(int num);
void	ft_movetoa(int *stack_a, int *stack_b, int size, int ibits);
void	ft_movetob(int *stack_a, int *stack_b, int ibits, int size);

#endif
