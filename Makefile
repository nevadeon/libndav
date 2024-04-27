NAME = libndav.a

CC = cc
FLAGS = -Wall -Werror -Wextra -I headers

SRCS = lists/ft_lstadd_front.c\
lists/ft_lstadd_back.c\
lists/ft_lstclear.c\
lists/ft_lstlast.c\
lists/ft_lstmap.c\
lists/ft_lstdelone.c\
lists/ft_lstnew.c\
lists/ft_lstiter.c\
lists/ft_lstsize.c\
ft_itoa.c\
get_next_line.c\
strings/ft_strclen.c\
strings/ft_strjoin.c\
strings/ft_striteri.c\
strings/ft_strcdup.c\
strings/ft_strdup.c\
strings/ft_strlen.c\
strings/ft_strlcat.c\
strings/ft_split.c\
strings/ft_strcpy.c\
strings/ft_strtrim.c\
strings/ft_strcat.c\
strings/ft_strmapi.c\
strings/ft_strlcpy.c\
strings/ft_strnstr.c\
strings/ft_strrchr.c\
strings/ft_strncmp.c\
strings/ft_strchr.c\
strings/ft_strccat.c\
strings/ft_substr.c\
ft_atoi.c\
ascii/ft_isalnum.c\
ascii/ft_isascii.c\
ascii/ft_isprint.c\
ascii/ft_tolower.c\
ascii/ft_isdigit.c\
ascii/ft_toupper.c\
ascii/ft_isalpha.c\
printf/ft_putnbr_fd.c\
printf/ft_putptr_fd.c\
printf/ft_putendl_fd.c\
printf/ft_printf.c\
printf/ft_putulbase_fd.c\
printf/ft_putchar_fd.c\
printf/ft_putlbase_fd.c\
printf/ft_putstr_fd.c\
memory/ft_memchr.c\
memory/ft_memcmp.c\
memory/ft_memcpy.c\
memory/ft_memset.c\
memory/ft_bzero.c\
memory/ft_memmove.c\
memory/ft_calloc.c\

OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)
 
$(NAME): $(OBJ)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

main:
	$(CC) main/main.c $(NAME)

.PHONY: all clean fclean re main