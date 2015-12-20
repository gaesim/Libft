NAME = libft.a

SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstend.c \
	  ft_lstinser.c \
	  ft_lstlen.c \
	  ft_atoi_base.c \
	  ft_lstshift.c \
	  ft_boardset.c \
	  ft_boardprint.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "\0033[4;32mAll green !"

%.o: %.c
	@gcc -c $^ $(FLAGS)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $(NAME)
	@echo "\0033[1;34m %.o \0033[0;32m[Create]"
	@echo "\0033[1;34m Libft.a \0033[0;32m[Create]"

clean:
	@rm -f $(OBJ)
	@echo "\0033[1;34m %.o \0033[0;31m[Delete]"

fclean: clean
	@rm -f $(NAME)
	@echo "\0033[1;34m libft.a \0033[0;31m[Delete]"

re: fclean all
