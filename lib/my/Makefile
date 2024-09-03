##
## EPITECH PROJECT, 2023
## my_compute_square_root
## File description:
## fjdsgkjdfg
##

NAME = file

all:	$(NAME)

$(NAME):
	gcc -c *.c
	ar rc libmy.a *.o
	cp libmy.a ../libmy.a
	mkdir -p ../../include
	cp my.h ../../include/my.h
	make clean

clean:
	rm -f *.o
	find . -name "*~" -delete

fclean: clean
	rm -f *.o

re: fclean all
