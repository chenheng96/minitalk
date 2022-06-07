SERVER := server
CLIENT := client
SERVER_BONUS := server_bonus
CLIENT_BONUS := client_bonus

LIBFT := libft/libft.a

CC := gcc
CFLAGS := -Wall -Werror -Wextra
RM := rm -f

all: ${SERVER} ${CLIENT}

bonus: ${SERVER_BONUS} ${CLIENT_BONUS}

${SERVER}: ${LIBFT}
	${CC} ${CFLAGS} ${SERVER}.c ${LIBFT} -o ${SERVER}

${CLIENT}: ${LIBFT}
	${CC} ${CFLAGS} ${CLIENT}.c ${LIBFT} -o ${CLIENT}

${SERVER_BONUS}: ${LIBFT}
	${CC} ${CFLAGS} ${SERVER_BONUS}.c ${LIBFT} -o ${SERVER_BONUS}

${CLIENT_BONUS}: ${LIBFT}
	${CC} ${CFLAGS} ${CLIENT_BONUS}.c ${LIBFT} -o ${CLIENT_BONUS}

${LIBFT}:
	make -C libft

clean:
	${RM} *.o

fclean:	clean
	${RM} ${SERVER} ${CLIENT} ${SERVER_BONUS} ${CLIENT_BONUS}

re:	fclean all

.PHONY: all bonus clean fclean re
