/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:00 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:27:02 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.h"
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form{
private:
    std::string target;
    RobotomyRequestForm();

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
    ~RobotomyRequestForm();
    void execute(const Bureaucrat &bureaucrat) const;
};



