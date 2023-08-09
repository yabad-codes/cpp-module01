SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re