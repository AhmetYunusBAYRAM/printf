NAME        = libftprintf.a
LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I. -I$(LIBFT_DIR)
RM          = rm -f
AR          = ar rcs

SRCS        = ft_printf.c \
              src/ft_print_char.c \
              src/ft_print_str.c \
              src/ft_print_ptr.c \
              src/ft_print_nbr.c \
              src/ft_print_uint.c \
              src/ft_print_hex.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

# Alt klasördeki .c'leri .o'ya çevirmek için genel kural
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re