


Name = AForm

SRC = Bureaucrat.cpp \
      AForm.cpp \
      PresidentialPardonForm.cpp \
      RobotomyRequestForm.cpp \
      ShrubberyCreationForm.cpp \
	  Intern.cpp \
	  main.cpp

obj = ${SRC:.cpp=.o}

inc = Bureaucrat.h AForm.h ShrubberyCreationForm.h RobotomyRequestForm.h PresidentialPardonForm.h Intern.h

cpp = c++ -Wall -Werror -Wextra -std=c++98

all : ${Name} 

${Name} : ${obj}
	${cpp} ${obj} -o $@

%.o:%.cpp ${inc}
	${cpp}  -c $< -o $@

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re : fclean all 


