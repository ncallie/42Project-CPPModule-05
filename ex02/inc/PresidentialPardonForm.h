/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:22:25 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:22:27 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Form.h"

class PresidentialPardonForm : public Form{
private:
    std::string purpose;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string purpose);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
    ~PresidentialPardonForm();
    void execute(const Bureaucrat &bureaucrat) const;
};



