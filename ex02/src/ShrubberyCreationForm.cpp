/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:22:58 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/29 16:23:01 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm()
                        : Form("ShrubberyCreationForm", 145, 137), target("Default"){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
                        : Form("ShrubberyCreationForm", 145, 137), target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), target(other.target) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    this->target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
    Form::execute(bureaucrat);
    std::fstream f;
    f.open(target + "_shrubbery", std::fstream::out | std::fstream::trunc);
    if (!f.is_open())
    f << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
    f << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    f << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
    f << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    f << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
    f << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    f << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    f << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
    f << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
    f << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
    f << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
    f << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
    f << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
    f << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
    f << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
    f << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
    f << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
    f << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
    f << "              (_)  \\.-'.-/" << std::endl;
    f << "          __...--- |'-.-'| --...__" << std::endl;
    f << "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
    f << "-\"    ' .  . '    |.'-._| '  . .  '" << std::endl;
    f << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
    f << "          ' ..     |'-_.-|" << std::endl;
    f << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
    f << "              .'   |'- .-|   '." << std::endl;
    f << "  ..-'   ' .  '.   `-._.-|   .'  '  - ." << std::endl;
    f << "   .-' '        '-._______.-'     '  ." << std::endl;
    f << "        .      ~," << std::endl;
    f << "    .       .        .    ' '-." << std::endl;
    f.close();
}
