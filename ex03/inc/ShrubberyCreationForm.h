/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:06 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:27:08 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string>
#include "Bureaucrat.h"
#include <fstream>

class ShrubberyCreationForm : public Form{
private:
    std::string target;
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    void execute(const Bureaucrat &bureaucrat) const;
};

