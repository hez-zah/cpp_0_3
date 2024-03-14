NAME = crappy
SRC_FILE = phonebook.cpp utils_phonebook.cpp phone_getset.cpp
OBJ_FILE = $(@SRC_FILE:.cpp=.o)
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
HEADER = phonebook.hpp
RM = rm -rf
PP = g++

BLUE = \033[0;34m
RED = \033[0;31m

all : $(NAME)

%.o:%.cpp $(HEADER)
	$(PP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILE)
	@$(PP) $(CPPFLAGS) $(SRC_FILE) -o $(NAME)
	@echo "$(BLUE)make cpp00/ex01"

clean :
	@$(RM) $(OBJ_FILE)

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)clean cpp00/ex01"

re : fclean $(NAME)

.PHONY : all clean fclean re
