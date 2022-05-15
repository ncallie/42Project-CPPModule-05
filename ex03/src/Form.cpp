/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:18 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/03 13:26:03 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.h"

Form::Form() : name("Default"), requiredGradeSigned(150), requiredGradeExec(150), isSigned(false) {
}

Form::Form(const std::string name, const int requiredGradeSigned, const int requiredGradeExec) : name(name), requiredGradeSigned(requiredGradeSigned), requiredGradeExec(requiredGradeExec), isSigned(false){
    if (requiredGradeSigned > MIN_GRADE) {
        throw Form::GradeTooLowException();
    } else if (requiredGradeSigned < MAX_GRADE) {
        throw Form::GradeTooHighException();
    }
}

Form::Form(const Form &other) : name(other.name), requiredGradeSigned(other.requiredGradeSigned), requiredGradeExec(other.requiredGradeExec), isSigned(other.isSigned){
}

Form &Form::operator=(const Form &other) {
    this->isSigned = other.isSigned;
    return *this;
}

Form::~Form() {
}


bool Form::getSigned() const{
    return isSigned;
}

int Form::getRequiredGradeSigned() const{
    return requiredGradeSigned;
}
int Form::getRequiredGradeExec() const {
    return requiredGradeExec;
}

void Form::beSigned(const Bureaucrat &bureaucrat){
    if (isSigned) {
        std::cout << "Form already signed" << std::endl;
    } else if (bureaucrat.getGrade() <= requiredGradeSigned) {
		this->isSigned = true;
        isSigned = true;
        std::cout << "Form signed" << std::endl;
    } else {
       throw Form::GradeTooLowException();
    }
}

void Form::execute(const Bureaucrat &bureaucrat) const {
    if (isSigned) {
        if (bureaucrat.getGrade() <= requiredGradeExec) {
            return;
        }
        else {
            throw Form::ExecFormTooLowException();
        }
    } else {
        throw Form::SignedFormException();
    }
}



std::string Form::getName() const {
    return name;
}


/*====Exception====*/
const char *Form::GradeTooHighException::what() const throw() {
    return "Form requiredGradeSigned Too High!";
}
const char *Form::GradeTooLowException::what() const throw() {
    return "Form requiredGradeSigned Too Low!";
}

const char *Form::SignedFormException::what() const _NOEXCEPT {
    return "Form not signed!";
}

const char *Form::ExecFormTooLowException::what() const _NOEXCEPT {
    return "Form requiredGradeExec Too Low!";
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "name: " << form.getName() << " isSigned: " << form.getSigned() << " requiredGradeSigned: " << form.getRequiredGradeSigned() << " requiredGradeExec: " << form.getRequiredGradeExec();
    return os;
}


