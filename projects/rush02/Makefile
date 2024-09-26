NAME = rush-02
TEST = debug-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
CDEBFLAGS = $(CFLAGS) -g
SRCS = main.c parse_dict.c parse_numbers.c convert_numbers.c str_utils.c struct_utils.c
OBJS = $(SRCS:.c=.o)
DOBJS = $(SRCS:.c=.do)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug: $(TEST)

$(TEST): $(DOBJS)
	$(CC) $(CDEBFLAGS) $(DOBJS) -o $(TEST)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
%.do: %.c
	$(CC) $(CDEBFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DOBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re debug
