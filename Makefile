NAME = libndav.a

CC = cc
FLAGS = -Wall -Werror -Wextra -I include

FILES = lists/ft_lstadd_front \
lists/ft_lstadd_back \
lists/ft_lstclear \
lists/ft_lstlast \
lists/ft_lstmap \
lists/ft_lstdelone \
lists/ft_lstnew \
lists/ft_lstiter \
lists/ft_lstsize \
ft_itoa \
get_next_line \
strings/ft_strclen \
strings/ft_strjoin \
strings/ft_striteri \
strings/ft_strcdup \
strings/ft_strdup \
strings/ft_strlen \
strings/ft_strlcat \
strings/ft_split \
strings/ft_strcpy \
strings/ft_strtrim \
strings/ft_strcat \
strings/ft_strmapi \
strings/ft_strlcpy \
strings/ft_strnstr \
strings/ft_strrchr \
strings/ft_strncmp \
strings/ft_strchr \
strings/ft_strccat \
strings/ft_substr \
ft_atoi \
ascii/ft_isalnum \
ascii/ft_isascii \
ascii/ft_isprint \
ascii/ft_tolower \
ascii/ft_isdigit \
ascii/ft_toupper \
ascii/ft_isalpha \
printf/ft_putnbr_fd \
printf/ft_putptr_fd \
printf/ft_putendl_fd \
printf/ft_printf \
printf/ft_putulbase_fd \
printf/ft_putchar_fd \
printf/ft_putlbase_fd \
printf/ft_putstr_fd \
memory/ft_memchr \
memory/ft_memcmp \
memory/ft_memcpy \
memory/ft_memset \
memory/ft_bzero \
memory/ft_memmove \
memory/ft_calloc \

SRC_DIR = src
OBJ_DIR = obj

SRC = $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(FILES)))
OBJ = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(FILES)))

all: $(NAME)
 
$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "\033[32m✔ Libndav created.\033[37m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re