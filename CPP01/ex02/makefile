NAME = hi
SRC_FILE = main.cpp
OBJ_FILE = $(SRC_FILE:.cpp=.o)
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
RM = rm -rf
PP = g++

all : $(NAME)

$(NAME) : $(OBJ_FILE)
	$(PP) $(CPPFLAGS) $(SRC_FILE) -o $(NAME)

clean :
	$(RM) $(OBJ_FILE)

fclean : clean
	$(RM) $(NAME)


re : fclean $(NAME)

.PHONY : all clean fclean re
