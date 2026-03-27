


Name = Form

src = main.cpp Bureaucrat.cpp Form.cpp

obj = ${src:.cpp=.o}

cpp = c++ #-Wall -Werror -Wextra -std=c++98

all : ${Name} 

${Name} : ${obj}
	${cpp} ${obj} -o $@

%.o:%.cpp Bureaucrat.h Form.h
	${cpp}  -c $< -o $@

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re : fclean all 


