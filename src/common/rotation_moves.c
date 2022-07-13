/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 08:24:34 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/12 08:24:41 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_ra(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in Stack A.\n");
		return ;
	}
	i = 0;
	tmp = stack->a[i];
	i++;
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	if (print == OPT)
		ft_printf("ra\n");
}

void	ft_rb(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_b == 0 || stack->size_b == 1)
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in Stack B.\n");
		return ;
	}
	i = 0;
	tmp = stack->b[i];
	i++;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1] = tmp;
	if (print == OPT)
		ft_printf("rb\n");
}

void	ft_rr(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in stacks.\n");
		return ;
	}
	i = 0;
	tmp = stack->a[i];
	while (++i < stack->size_a)
		stack->a[i - 1] = stack->a[i];
	stack->a[i - 1] = tmp;
	i = 0;
	tmp = stack->b[i];
	while (++i < stack->size_b)
		stack->b[i - 1] = stack->b[i];
	stack->b[i - 1] = tmp;
	if (print == OPT)
		ft_printf("rr\n");
}
