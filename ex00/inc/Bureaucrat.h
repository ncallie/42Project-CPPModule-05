/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:15:10 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:15:12 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_BUREAUCRAT_H
#define EX00_BUREAUCRAT_H
#define MAX_GRADE 1
#define MIN_GRADE 150


#include <string>
#include <ostream>

class Bureaucrat {
private:
    Bureaucrat();
    const std::string name;
    int grade;

public:
    Bureaucrat(const std::string& name, int range);
    virtual ~Bureaucrat();
    Bureaucrat (const Bureaucrat &other);
    Bureaucrat &operator = (const Bureaucrat &other);


    /*====Exception====*/
    class GradeTooHighException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };

    /*====Geters====*/
    std::string getName() const;
    int getGrade() const;

    void upGrade();
    void downGrade();

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //EX00_BUREAUCRAT_H
