/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 08:24:56 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/12 08:24:58 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_sa(t_stacks *stack, int print)
{
	int	tmp;

	if (stack->size_a == 0 || stack->size_a == 1)
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in Stack A.\n");
		return ;
	}
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (print == OPT)
		ft_printf("sa\n");
}

void	ft_sb(t_stacks *stack, int print)
{
	int	tmp;

	if (stack->size_b == 0 || stack->size_b == 1)
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in Stack B.\n");
		return ;
	}
	tmp = 0;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (print == OPT)
		ft_printf("sb\n");
}

void	ft_ss(t_stacks *stack, int print)
{
	int	tmp;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in stacks.\n");
		return ;
	}
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (print == OPT)
		ft_printf("ss\n");
}
