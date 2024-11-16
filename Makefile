NAME = libft.a
CC = cc
FLAGS = -Werror -Wextra -Wall 

SRC = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c ft_itoa.c \
ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcpy.c   ft_putchar_fd.c  ft_putstr_fd.c  ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c \
ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_toupper.c 
 
OBJC = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJC)
	ar rcs $(NAME) $(OBJC)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJC}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
