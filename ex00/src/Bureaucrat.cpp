/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:15:01 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:15:04 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade > MIN_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    } else if (grade < MAX_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    this->grade = other.grade;
    return *this;
}

/*====Geters====*/
std::string Bureaucrat::getName() const {
    return name;
}
int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::upGrade() {
    if (grade != MAX_GRADE) {
        grade--;
    } else {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::downGrade() {
    if (grade != MIN_GRADE) {
        grade++;
    } else {
        throw Bureaucrat::GradeTooLowException();
    }
}

/*====Exception====*/
const char *Bureaucrat::GradeTooHighException::what() const throw() {

    return "Bureaucrat Grade Too High!";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat Grade Too Low!";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
