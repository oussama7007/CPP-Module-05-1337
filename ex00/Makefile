


Name = Bureaucrat

src = main.cpp Bureaucrat.cpp 

obj = ${src:.cpp=.o}

cpp = c++  -Wall -Werror -Wextra -std=c++98

all : ${Name} 

${Name} : ${obj}
	${cpp} ${obj} -o $@

%.o:%.cpp Bureaucrat.h
	${cpp}  -c $< -o $@

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re : fclean all 
