/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:26:46 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/03 13:26:04 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define MIN_GRADE 150
#define MAX_GRADE 1

#include <string>
#include <ostream>
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool isSigned;

    const int requiredGradeSigned;
    const int requiredGradeExec;
public:
    Form();
    Form(const std::string name, const int requiredGradeSigned, const int requiredGradeExec);
    Form(const Form &other);
    Form &operator = (const Form &other);
    virtual ~Form();


    void beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &bureaucrat) const = 0;

    /*====Geters====*/
    std::string getName() const;
    bool getSigned() const;
    int getRequiredGradeSigned() const;
    int getRequiredGradeExec() const;


    /*====Exception====*/
    class GradeTooHighException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
    class SignedFormException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
    class ExecFormTooLowException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
};
std::ostream &operator<<(std::ostream &os, const Form &form);

