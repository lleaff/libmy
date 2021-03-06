SRC = \
				append_char.c \
				assign_and_free.c \
				bool.c \
				char_in_str.c \
				colors.c \
				debug.c \
				fail.c \
				int_in_arr.c \
				int_length.c \
				is_int.c \
				last_n_chars.c \
				linkedlist1.c \
				linkedlist2.c \
				linkedlist3.c \
				linkedlist4.c \
				linkedlist.c \
				linkedlist_debug.c \
				linkedlist_free.c \
				linkedlist_iter.c \
				linkedlist_str_concat.c \
				linkedlist_zip.c \
				my_calloc.c \
				my_getnbr.c \
				my_itoa.c \
				my_itoa_base.c \
				my_memcpy.c \
				my_memset.c \
				my_putchar.c \
				my_put_nbr.c \
				my_put_nbr_base.c \
				my_puterr.c \
				my_putstr.c \
				my_readfile.c \
				my_readline.c \
				my_readnchars.c \
				my_strcat.c \
				my_strcmp.c \
				my_strcpy.c \
				my_strlen.c \
				my_strncmp.c \
				my_strnew.c \
				my_strnpush.c \
				my_strpush.c \
				my_strstr.c \
				my_str_to_wordtab.c \
				noop.c \
				paths.c \
				set_to.c \
				str_eq.c \
				stringt.c \
				string_concat.c \
				units.c

OBJ = $(SRC:.c=.o)

OUT = ../libmy.a

CFLAGS = -Werror -Wall -Wextra
CC = gcc
AR = ar

all: $(OUT)

.c.o:
	$(CC) -fPIC $(CFLAGS) -c $< -o $@

$(OUT): $(OBJ)
	$(AR) rcs $(OUT) $(OBJ)

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUT)
