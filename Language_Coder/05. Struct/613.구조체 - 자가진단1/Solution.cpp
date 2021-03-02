#include "Solution.h"

void Solution::data_input(){
	std::cout << "What you're name?" << std::endl;
	std::cin >> cp->name;
	if (cp->name.size() > 20) {
		std::cout << "error"<<std::endl;
		exit(0);
	}
	std::cout << "What is the name of your company?"<<std::endl;
	std::cin >> cp->company_name;
	if (cp->company_name.size() > 20) {
		std::cout << "error" << std::endl;
		exit(0);
	}
	std::cout << "What's your company number?" << std::endl;
	std::cin >> cp->number;
}

void Solution::data_output(){
	if (cp->company_name.size() > 0 && cp->name.size() > 0) {
		std::cout << "Name : " << cp->name<<std::endl;
		std::cout << "Company : " << cp->company_name << std::endl;
		std::cout << "Number : " << cp->number << std::endl;
	}
}

void Solution::run(){
	data_input();
	data_output();
}
