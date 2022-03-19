/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabasset <mabasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:01:24 by mabasset          #+#    #+#             */
/*   Updated: 2022/03/18 19:08:57 by mabasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

typedef struct s_best
{
	int	count;
	int	na;
	int	nb;
	int	dir;
}				t_best;

typedef	struct s_struct
{
	int		*ar_a;
	int		*ar_b;
	int		*ar_best
	int		size_a;
	int		size_b;
	int		size_best;
	t_best	*moves;
}				t_struct;

void	ft_swap_a(int *ar);
void	ft_swap_b(int *ar);
void	ft_swap_s(int *ara, int *arb);
void	ft_push_a(t_struct *data);
void	ft_push_b(t_struct *data);
void	ft_rotate_a(t_struct *data);
void	ft_rotate_b(t_struct *data);
void	ft_rotate_r(t_struct *data);
void	ft_rev_rotate_a(t_struct *data);
void	ft_rev_rotate_b(t_struct *data);
void	ft_rev_rotate_r(t_struct *data);
void	ft_error(void);
int		ft_order(int *ar, int size);
int		ft_check(char **matrix, int size);
int		*ft_initializer(char **matrix, int size);
int		ft_checkfordoubles(int *ar, int size);
int		*ft_ardup(int *ar, int size);
void	ft_sort_ar(int *ar, int size);
void	ft_printarray(int *ar, int size);
int		*ft_clone_add(int *r2, int len, int nb);
void	ft_between(int **comb, int num);
void	ft_findcomb(t_struct *data);
void	ft_swap(int	*a, int *b);
int		ft_min(int *array, int size);
int		ft_max(int *array, int size);
int		ft_findind(int nb, int *array);
void	ft_checkmalloc(void *ptr);
int		ft_findindmin(int *array, int size);
int		ft_findindmax(int *array, int size);

#endif