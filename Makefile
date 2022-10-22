SRCS= ft_toupper.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c

CC = gcc
MAIN  = main.c
NAME = libft.a
OUT = ./a.out
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -fr
AR = ar -rc
OBJS = $(SRCS:.c=.o)

all: ${NAME}

${NAME}: ${OBJS}
	@${AR} ${NAME} ${OBJS}
	@echo "Succesfully archieved"

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

run: ${NAME}
	@${CC} ${CFLAGS} ${MAIN} ${NAME}
	@${OUT}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all
