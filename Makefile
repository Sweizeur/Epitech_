##
## EPITECH PROJECT, 2023
## makefile
## File description:
## 10
##

SRC	=	./my_ls.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

CFLAGS	=	-W -Wall -Wextra

LDFLAGS	=	-L./lib/my -lmy

all:	$(NAME) fclean

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	find . -name '#*#' -delete -o -name '*~' -delete
	find . -name "coding-style-reports.log" -delete
	find . -name "vgcore*" -delete

fclean: clean

re: fclean all

.PHONY:	clean all fclean re
