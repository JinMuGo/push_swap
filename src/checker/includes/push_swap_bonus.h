/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:48:20 by jgo               #+#    #+#             */
/*   Updated: 2023/05/14 10:47:31 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libft.h"
# include "get_next_line_bonus.h"

typedef struct s_pushswap	t_ps;
typedef struct s_stack		t_st;
typedef struct s_stack_node	t_st_node;

struct s_stack_node
{
	int						data;
	unsigned int			idx;
	struct s_stack_node		*prev;
	struct s_stack_node		*next;
};

struct s_stack
{
	unsigned int			size;
	struct s_stack_node		*node[2];
};

struct s_pushswap
{
	unsigned int		size;
	struct s_stack		a;
	struct s_stack		b;
};

enum e_rear
{
	FRONT = 0,
	REAR = 1
};

// input_bonus.c
void		ps_parse(t_ps *ps, int argc, char **argv);
t_ps		*ps_init(t_ps *ps);

// command_bonus.c
int			command(t_ps *ps, char *cmd);

// deque_bonus.c
t_st_node	*deque(t_st *st, enum e_rear rear);

// enque_bonus.c
void		enque(t_st *st, enum e_rear rear, t_st_node *new);

// utils_bonus.c
bool		is_sorted(t_st *st);
int			atoi_for_ps(const char *str);
void		print_error(void);
t_st_node	*deque_new(int content);
bool		check_dup(t_st *st);

#endif