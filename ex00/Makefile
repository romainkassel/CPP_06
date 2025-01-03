NAME = ConvOfScalarTypes

SRCS = ./srcs/

INCLUDES = -Iincludes

CPPFILES = 	$(SRCS)ScalarConverter.cpp $(SRCS)main.cpp $(SRCS)ScalarConverterUtils.cpp \
			$(SRCS)ScalarConverterUtilsChar.cpp $(SRCS)ScalarConverterUtilsInt.cpp \
			$(SRCS)ScalarConverterUtilsFloat.cpp $(SRCS)ScalarConverterUtilsDouble.cpp \
			tests/testChar.cpp tests/testInt.cpp tests/testFloat.cpp tests/testDouble.cpp tests/testImpossible.cpp \
			tests/testUtilsCopyByAffectation.cpp tests/testUtilsCopyByConstructor.cpp
OFILES = $(CPPFILES:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

tests/%.o: tests/%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re