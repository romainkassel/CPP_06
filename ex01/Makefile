NAME = Serialization

SRCS = ./srcs/

INCLUDES = -Iincludes

CPPFILES = 	$(SRCS)Serializer.cpp $(SRCS)Data.cpp $(SRCS)main.cpp 

OFILES = $(CPPFILES:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re