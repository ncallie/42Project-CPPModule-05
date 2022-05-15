/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:18:14 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:18:16 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.h"

Form::Form() : name("Default"), requiredGradeSigned(150), isSigned(false) {
}

Form::Form(const std::string name, const int requiredGradeSigned) : name(name), requiredGradeSigned(requiredGradeSigned), isSigned(false){
    if (requiredGradeSigned > MIN_GRADE) {
        throw Form::GradeTooLowException();
    } else if (requiredGradeSigned < MAX_GRADE) {
        throw Form::GradeTooHighException();
    }
}

Form::Form(const Form &other) : name(other.name), requiredGradeSigned(other.requiredGradeSigned), isSigned(other.isSigned){
}

Form &Form::operator=(const Form &other) {
    this->isSigned = other.isSigned;
    return *this;
}

Form::~Form() {
}

std::string Form::getName() const{
    return name;
}

bool Form::getSigned() const{
    return isSigned;
}

int Form::getRequiredGradeSigned() const{
    return requiredGradeSigned;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (isSigned) {
        std::cout << "Form already signed" << std::endl;
    } else if (bureaucrat.getGrade() <= requiredGradeSigned) {
        isSigned = true;
    } else {
       throw Form::GradeTooLowException();
    }
}


/*====Exception====*/
const char *Form::GradeTooHighException::what() const throw() {
    return "Form requiredGradeSigned Too High!";
}
const char *Form::GradeTooLowException::what() const throw() {
    return "Form requiredGradeSigned Too Low!";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "name: " << form.getName() << " isSigned: " << form.getSigned() << " requiredGradeSigned: " << form.getRequiredGradeSigned();
    return os;
}
