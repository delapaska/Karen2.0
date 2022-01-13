#include <iostream>
#include <cstdlib>
#include "Karen.h"

void Karen::debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info() {
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!"<< std::endl;
}
void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month"<< std::endl;
}
void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl;
}
const std::string& Karen::getFunName() const {
	return funname;
}

void Karen::setFunName(const std::string& name) {
	funname = name;
}
void Karen::complain(std::string level) {
	level = funname;
	if (level == "debug") {
		Karen::debug();
	}
	else if (level == "info") {
		Karen::info();
	}
	else if (level == "warning") {
		Karen::warning();
	}
	else if (level == "error") {
		Karen::error();
	}
	else {
		std::cout << "Nothing"<< std::endl;
	}

}
