CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = AMateria
SRC = main.cpp \
	AMateria.cpp \
	MateriaSource.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all