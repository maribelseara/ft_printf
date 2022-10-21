NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
AR = ar src
OBJ_DIR = ./obj/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEPS = $(addsuffix .d, $(basename $(OBJS)))
SRC = ft_printf.c ft_collect_args.c ft_utils_char.c ft_utils_str.c ft_utils_hex.c ft_utils_num.c

$(OBJ_DIR)%.o: %.c Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) -MMD -I./ $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

-include $(DEPS)

.PHONY : clean fclean re all

clean : 
	rm -rf $(OBJLIB) $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
