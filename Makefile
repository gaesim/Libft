FCT = ft_memset \
	  ft_bzero \
	  ft_memcpy \
	  ft_memccpy \
	  ft_memmove \
	  ft_memchr \
	  ft_memcmp \
	  ft_strlen \
	  ft_strdup \
	  ft_strcpy \
	  ft_strncpy \
	  ft_strcat \
	  ft_strncat \
	  ft_strlcat \
	  ft_strchr \
	  ft_strrchr \
	  ft_strstr \
	  ft_strnstr \
	  ft_strcmp \
	  ft_strncmp \
	  ft_atoi \
	  ft_isalpha \
	  ft_isdigit \
	  ft_isalnum \
	  ft_isascii \
	  ft_isprint \
	  ft_toupper \
	  ft_tolower \
	  ft_memalloc \
	  ft_memdel \
	  ft_strnew \
	  ft_strdel \
	  ft_strclr \
	  ft_striter \
	  ft_striteri \
	  ft_strmap \
	  ft_strmapi \
	  ft_strequ \
	  ft_strnequ \
	  ft_strsub \
	  ft_strjoin \
	  ft_strtrim \
	  ft_strsplit \
	  ft_itoa \
	  ft_putchar \
	  ft_putstr \
	  ft_putendl \
	  ft_putnbr \
	  ft_putchar_fd \
	  ft_putstr_fd \
	  ft_putendl_fd \
	  ft_putnbr_fd \
	  ft_lstnew \
	  ft_lstdelone \
	  ft_lstdel \
	  ft_lstadd \
	  ft_lstiter \
	  ft_lstmap \
	  ft_lstend \
	  ft_lstinser \
	  ft_lstlen \
	  ft_atoi_base \
	  ft_lstshift \
	  ft_boardset \
	  ft_boardprint

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OBJDIR = ./obj/
SRCDIR = ./src/
INCDIR = ./includes/
SRC = $(FCT:%=$(SRCDIR)%.c)
OBJ = $(FCT:%=$(OBJDIR)%.o)
INC = $(INCDIR:%=-I %)

all: $(NAME)
	@echo "		\0033[1;30m[All OK]\0033[1;37m"

$(OBJDIR)%.o: $(SRCDIR)%.c
	@gcc -c $^ $(FLAGS) $(INC) -o $@

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $(NAME)
	@echo "\0033[1;34m %.o 		\0033[0;32m[Create]"
	@echo "\0033[1;34m Libft.a 	\0033[0;32m[Create]\0033[1;37m"

clean:
	@rm -f $(OBJ)
	@echo "\0033[1;34m %.o 		\0033[0;31m[Delete]\0033[1;37m"

fclean: clean
	@rm -f $(NAME)
	@echo "\0033[1;34m libft.a 	\0033[0;31m[Delete]\0033[1;37m"

re: fclean all
