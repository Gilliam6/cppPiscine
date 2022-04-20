CFLAGS = -std=c++98 -Wall -Wextra -Werror
CPP = c++

NAME = PhoneBook

SOURCE = Contact.class.cpp PhoneBook.class.cpp main.cpp

INCLUDE = Contact.class.hpp PhoneBook.class.hpp PhoneBook.hpp

RM = rm -f

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m


all: $(NAME)

$(NAME): $(SOURCE) $(INCLUDE)
		@$(CPP) $(CFLAGS) $(SOURCE) -o $(NAME)
		@echo "\n$(NAME):$(GREEN)created =)!\n$(RESET)"

clean:
		@echo "$(NAME):$(GREEN) is cleaned$(RESET)"
		@rm -rf $(NAME)

fclean: clean

re : fclean all

.PHONY: all clean fclean re