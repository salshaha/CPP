CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = PhoneBook

all: $(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f  $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all