


Name = AForm

SRC = Bureaucrat.cpp \
      AForm.cpp \
      PresidentialPardonForm.cpp \
      RobotomyRequestForm.cpp \
      ShrubberyCreationForm.cpp \
	  main.cpp

obj = ${SRC:.cpp=.o}

inc = Bureaucrat.h AForm.h ShrubberyCreationForm.h RobotomyRequestForm.h PresidentialPardonForm.h

cpp = c++ -Wall -Werror -Wextra -std=c++98

all : ${Name} 

${Name} : ${obj}
	${cpp} ${obj} -o $@

%.o:%.cpp ${inc}
	${cpp}  -c $< -o $@

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Nawme}

re : fclean all 


