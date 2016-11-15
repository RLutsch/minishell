GET = ALL
CFLAGS = -Wall -Wextra -Werror -g3
OBJ = 21sh.c ft_command.c ft_get_next_line.c ft_putstr.c ft_strchr.c \
		ft_strcmp.c	ft_strjoin.c ft_strlen.c ft_strsplit.c ft_env.c \
		 ft_strdup.c ft_operator.c ft_tablen.c ft_cd.c ft_echo.c\
	 	ft_putchar.c ft_bzero.c ft_strsub.c ft_strcpy.c ft_memalloc.c\
		 ft_strcat.c

all: 
	echo Compiling
	gcc -o minishell $(CFLAGS) $(OBJ)
	echo Compiling done!

clean:
	clear

fclean: clean
	echo Remoing 21sh
	rm minishell

re: fclean all

.PHONY: all clean fclean re
