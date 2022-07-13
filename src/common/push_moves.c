/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 08:22:58 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/12 08:23:03 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_pb(t_stacks *stack, int print)
{
	int	i;

	if (stack->size_a)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		if (print == OPT)
			ft_printf("pb\n");
	}
	else
	{
		if (print == STACK)
			ft_printf("Nothing done. Stack A is empty.\n");
		return ;
	}
}

void	ft_pa(t_stacks *stack, int print)
{
	int	i;

	if (stack->size_b)
	{
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1;
		stack->size_b--;
		while (++i < stack->size_b)
			stack->b[i] = stack->b[i + 1];
		if (print == OPT)
			ft_printf("pa\n");
	}
	else
	{
		if (print == STACK)
			ft_printf("Nothing done. Stack B is empty.\n");
		return ;
	}
}
