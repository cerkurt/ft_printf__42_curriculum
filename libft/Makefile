# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ceren Kurt <cerkurt@student.codam.nl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 19:58:36 by Ceren Kurt        #+#    #+#              #
#    Updated: 2025/10/29 14:02:33 by Ceren Kurt       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                             MAKE FILE FOR LIBFT                              #
# **************************************************************************** #


# **************************************************************************** #
#                                BASH COMMANDS                                 #
# **************************************************************************** #

# make          builds libft.a with mandatory sources
# make bonus    rebuilds including bonus sources
# make clean    remove .o
# make fclean   remove .o and libft.a
# make re       full rebuild

# **************************************************************************** #



# **************************************************************************** #
#                 OUTPUT NAME - COMPILE FLAGS - CREATION COMMAND               #
# **************************************************************************** #

NAME        := libft.a
CC          := cc
CFLAGS      := -Wall -Wextra -Werror -I.
AR          := ar rcs
RM          := rm -f

# **************************************************************************** #



# **************************************************************************** #
#                               MANDATORY C SOURCES                            #
# **************************************************************************** #

MAND_SRCS   := \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

# **************************************************************************** #

# **************************************************************************** #
#                                 BONUS C SOURCES                              #
# **************************************************************************** #

BONUS_SRCS  := \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \

# **************************************************************************** #



# **************************************************************************** #
#                             COMPILATION AND OUTPUT                           #
# **************************************************************************** #
SRCS        := $(MAND_SRCS)
ifeq ($(WITH_BONUS),1)
SRCS        += $(BONUS_SRCS)
endif

OBJS        := $(SRCS:.c=.o)

# **************************************************************************** #



# **************************************************************************** #
#                       BASH COMMANDS AND TERMINAL MESSAGES                    #
# **************************************************************************** #

all: $(NAME)
$(NAME): $(OBJS)
	@echo "Building $(NAME)..."
	@$(AR) $(NAME) $(OBJS) \
		&& echo "Successfully created $(NAME)." \
		|| (echo "Failed to build $(NAME)."; exit 1)

bonus:
	@$(MAKE) WITH_BONUS=1
	@echo "Successfully created bonusses."

clean:
	@$(RM) $(MAND_SRCS:.c=.o) $(BONUS_SRCS:.c=.o)
	@echo "Objects are removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleanup complete."

re: fclean all

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus

# **************************************************************************** #