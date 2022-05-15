/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:17:56 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:21:19 by ncallie          ###   ########.fr       */
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
    Form();
    const std::string name;
    bool isSigned;
    const int requiredGradeSigned;
public:
    Form(const std::string name, const int requiredGradeSigned);
    Form(const Form &other);
    Form &operator = (const Form &other);
    ~Form();

    void beSigned(const Bureaucrat &bureaucrat);
    /*====Geters====*/
    std::string getName() const;
    bool getSigned() const;
    int getRequiredGradeSigned() const;

    /*====Exception====*/
    class GradeTooHighException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
};
std::ostream &operator<<(std::ostream &os, const Form &form);

