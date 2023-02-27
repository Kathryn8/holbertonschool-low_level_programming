CC=gcc
CFLAGS=-Wall -pedantic -Werror -Wextra -std=gnu89
RM=rm -rf
BETTY=betty

SRC0=0-main.c \
0-reset_to_98.c
OBJ0=$((SRC:.c=.o)
NAME0=0-reset_to_98

SRC1=1-main.c \
1-swap.c
OBJ1=$(SRC1:.c=.o)
NAME1=1-swap

SRC2=2-main.c \
2-strlen.c
OBJ2=$((SRC:.c=.o)
NAME2=2-strlen

SRC3=	3-main.c \
	3-puts.c
OBJ3=$((SRC:.c=.o)
NAME3=3-puts

SRC4=	4-main.c \
	4-print_rev.c
OBJ4=	$(SRC4:.c=.o)
NAME4=	4-print_rev

SRC5=5-main.c \
5-rev_string.c
OBJ5=$(SRC:.c=.o)
NAME5=5-rev_string

all: 0 1 2 3 4 5

0: $(OBJ0)
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(NAME0)

1: $(OBJ1)
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(NAME1)

2: $(OBJ2)
	$(BETTY) $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(NAME2)

3: $(OBJ3)
	$(BETTY) $(SRC3)
	$(CC) $(CFLAGS) _putchar.c $(SRC3) -o $(NAME3)

4: $(OBJ4)
	$(BETTY) $(SRC4)
	$(CC) $(CFLAGS) _putchar.c $(SRC4) -o $(NAME4)

4-dev:
	$(CC) _putchar.c $(SRC4) -o $(NAME4)

5: $(OBJ5)
	$(BETTY) $(SRC5)
	$(CC) $(CFLAGS) _putchar.c $(SRC5) -o $(NAME5)

5-dev:
	$(CC) $(SRC5) $(NAME5)

1-dev: $(OBJ1)
	$(CC) $(SRC1) -o $(NAME1)

clean:
	$(RM) *~ \#*\# \.\#* \
	$(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)

fclean: clean
	$(RM) $(OBJ0) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5)

re: fclean all
