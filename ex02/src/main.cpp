/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:22:46 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/03 13:34:14 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Bureaucrat.h"
#include "../inc/Form.h"
#include "../inc/PresidentialPardonForm.h"
#include "../inc/RobotomyRequestForm.h"
#include "../inc/ShrubberyCreationForm.h"
#include <stdlib.h>

int main() {
	std::cout << "---------Test 1-------------" << std::endl;
    Bureaucrat bureaucrat("Oleg", 1);
    ShrubberyCreationForm shrubberyCreationForm("ShrubberyCreationForm");
    bureaucrat.signForm(shrubberyCreationForm);
    bureaucrat.executeForm(shrubberyCreationForm);

	std::cout << "---------Test 2-------------" << std::endl;
	RobotomyRequestForm robotomyRequestForm("RobotomyRequestForm");
	bureaucrat.signForm(robotomyRequestForm);
	bureaucrat.executeForm(robotomyRequestForm);

	std::cout << "---------Test 3-------------" << std::endl;
	PresidentialPardonForm presidentialPardonForm("PresidentialPardonForm");
	bureaucrat.signForm(presidentialPardonForm);
	bureaucrat.executeForm(presidentialPardonForm);

	std::cout << "---------Test 4-------------" << std::endl;
	// Form form("error");
	// Form *form1 = new Form("error");

	std::cout << "---------Test 5-------------" << std::endl;
	RobotomyRequestForm *robotomyRequestForm_new = new RobotomyRequestForm("robotomyRequestForm_new");
	Bureaucrat *bureaucrat_new = new Bureaucrat("Oleg_new", 1);
	bureaucrat_new->signForm(*robotomyRequestForm_new);
	bureaucrat_new->executeForm(*robotomyRequestForm_new);
	delete robotomyRequestForm_new;
	delete bureaucrat_new;

	// std::cout << "---------Test 6 error-------------" << std::endl;
	// RobotomyRequestForm *robotomyRequestForm_error;
	// bureaucrat_new->signForm(*robotomyRequestForm_new);
	// bureaucrat_new->executeForm(*robotomyRequestForm_new);
	
	system("leaks ex02");
}
