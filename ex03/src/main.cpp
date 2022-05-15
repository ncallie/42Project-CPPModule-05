/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:26 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/03 13:35:39 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"
#include "../inc/Intern.h"
#include "../inc/PresidentialPardonForm.h"
#include <stdlib.h>

int main() {
	std::cout << "---------Test 1-------------" << std::endl;
    Intern intern;
    Bureaucrat bureaucrat("Bureaucrat", 1);
    Form *form;
    form = intern.makeForm("RobotomyRequestForm", "RobotomyRequestForm");
    bureaucrat.signForm(form);
    bureaucrat.executeForm(form);
	delete form;
	
	std::cout << "---------Test 2-------------" << std::endl;
	form = intern.makeForm("PresidentialPardonForm", "PresidentialPardonForm");
    bureaucrat.signForm(form);
    bureaucrat.executeForm(form);
	delete form;
	
	std::cout << "---------Test 3-------------" << std::endl;
	form = intern.makeForm("ShrubberyCreationForm", "ShrubberyCreationForm");
    bureaucrat.signForm(form);
    bureaucrat.executeForm(form);
	delete form;
	
	std::cout << "---------Test 4-------------" << std::endl;
	Form *form1 = NULL;
	Intern intern1;
	try {
		form1 = intern1.makeForm("error", "error");
	} catch (Intern::FormNotFoundException &ex) {
		std::cout << ex.what() << std::endl;
	}
	bureaucrat.signForm(form1);
    bureaucrat.executeForm(form1);

	std::cout << "---------Test 5-------------" << std::endl;
	PresidentialPardonForm presidentialPardonForm("PresidentialPardonForm");
	bureaucrat.signForm(&presidentialPardonForm);
	bureaucrat.executeForm(&presidentialPardonForm);

	system("leaks ex03");
}
