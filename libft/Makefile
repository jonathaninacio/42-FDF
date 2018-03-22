# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 15:04:23 by joinacio          #+#    #+#              #
#    Updated: 2017/02/08 20:50:40 by joinacio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -g

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_cnt_char.c \
	   ft_cnt_word.c \
	   ft_decade.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_ischarc.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_isspace.c \
	   ft_itoa.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memdel.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_putstr.c \
	   ft_putstr_fd.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strequ.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strnequ.c \
	   ft_strnew.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strtrim.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstlen.c \
	   ft_sqrt.c \
	   ft_swap.c \
	   ft_sort_params.c \
	   ft_div_mod.c \
	   ft_cowabunga.c \
	   ft_snr.c \
	   ft_waste_time.c \
	   ft_puttab.c \
		 get_next_line.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	@echo "\033[0;33m"
	gcc $(FLAGS) -c $(SRCS)
	@sleep 0.1
	@echo "\033[0;34m"
	ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\033[0;32m" \
	"\n\n" \
	"              ..\n" \
	"             .z#8\"'\n" \
	"       u.     #88E\n" \
	" ...ue888b   '888E   u\n" \
	" 888R Y888r   888E u#8NL\n" \
	" 888R I888>   888E''88*'\n" \
	" 888R I888>   888E .dN.\n" \
	" 888R I888>   888E~8888\n" \
	"u8888cJ888    888E '888&\n" \
	" \"*888*P\"     888E  9888.\n" \
	"   'Y\"      '\"888*\" 4888\"\n" \
	"              \"\"    \"\"\n" \
	"\n" \
	"   ca compile maggle!\n" \
	"\033[00m"

clean :
	@echo "\033[0;31m"
	rm -f $(OBJS)
	@echo "\033[00m"

fclean : clean
	@echo "\033[0;31m"
	rm -f $(NAME) a.out libft.h.gch
	@echo "\033[00m"

re : fclean all

.PHONY: all clean fclean re
