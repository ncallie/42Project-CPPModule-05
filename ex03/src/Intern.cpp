/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:23 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:27:25 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.h"

Intern::Intern() {
}

Intern::Intern(const Intern *other) {
}

Intern &Intern::operator=(const Intern &other) {
    return *this;
}

Intern::~Intern() {
}

Form *Intern::makeForm(std::string name, std::string target){
    Form *form;
    int indexForm = NOT_FOUND_FORM;
    std::string forms[COUNt_FORMS] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    for (int i = 0; i < COUNt_FORMS; i++) {
        if (name == forms[i]) {
            indexForm = i;
        }
    }
    switch (indexForm) {
        case 0:
            form = new PresidentialPardonForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new ShrubberyCreationForm(target);
            break;
        default:
            throw FormNotFoundException();
    }
    std:: cout << "Intern creates " << forms[indexForm] << std::endl;
    return form;
}

const char *Intern::FormNotFoundException::what() const throw() {
    return "Form not found";
}
