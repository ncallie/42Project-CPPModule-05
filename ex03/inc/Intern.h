/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:26:49 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:26:51 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#define COUNt_FORMS 3
#define NOT_FOUND_FORM 5;


class Intern {
public:
    Intern();
    Intern(const Intern *other);
    Intern &operator = (const Intern &other);
    ~Intern();
    Form *makeForm(std::string name, std::string target);

    class FormNotFoundException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
};
