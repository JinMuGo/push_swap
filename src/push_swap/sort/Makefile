# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 08:31:25 by jgo               #+#    #+#              #
#    Updated: 2023/06/06 15:30:32 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef TOPDIR
		TOPDIR = $(abspath ../../../)
endif

include $(TOPDIR)/make_config/src/Rules.mk
include $(TOPDIR)/make_config/com/ColorRules.mk

SRCS =	a_to_right_place.c \
		align_stack_a.c \
		b_to_a.c \
		less_than_five.c \
		rotate_stack_ab.c \
		sort_utils.c \
		sort.c

NAME = sort.a

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)
-include $(DEPS)

include $(TOPDIR)/make_config/src/SubLibsRecipes.mk
