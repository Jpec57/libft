NAME = libft.a

SRCS = *.c

INCLUDES = libft.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

so:
	gcc -fPIC -c $(FLAGS) $(SRCS) && gcc -fPIC -shared -o libft.so *.o

$(NAME):
	gcc -c $(FLAGS) $(SRCS) && ar rc libft.a *.o

clean:
	rm *.o

fclean:
	rm libft.a

re: fclean all
