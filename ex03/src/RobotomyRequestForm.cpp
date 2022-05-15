/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:34 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:27:36 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm()
                    : Form("RobotomyRequestForm", 72, 45), target("Default"){

}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
                : Form("RobotomyRequestForm", 72, 45), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), target(other.target){
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    this->target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
    Form::execute(bureaucrat);
    std::cout << "Bzzzzzzz...Bzzzzzzz" << std::endl;
    std::srand(time(NULL));
    if (std::rand() % 2) {
        std::cout << target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << target << " robotization failed." << std::endl;
    }
}
