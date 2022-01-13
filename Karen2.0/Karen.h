#pragma once
#include <iostream>
#include <cstdlib>
class Karen {
private:
	std::string funname;
	void debug();
	void info();
	void warning();
	void error();
public:
	
	const std::string& getFunName() const;
	void setFunName(const std::string& name);
	void complain(std::string level);
};