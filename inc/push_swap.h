/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:54:06 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/08 13:28:03 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stacks;

# define ASCENDING 0
# define DESCENDING 1
# define OPT 0
# define STACK 1

void	ft_push_swap(char **argv);
int		ft_ps_strlen(char **argv);
void	ft_error(int *stack);
int		ft_ps_atoi(char *str, int *stack);
void	ft_check_repeat(int *stack, int size);
//Operations
void	ft_sa(t_stacks *stack, int print);
void	ft_sb(t_stacks *stack, int print);
void	ft_ss(t_stacks *stack, int print);
void	ft_ra(t_stacks *stack, int print);
void	ft_rb(t_stacks *stack, int print);
void	ft_rr(t_stacks *stack, int print);
void	ft_rra(t_stacks *stack, int print);
void	ft_rrb(t_stacks *stack, int print);
void	ft_rrr(t_stacks *stack, int print);
void	ft_pb(t_stacks *stack, int print);
void	ft_pa(t_stacks *stack, int print);
//Sortage
int		ft_sort(t_stacks *stack, int size);
int		ft_check_sorted(int *pile, int size, int order);
void	ft_sort_three_a(t_stacks *s);
void	ft_sort_tmp(int *tmp_stack, int size);
//Quicksort
int		ft_quicksort_a(t_stacks *stack, int len, int cnt);
int		ft_quicksort_b(t_stacks *stack, int len, int cnt);
void	ft_quicksort_3(t_stacks *stack, int len);
int		ft_sort_small_b(t_stacks *stack, int len);
int		ft_push(t_stacks *stack, int len, int operation);
int		ft_get_mediane(int *pivot, int *stack, int size);
//Bonus
int		*ft_check_errors(char **argv);
void	ft_checker_instructions(t_stacks *stack);
void	ft_checker_start(t_stacks *stack);
char	*get_next_line(int fd);
void	ft_checker(t_stacks *stack);
int		ft_check_opt(char *opt, t_stacks *stack);
void	ft_opt(t_stacks *stack, char *opt);
void	ft_print_stacks(t_stacks *stack);

#endif
