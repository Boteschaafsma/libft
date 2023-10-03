SRCS = atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strlcpy.c
MAIN =main.c
OBJS =${SRCS:.c=.o}

CC =cc
CFLAGS=-Wall -Wextra -Werror

ifdef DEBUG
	CFLAGS +=-g
endif

ifdef FSAN
	CFLAGS +=-fsanitize=address,undefined
endif

INCLUDES = ./includes

NAME = libft.a

REMOVE = rm -f

all: ${NAME} 

%.o: %.c
	${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o $@

${NAME}: ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

test: all ${MAIN}
	./a.out

${MAIN}:
	${CC} ${CFLAGS} main.c -lbsd -L. -lft

debug:
	@$(MAKE) DEBUG=1 test
.PHONY: debug

rebug: fclean
	@$(MAKE) debug
.PHONY: rebug

fsan:
	@$(MAKE) DEBUG=1 FSAN=1 test
.PHONY: fsan

resan: fclean
	@$(MAKE) fsan
.PHONY: resan

clean:
	${REMOVE} ${OBJS}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re
