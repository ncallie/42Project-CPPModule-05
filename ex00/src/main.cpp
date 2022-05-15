/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:15:05 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/03 12:24:54 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Bureaucrat.h"
#include <stdlib.h>

int main() {
    Bureaucrat bureaucrat("Oleg", 55);
    std::cout << bureaucrat << std::endl;
    bureaucrat.upGrade();
    std::cout << bureaucrat << std::endl;

    Bureaucrat bureaucrat1("Oleg1", 150);
    try {
        bureaucrat1.downGrade();
    } catch (Bureaucrat::GradeTooLowException exception){
        std::cout << "Bureaucrat Grade Too Low!" << std::endl;
    }

    Bureaucrat bureaucrat2("Oleg1", 1);
    try {
        bureaucrat2.upGrade();
    } catch (Bureaucrat::GradeTooHighException exception){
        std::cout << "Bureaucrat Grade Too High!" << std::endl;
    }
	system("leaks ex00");
}
