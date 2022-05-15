/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:18:18 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/03 12:40:49 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.h"
#include "../inc/Form.h"
#include <stdlib.h>

int main() {
	std::cout << "---------Test 1-------------" << std::endl;
    Form form("form", 20);
    Bureaucrat bureaucrat("Oleg", 15);
    bureaucrat.signForm(form);
	
	std::cout << "---------Test 2-------------" << std::endl;
	Form form_copy(form);
	Bureaucrat bureaucrat_copy(bureaucrat);
	bureaucrat_copy.signForm(form_copy);
	
	std::cout << "---------Test 3-------------" << std::endl;
	Bureaucrat *bureaucrat1 = new Bureaucrat("Igor", 10);
	Form *form1 = new Form("form_new", 50);
	bureaucrat.signForm(*form1);
	delete bureaucrat1;
	delete form1;
	
	std::cout << "---------Test 4-------------" << std::endl;
	bureaucrat1 = new Bureaucrat("Igor", 145);
	form1 = new Form("form_new_copy", 150);
	Bureaucrat bureaucrat2(*bureaucrat1);
	Form form2(*form1);
	bureaucrat2.signForm(form2);
	delete bureaucrat1;
	delete form1;
	
	
	system("leaks ex01");
}
