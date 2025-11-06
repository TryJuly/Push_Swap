#################################################################################################################
#                                           VARIABLES SET                                                       #
#################################################################################################################
NAME = push_swap

CC = gcc
FLAGS = -Wall -Wextra -Werror -g

SRCS = ./main.c ./mv_stack_v1.c ./mv_stack_v2.c ./about_stack.c ./three_elemts.c \
	./fill_stack.c ./fill_stack_v2.c ./set_index.c ./five_elements.c ./free_stack.c\
	./full_elements.c ./tools.c ./tools_v2.c ./push_swap.c

INCLUDES = push_swap.h

LIBFT = ./libft/
LIBFT_A= ./libft.a
OBJS = ${SRCS:.c=.o}
#################################################################################################################
#                                           RULES COMPILATION                                                   #
#################################################################################################################
all: ${LIBFT_A} ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} ${LIBFT_A} -I ${INCLUDES} -o ${NAME}

%.o: %.c ${INCLUDES}
	${CC} ${FLAGS} -c $< -o $@

${LIBFT_A}:
	@make -C ${LIBFT}
	@cd ${LIBFT} && mv ${LIBFT_A} ..
#################################################################################################################
#                                           RULES CLEAN                                                         #
#################################################################################################################
clean:
	rm -rf ${OBJS}
	@make clean -C ${LIBFT}

fclean: clean
	rm -rf ${NAME}
	@make fclean -C ${LIBFT}
	@rm -rf ${LIBFT_A}

re: fclean all
#################################################################################################################
#                                           NO RELINK                                                           #
#################################################################################################################

.PHONY: all clean fclean re libft