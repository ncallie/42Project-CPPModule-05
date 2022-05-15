/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:27:30 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:27:32 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.h"



PresidentialPardonForm::PresidentialPardonForm()
                        : Form("PresidentialPardonForm", 25, 5), purpose("Default"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string purpose)
                        : Form("PresidentialPardonForm", 25, 5), purpose(purpose) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other), purpose(other.purpose){
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    this->purpose = other.purpose;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
    Form::execute(bureaucrat);
    std::cout << purpose << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}






